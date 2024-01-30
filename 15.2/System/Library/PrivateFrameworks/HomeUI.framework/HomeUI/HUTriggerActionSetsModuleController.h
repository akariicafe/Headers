@class NSString, HUTriggerSummaryActionGridViewController;
@protocol HUTriggerActionSetsModuleControllerDelegate;

@interface HUTriggerActionSetsModuleController : HUItemTableModuleController <HUTriggerSummaryActionGridViewControllerDelegate>

@property (readonly, nonatomic) HUTriggerSummaryActionGridViewController *actionSetsGridViewController;
@property (readonly, nonatomic) HUTriggerSummaryActionGridViewController *serviceActionsGridViewController;
@property (readonly, nonatomic) HUTriggerSummaryActionGridViewController *prioritizedServiceActionsGridViewController;
@property (weak, nonatomic) id<HUTriggerActionSetsModuleControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reloadActions;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (id)childViewControllersToPreload;
- (void)triggerSummaryActionGridViewController:(id)a0 didUpdateTriggerBuilder:(id)a1;
- (BOOL)triggerSummaryActionGridViewController:(id)a0 shouldShowAction:(id)a1;

@end
