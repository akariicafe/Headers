@class SHFeatureFlags, AMSBagValue, AMSBag;

@interface SHRemoteConfiguration : NSObject

@property (retain, nonatomic) AMSBag *amsBag;
@property (retain, nonatomic) SHFeatureFlags *featureFlags;
@property (retain, nonatomic) AMSBagValue *featureFlagsBagValue;
@property (retain, nonatomic) AMSBagValue *endpointsBagValue;
@property (retain, nonatomic) AMSBagValue *insightsBagValue;
@property (retain, nonatomic) AMSBagValue *internalHostBagValue;
@property (retain, nonatomic) AMSBagValue *externalHostBagValue;
@property (retain, nonatomic) AMSBagValue *campaignTokenBagValue;
@property (retain, nonatomic) AMSBagValue *defaultValuesBagValue;
@property (retain, nonatomic) AMSBagValue *languageTagBagValue;

+ (id)sharedInstance;

- (id)initWithBag:(id)a0;
- (void).cxx_destruct;
- (void)populateRemoteConfiguration;
- (void)insightsWithCompletion:(id /* block */)a0;
- (void)populateFeatureFlags;
- (void)endpointsWithCompletion:(id /* block */)a0;
- (void)hostForClientType:(long long)a0 completion:(id /* block */)a1;
- (void)campaignTokenWithCompletion:(id /* block */)a0;
- (void)defaultValuesWithCompletion:(id /* block */)a0;

@end
