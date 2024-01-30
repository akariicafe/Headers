@protocol HKRPOxygenSaturationOnboardingManagerDataSource;

@interface HKRPOxygenSaturationOnboardingManager : NSObject

@property (readonly, nonatomic) id<HKRPOxygenSaturationOnboardingManagerDataSource> dataSource;
@property (readonly, nonatomic) BOOL settingsShouldAppear;
@property (readonly, nonatomic) BOOL onboardingShouldAppear;
@property (readonly, nonatomic) BOOL onboardingDuringPairingShouldAppear;
@property (readonly, nonatomic) BOOL onboardingComplete;
@property (readonly, nonatomic) BOOL shouldAdvertise;
@property (readonly, nonatomic) BOOL bloodOxygenFeatureEnabled;
@property (readonly, nonatomic) BOOL bloodOxygenRemoteDisabled;
@property (readonly, nonatomic) BOOL pairedDeviceIsAppropriate;
@property (readonly, nonatomic) BOOL ageIsAppropriate;

- (id)initWithDataSource:(id)a0;
- (void)cacheCompletedOnboardingStateIfNeeded;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isAlternateDevice;
- (id)init;
- (void)onboardWithCompletion:(id /* block */)a0;
- (BOOL)_currentDeviceHasCapability;

@end
