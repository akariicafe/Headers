@class NSString, NSDictionary, NSArray, NSUUID;

@interface SOKerberosHeimdalPluginSettings : NSObject <NSSecureCoding>

@property (class, retain) NSString *appSSOKerberosCacheName;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *realm;
@property (nonatomic, getter=isDefaultRealm) BOOL defaultRealm;
@property (retain, nonatomic) NSDictionary *domainRealmMapping;
@property (retain, nonatomic) NSArray *hosts;
@property (retain, nonatomic) NSArray *kdcs;
@property (nonatomic) long long credentialUseMode;
@property (retain, nonatomic) NSString *siteCode;
@property (retain, nonatomic) NSUUID *currentCredential;

+ (struct HeimCred_s { } *)retrieveCacheEntry;
+ (void)deleteAllSettings;
+ (id)retrieveAllCurrentSettings;
+ (BOOL)deleteSettingsForRealm:(id)a0 error:(id *)a1;
+ (BOOL)createSettingCacheEntryIfNeededWithError:(id *)a0;
+ (id)stringWithCredentialUseMode:(long long)a0;
+ (id)retrieveCurrentSettingsForRealm:(id)a0 error:(id *)a1;
+ (struct HeimCred_s { } *)createCacheEntryWithError:(id *)a0;
+ (struct HeimCred_s { } *)retrieveSetting:(id)a0 forRealm:(id)a1;
+ (struct HeimCred_s { } *)retrieveCurrentSettingsForRealm:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)saveWithError:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithRealm:(id)a0;
- (BOOL)saveSetting:(id)a0 data:(id)a1 withError:(id *)a2;

@end
