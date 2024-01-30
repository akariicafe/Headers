@class NSArray, NSURL;

@interface PKPaymentTokenConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long configurationType;
@property (copy, nonatomic) NSArray *multiTokenContexts;
@property (nonatomic) BOOL requestMerchantToken;
@property (retain, nonatomic) NSURL *merchantTokenManagementURL;
@property (retain, nonatomic) NSURL *merchantTokenNotificationURL;

+ (id)multiTokenConfigurationWithContexts:(id)a0;
+ (id)merchantTokenConfigurationWithManagementURL:(id)a0 notificationURL:(id)a1;
+ (long long)version;
+ (id)configurationWithProtobuf:(id)a0;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)protobuf;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToPaymentTokenConfiguration:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
