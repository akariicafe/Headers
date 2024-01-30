@class NSString, HKHRCardioFitnessOnboardingStatus, HKHRCardioFitnessAnalyticsManager;

@interface HKHRCardioFitnessDataSource : NSObject <HKOverlayRoomCardioFitnessViewControllerAnalyticsDelegate, HKCardioFitnessDataSourceProvider>

@property (retain, nonatomic) HKHRCardioFitnessOnboardingStatus *onboardingStatus;
@property (retain, nonatomic) HKHRCardioFitnessAnalyticsManager *analyticsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
