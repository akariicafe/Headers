@protocol HDFeatureAvailabilityExtension;

@interface HDHRIrregularRhythmNotificationsAutomaticUpgradeCriteria : NSObject <HDBackgroundFeatureDeliveryCriteriaProviding>

@property (retain, nonatomic) id<HDFeatureAvailabilityExtension> v1FeatureAvailabilityManager;

- (long long)isBackgroundDeliverySupportedWithError:(id *)a0;
- (id)initWithV1FeatureAvailabilityManager:(id)a0;
- (void).cxx_destruct;

@end
