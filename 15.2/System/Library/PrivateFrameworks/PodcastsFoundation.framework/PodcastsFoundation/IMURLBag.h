@class AMSBag, NSString, AMSProcessInfo, NSDate, IMMutableBagKeySet, NSObject;
@protocol OS_dispatch_queue;

@interface IMURLBag : NSObject <AMSBagProtocol>

@property (retain, nonatomic) AMSBag *bag;
@property (retain, nonatomic) IMMutableBagKeySet *keySet;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long downloadLimitPodcast;
@property (nonatomic) long long downloadLimitVideoPodcast;
@property (nonatomic) double libraryShowFetchThresholdDefaultValue;
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

- (id)metricsURL;
- (id)dictionaryForKey:(id)a0;
- (id)trustedDomains;
- (id)integerForKey:(id)a0;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)mescalSignSapResponses;
- (id)arrayForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mescalSignedActions;
- (id)mescalCertificateURL;
- (id)personalizedLookupURL;
- (id)boolForKey:(id)a0;
- (id)metricsDictionary;
- (id)unpersonalizedLookupURL;
- (id)mescalSignSapRequests;
- (id)mescalSetupURL;
- (id)syncStringForKey:(id)a0;
- (id)syncValueForKey:(id)a0;
- (void)_registerBagKeysIfNeeded;
- (id)reportAConcernURL;
- (void)reportAConcernURLWithCompletion:(id /* block */)a0;
- (id)metricsSessionDurationPageRender;
- (id)metricsSamplingPercentageUsersPageRender;
- (id)metricsSamplingPercentageUsersLog;
- (id)metricsSessionDurationLog;
- (id)metricsImpressionableThreshold;
- (id)metricsImpressionableViewablePercentage;
- (id)metricsFastImpressionTimeout;
- (id)backgroundFetchInterval;
- (id)libraryShowFetchThreshold;
- (id)podcastsMediaAPIHostUrl;
- (id)mediaTaskCountryCode;
- (id)tokenServiceUrl;
- (id)personalizedChannelPollingInterval;
- (id)podcastsLicenseCert;
- (id)podcastsLicenseStreamingStart;
- (id)podcastsLicenseStreamingRenew;
- (id)podcastsLicenseStreamingStop;
- (id)podcastsLicenseOfflineStart;
- (id)podcastsLicenseOfflineRenew;
- (id)podcastsLicenseOfflineStop;
- (id)podcastsLicenseOfflineStopNonce;
- (id)pushNotificationRegistration;
- (unsigned long long)explicitContentBadgeTreatment;
- (id)storefrontSupportsColdStart;
- (id)coldStartLandOnListenNow;

@end
