@class _TriggerEditorDelegateWrapper, NAFuture, UIActivityIndicatorView, HUAccessoryButtonTableViewHeaderView, HUAvailableRelatedTriggerItemModule, NSString, UIViewController;

@interface HUAvailableRelatedTriggerItemModuleController : HUItemModuleController <HUIconSwitchCellDelegate, HUTriggerEditorDelegate, HFItemSectionAccessoryButtonHeaderDelegate>

@property (retain, nonatomic) HUAvailableRelatedTriggerItemModule *module;
@property (retain, nonatomic) NAFuture *addAutomationPresentingFuture;
@property (retain, nonatomic) UIActivityIndicatorView *addAutomationActivityIndicator;
@property (retain, nonatomic) UIViewController *presentedViewController;
@property (retain, nonatomic) _TriggerEditorDelegateWrapper *presentedViewControllerDelegateWrapper;
@property (weak, nonatomic) HUAccessoryButtonTableViewHeaderView *sectionEditButtonHeader;
@property (nonatomic) BOOL editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithModule:(id)a0;
- (unsigned long long)didSelectItem:(id)a0;
- (id)_dismissViewController:(id)a0;
- (id)_activateItem:(id)a0 active:(BOOL)a1;
- (void)_addAutomationCancelButtonPressed;
- (id)_addAutomationViewControllerWithActionFactories:(id)a0;
- (id)_addAutomationViewControllerWithSensorCharacteristics:(id)a0;
- (id)_createAddAutomationViewController;
- (void)_enableItemPressed:(id)a0 enabled:(BOOL)a1;
- (id)_handleError:(id)a0 retryBlock:(id /* block */)a1;
- (void)_presentAddAutomationViewController;
- (void)_presentTriggerSummaryForAvailableTriggerItem:(id)a0;
- (void)_presentTriggerSummaryForTriggerBuilder:(id)a0 flow:(id)a1;
- (void)_updateUIAnimated:(BOOL)a0;
- (Class)cellClassForItem:(id)a0;
- (id)commitSelectedItems;
- (void)itemSection:(id)a0 accessoryButtonPressedInHeader:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)triggerEditor:(id)a0 didCommitTriggerBuilder:(id)a1 withError:(id)a2;
- (void)triggerEditor:(id)a0 didFinishWithTriggerBuilder:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (void)updatePresentedViewControllerForNewModuleController:(id)a0;

@end
