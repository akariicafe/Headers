@class NSString, NSNumber;

@interface HKMobilityWalkingSteadinessAnalyticsOnboardingEventMetric : NSObject <HKMobilityAnalyticsEventMetric>

@property (nonatomic, getter=isImproveHealthAndActivityAllowed) BOOL improveHealthAndActivityAllowed;
@property (copy, nonatomic) NSString *step;
@property (copy, nonatomic) NSString *featureVersion;
@property (copy, nonatomic) NSString *provenance;
@property (copy, nonatomic) NSString *activeWatchProductType;
@property (retain, nonatomic) NSNumber *hasDefaultHeight;
@property (retain, nonatomic) NSNumber *hasDefaultWeight;
@property (retain, nonatomic) NSNumber *acceptDefaultHeight;
@property (retain, nonatomic) NSNumber *acceptDefaultWeight;
@property (retain, nonatomic) NSNumber *acceptDefaultNotifications;
@property (retain, nonatomic) NSNumber *age;
@property (retain, nonatomic) NSNumber *biologicalSex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresImproveHealthAndActivityAllowed;

@end
