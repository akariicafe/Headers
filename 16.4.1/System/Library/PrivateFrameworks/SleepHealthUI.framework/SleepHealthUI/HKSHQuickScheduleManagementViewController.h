@class HKSHQuickScheduleManagementViewControllerInternal, HKSHQuickScheduleManagementViewControllerDelegateWrapper;
@protocol HKSHQuickScheduleManagementViewControllerDelegate;

@interface HKSHQuickScheduleManagementViewController : UIViewController {
    HKSHQuickScheduleManagementViewControllerInternal *_internalViewController;
    HKSHQuickScheduleManagementViewControllerDelegateWrapper *_delegateWrapper;
}

@property (weak, nonatomic) id<HKSHQuickScheduleManagementViewControllerDelegate> sleepDelegate;

- (BOOL)_canShowWhileLocked;
- (id)initWithSleepStore:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
