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

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
