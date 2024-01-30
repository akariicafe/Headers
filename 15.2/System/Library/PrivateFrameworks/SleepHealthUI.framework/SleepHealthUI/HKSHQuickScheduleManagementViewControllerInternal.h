@interface HKSHQuickScheduleManagementViewControllerInternal : UINavigationController <HKFeatureAvailabilityProvidingObserver> {
    void /* unknown type, empty encoding */ sleepStore;
    void /* unknown type, empty encoding */ provenanceSource;
    void /* unknown type, empty encoding */ sleepScheduleProvider;
    void /* unknown type, empty encoding */ gregorianCalendar;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ appStateObserver;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ sleepDelegate;

- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)cancelWithAnimated:(BOOL)a0;
- (id)initWithRootViewController:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithSleepStore:(id)a0 provenanceSource:(id)a1;

@end
