@interface HKSHQuickScheduleManagementViewController : UINavigationController <HKFeatureAvailabilityProvidingObserver> {
    void /* unknown type, empty encoding */ sleepScheduleProvider;
    void /* unknown type, empty encoding */ gregorianCalendar;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ appStateObserver;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ sleepStore;
@property (nonatomic, weak) void /* unknown type, empty encoding */ sleepDelegate;
@property (nonatomic, readonly) long long preferredUserInterfaceStyle;

- (void)cancel;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithRootViewController:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)initWithSleepStore:(id)a0;
- (id)initWithSleepStore:(id)a0 healthStore:(id)a1;

@end
