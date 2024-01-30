@protocol TPSAnalyticsDataProviderDataSource;

@interface TPSAnalyticsDataProvider : NSObject

@property (weak, nonatomic) id<TPSAnalyticsDataProviderDataSource> dataSource;

- (id)bundleIDForIdentifier:(id)a0;
- (id)trialExperimentID;
- (id)contextForIdentifier:(id)a0;
- (id)correlationIDForIdentifier:(id)a0;
- (id)deliveryInfoVersion;
- (BOOL)isNotificationModelControl;
- (id)experimentCampID;
- (id)trialRampID;
- (id)trialTreatmentID;
- (id)trialDeploymentID;
- (id)initWithDataSource:(id)a0;
- (id)displayTypeForIdentifier:(id)a0;
- (id)experimentID;
- (void).cxx_destruct;
- (unsigned long long)hintDisplayedCountForIdentifier:(id)a0;

@end
