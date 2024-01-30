@class AMSBagValue, NSString;
@protocol AMSBagProtocol, AMSMescalBagContract, AMSMetricsBagContract;

@interface AMSDeprecatedBagContract : NSObject <AMSDeviceOfferBagContract, AMSMetricsBagContract, AMSMescalBagContract, AMSLookupBagContract>

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) AMSBagValue *appleMusicDeviceOfferDeepLink;
@property (readonly, nonatomic) AMSBagValue *iCloudDeviceOfferDeepLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AMSBagValue *metricsURL;
@property (readonly, nonatomic) AMSBagValue *metricsDictionary;
@property (readonly, nonatomic) AMSBagValue *metricsUrl;
@property (readonly, nonatomic) AMSBagValue *apsEnabledPatterns;
@property (readonly, nonatomic) AMSBagValue *apsSamplingPercent;
@property (readonly, nonatomic) AMSBagValue *apsAllowedProductTypes;
@property (readonly, nonatomic) AMSBagValue *guidRegexes;
@property (readonly, nonatomic) AMSBagValue *guidSchemes;
@property (readonly, nonatomic) id<AMSMescalBagContract> mescalContract;
@property (readonly, nonatomic) AMSBagValue *storefrontSuffix;
@property (readonly, nonatomic) AMSBagValue *TLSSamplingPercentage;
@property (readonly, nonatomic) AMSBagValue *TLSSamplingSessionDuration;
@property (readonly, nonatomic) AMSBagValue *TFOSamplingPercentage;
@property (readonly, nonatomic) AMSBagValue *TFOSamplingSessionDuration;
@property (readonly, nonatomic) AMSBagValue *trustedDomains;
@property (readonly, nonatomic) id<AMSMetricsBagContract> metricsContract;
@property (readonly, nonatomic) AMSBagValue *mescalCertificateURL;
@property (readonly, nonatomic) AMSBagValue *mescalSetupURL;
@property (readonly, nonatomic) AMSBagValue *mescalPrimingURL;
@property (readonly, nonatomic) AMSBagValue *mescalSignedActions;
@property (readonly, nonatomic) AMSBagValue *mescalSignSapRequests;
@property (readonly, nonatomic) AMSBagValue *mescalSignSapResponses;
@property (readonly, nonatomic) AMSBagValue *personalizedLookupURL;
@property (readonly, nonatomic) AMSBagValue *unpersonalizedLookupURL;

- (void).cxx_destruct;
- (id)initWithBag:(id)a0;

@end
