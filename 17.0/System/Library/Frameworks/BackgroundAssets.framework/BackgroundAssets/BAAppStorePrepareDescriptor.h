@class NSString, NSDictionary;

@interface BAAppStorePrepareDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSDictionary *appStoreMetadata;
@property (readonly, nonatomic) unsigned long long clientType;
@property (nonatomic) unsigned long long cellularPolicy;
@property (nonatomic) BOOL userInitiated;

+ (id)new;
+ (id)descriptorWithAppBundleIdentifier:(id)a0 appStoreMetadata:(id)a1 client:(unsigned long long)a2;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
