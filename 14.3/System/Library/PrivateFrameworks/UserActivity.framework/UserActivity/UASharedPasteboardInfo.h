@class NSArray, NSString, NSFileHandle, NSDictionary;

@interface UASharedPasteboardInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSFileHandle *dataFile;
@property long long dataSize;
@property (copy) NSArray *items;
@property (copy) NSString *sharedDataPath;
@property (copy) NSDictionary *sandboxExtensions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
