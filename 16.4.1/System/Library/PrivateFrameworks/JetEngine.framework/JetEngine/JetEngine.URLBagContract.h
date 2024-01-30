@protocol AMSMetricsBagContract;

@interface JetEngine.URLBagContract : NSObject <AMSURLBagContract, AMSMetricsBagContract> {
    void /* unknown type, empty encoding */ backing;
}

@property (nonatomic, readonly) id guidRegexes;
@property (nonatomic, readonly) id guidSchemes;
@property (nonatomic, readonly) id storefrontSuffix;
@property (nonatomic, readonly) id trustedDomains;
@property (nonatomic, readonly) id<AMSMetricsBagContract> metricsContract;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ mescalContract;
@property (nonatomic, readonly) id TLSSamplingPercentage;
@property (nonatomic, readonly) id TLSSamplingSessionDuration;
@property (nonatomic, readonly) id TFOSamplingPercentage;
@property (nonatomic, readonly) id TFOSamplingSessionDuration;
@property (nonatomic, readonly) id apsEnabledPatterns;
@property (nonatomic, readonly) id apsSamplingPercent;
@property (nonatomic, readonly) id metricsURL;
@property (nonatomic, readonly) id metricsDictionary;

- (id)init;
- (void).cxx_destruct;

@end
