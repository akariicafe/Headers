@class NSArray, NSString, HUTimerTableViewController, NSLayoutConstraint;

@interface HUQuickControlTimerDetailsViewController : HUQuickControlViewController <HFItemSectionAccessoryButtonHeaderDelegate>

@property (retain, nonatomic) HUTimerTableViewController *timerTableViewController;
@property (retain, nonatomic) NSArray *timerTableViewConstraints;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controlItemPredicate;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)_updateConstraints;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)mediaProfileContainer;
- (id)initWithControlItems:(id)a0 home:(id)a1 itemUpdater:(id)a2 controlOrientation:(unsigned long long)a3 preferredControl:(unsigned long long)a4;
- (BOOL)shouldShowContentForReachabilityState:(BOOL)a0;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;
- (id)controlItem;
- (BOOL)isAccessoryControllable;
- (id)createDetailsViewController;
- (void)itemSection:(id)a0 accessoryButtonPressedInHeader:(id)a1;
- (void)_addTimerControlView;

@end
