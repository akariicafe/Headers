@class NSString, NSDictionary;

@interface WFSettingsProxy : NSObject <WFSettingsPersistable>

@property (copy, nonatomic) NSString *server;
@property (copy, nonatomic) NSString *port;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *autoConfigureURL;
@property (retain, nonatomic) NSDictionary *items;
@property (nonatomic) BOOL customProxy;
@property (nonatomic) BOOL authenticated;
@property (nonatomic) BOOL autoConfigured;
@property (nonatomic) BOOL autoDiscoveryEnabled;
@property (copy, nonatomic) NSString *password;
@property (readonly, nonatomic, getter=isAutomatic) BOOL automatic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultProxyConfiguration;
+ (id)offConfig;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)protocol;
- (id)initDefaultConfig;
- (id)initWithManualServer:(id)a0 port:(id)a1 username:(id)a2 password:(id)a3;
- (id)initWithAutoConfigureURL:(id)a0;

@end
