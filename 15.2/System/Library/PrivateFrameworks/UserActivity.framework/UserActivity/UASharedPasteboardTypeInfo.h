@class NSString, NSUUID, NSFileHandle, NSNumber;

@interface UASharedPasteboardTypeInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *type;
@property (copy) NSUUID *uuid;
@property (copy) NSNumber *offset;
@property long long size;
@property (retain) NSFileHandle *dataFile;
@property BOOL preferFileRep;
@property (copy) NSString *typeHint;
@property (copy) NSNumber *index;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
