@class NSString, NSDate, AMSBag, AMSProcessInfo;

@interface IMURLBag : NSObject <AMSBagProtocol>

@property (retain, nonatomic) AMSBag *bag;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)registerBagKeys:(id)a0;
+ (void)_registerBagKeysIfNeeded;

- (id)personalizedLookupURL;
- (id)init;
- (void).cxx_destruct;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)stringForKey:(id)a0;
- (id)metricsURL;
- (id)unpersonalizedLookupURL;
- (id)mescalSetupURL;
- (id)mescalSignSapRequests;
- (id)mescalSignedActions;
- (id)boolForKey:(id)a0;
- (id)mescalCertificateURL;
- (id)integerForKey:(id)a0;
- (id)trustedDomains;
- (id)dictionaryForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)mescalSignSapResponses;
- (id)metricsDictionary;
- (id)arrayForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (id)reportAConcernURL;
- (void)reportAConcernURLWithCompletion:(id /* block */)a0;
- (id)podcastsMediaAPIHostUrl;
- (id)mediaTaskCountryCode;
- (id)tokenServiceUrl;

@end
