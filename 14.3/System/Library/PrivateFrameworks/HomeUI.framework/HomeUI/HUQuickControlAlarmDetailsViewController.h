@class NSArray, HUAlarmTableViewController, NSString, NSLayoutConstraint;

@interface HUQuickControlAlarmDetailsViewController : HUQuickControlViewController <HUQuickControlDetailsViewControllerVendor, HFItemSectionAccessoryButtonHeaderDelegate>

@property (retain, nonatomic) HUAlarmTableViewController *alarmTableViewController;
@property (retain, nonatomic) NSArray *alarmTableViewConstraints;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controlItemPredicate;

- (void).cxx_destruct;
- (id)mediaProfileContainer;
- (void)_updateConstraints;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)initWithControlItems:(id)a0 home:(id)a1 itemUpdater:(id)a2;
- (BOOL)shouldShowContentForReachabilityState:(BOOL)a0;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;
- (id)controlItem;
- (void)_addAlarmControlView;
- (id)createDetailsViewController;
- (BOOL)isAccessoryControllable;
- (id)secondaryQuickControlPresentationStyle;
- (void)itemSection:(id)a0 accessoryButtonPressedInHeader:(id)a1;

@end
