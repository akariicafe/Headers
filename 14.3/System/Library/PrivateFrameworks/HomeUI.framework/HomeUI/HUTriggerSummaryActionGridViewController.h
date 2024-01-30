@class NSString, HUServiceGridItemManager, HFTriggerBuilder, HUContainedServicesGridViewController;
@protocol HUTriggerSummaryActionGridViewControllerDelegate;

@interface HUTriggerSummaryActionGridViewController : HUServiceGridViewController <HFActionSetValueSourceDelegate, HUServiceActionControlsViewControllerDelegate, HUSceneEditorDelegate, HUServiceGridItemManagerDelegate, HUContainedServiceGridViewControllerDelegate>

@property (weak, nonatomic) HUServiceGridItemManager *serviceGridItemManager;
@property (weak, nonatomic) HUContainedServicesGridViewController *presentedServiceGroupDetailsViewController;
@property (readonly, nonatomic) HFTriggerBuilder *triggerBuilder;
@property (weak, nonatomic) id<HUTriggerSummaryActionGridViewControllerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)_actionSetItemProviderFilterForTriggerBuilder:(id)a0;

- (void).cxx_destruct;
- (void)reloadActions;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)viewDidLoad;
- (void)actionSetValueSource:(id)a0 didUpdateValuesForActionBuilders:(id)a1;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)detailsViewControllerForPresentationCoordinator:(id)a0 item:(id)a1;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginPresentationWithContext:(id)a1;
- (id)initWithItemManager:(id)a0;
- (BOOL)hasDetailsActionForContainedServiceGridViewController:(id)a0 item:(id)a1;
- (id)detailsViewControllerForContainedServiceGridViewController:(id)a0 item:(id)a1;
- (BOOL)_hasTapActionForItem:(id)a0;
- (id)initWithTriggerBuilder:(id)a0 withStyle:(unsigned long long)a1;
- (void)_removeActionsInServiceActionItem:(id)a0;
- (void)serviceActionControlsViewController:(id)a0 removeServiceActionItem:(id)a1;
- (void)sceneEditor:(id)a0 removeActionSetBuilderFromTrigger:(id)a1;

@end
