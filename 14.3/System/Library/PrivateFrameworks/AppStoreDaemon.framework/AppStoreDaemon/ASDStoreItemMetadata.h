@class NSDictionary, NSString;

@interface ASDStoreItemMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *propertiesDictionary;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) long long storeItemIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)storeTransationID;
- (id)initWithDictionary:(id)a0;
- (id)cancelDownloadURL;
- (void)encodeWithCoder:(id)a0;
- (id)requiredDeviceCapabilities;

@end
