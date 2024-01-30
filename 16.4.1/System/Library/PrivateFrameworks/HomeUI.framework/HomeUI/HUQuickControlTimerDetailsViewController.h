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
- (BOOL)_canShowWhileLocked;
- (void)_updateConstraints;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_addTimerControlView;
- (id)controlItem;
- (id)createDetailsViewController;
- (id)initWithControlItems:(id)a0 home:(id)a1 itemUpdater:(id)a2 controlOrientation:(unsigned long long)a3 preferredControl:(unsigned long long)a4;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;
- (BOOL)isAccessoryControllable;
- (void)itemSection:(id)a0 accessoryButtonPressedInHeader:(id)a1;
- (id)mediaProfileContainer;
- (BOOL)shouldShowContentForReachabilityState:(BOOL)a0;

@end
