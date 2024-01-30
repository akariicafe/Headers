@class NSString, NSMutableDictionary;
@protocol NEProfilePayloadBaseDelegate;

@interface MCVPNPayloadBase : MCPayload

@property (retain, nonatomic) NSString *userNameKey;
@property (retain, nonatomic) NSString *passwordKey;
@property (retain, nonatomic) NSString *proxyUserNameKey;
@property (retain, nonatomic) NSString *proxyPasswordKey;
@property (retain, nonatomic) NSString *sharedSecretKey;
@property (retain, nonatomic) NSString *pinKey;
@property (retain, nonatomic) NSMutableDictionary *configurationDictionary;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *vpnType;
@property (retain, nonatomic) id<NEProfilePayloadBaseDelegate> nePayloadBase;

+ (id)NEAlwaysOnVPNPayloadBaseDelegateWithConfigurationDict:(id)a0;
+ (id)NEVPNPayloadBaseDelegateWithConfigurationDict:(id)a0;

- (id)verboseDescription;
- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)installationWarnings;
- (BOOL)isPayloadAllowed;

@end
