@class NSString, NSArray, NSDictionary, NSNumber;

@interface SOKerberosExtensionData : NSObject

@property (retain, nonatomic) NSString *cacheName;
@property (retain, nonatomic) NSString *principalName;
@property (retain, nonatomic) NSString *siteCode;
@property (retain, nonatomic) NSString *certificateUUID;
@property (nonatomic) BOOL useSiteAutoDiscovery;
@property (retain, nonatomic) NSArray *credentialBundleIdACL;
@property (nonatomic) BOOL includeManagedAppsInBundleIdACL;
@property (nonatomic) BOOL includeKerberosAppsInBundleIdACL;
@property (retain, nonatomic) NSDictionary *domainRealmMapping;
@property (nonatomic) BOOL isDefaultRealm;
@property (nonatomic) BOOL allowPasswordChange;
@property (nonatomic) BOOL allowAutomaticLogin;
@property (nonatomic) BOOL requireUserPresence;
@property (retain, nonatomic) NSString *pwChangeURL;
@property (retain, nonatomic) NSNumber *pwExpireOverride;
@property (retain, nonatomic) NSNumber *pwNotificationDays;
@property BOOL pwReqComplexity;
@property (retain, nonatomic) NSNumber *pwReqLength;
@property (retain, nonatomic) NSNumber *pwReqMinAge;
@property (retain, nonatomic) NSNumber *pwReqHistory;
@property (retain, nonatomic) NSString *pwReqText;
@property (retain, nonatomic) NSString *helpText;
@property (retain, nonatomic) NSString *customUsernameLabel;
@property (retain, nonatomic) NSNumber *replicationTime;
@property BOOL syncLocalPassword;
@property BOOL monitorCredentialsCache;
@property BOOL delayUserSetup;
@property (nonatomic) long long credentialUseMode;
@property BOOL requireTLSForLDAP;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSArray *preferredKDCs;
@property (nonatomic) BOOL usePlatformSSOTGT;
@property (nonatomic) BOOL allowPlatformSSOAuthFallback;
@property (nonatomic) BOOL performKerberosOnly;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
