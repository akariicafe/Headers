@class HFActionSetBuilder, NSSet, NSString, HUContainedServicesGridViewController;

@interface HUSceneActionGridViewController : HUServiceGridViewController <HFActionSetValueSourceDelegate, HUServiceActionControlsViewControllerDelegate, HUServiceGridItemManagerDelegate, HUContainedServiceGridViewControllerDelegate>

@property (weak, nonatomic) HUContainedServicesGridViewController *presentedServiceGroupDetailsViewController;
@property (readonly, nonatomic) HFActionSetBuilder *actionSetBuilder;
@property (copy, nonatomic) NSSet *blacklistedServices;
@property (copy, nonatomic) NSSet *whitelistedServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithActionSetBuilder:(id)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)viewDidLoad;
- (void)actionSetValueSource:(id)a0 didUpdateValuesForActionBuilders:(id)a1;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)detailsViewControllerForPresentationCoordinator:(id)a0 item:(id)a1;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginPresentationWithContext:(id)a1;
- (id)initWithItemManager:(id)a0;
- (id)layoutOptionsForSection:(long long)a0;
- (BOOL)hasDetailsActionForContainedServiceGridViewController:(id)a0 item:(id)a1;
- (id)detailsViewControllerForContainedServiceGridViewController:(id)a0 item:(id)a1;
- (void)_removeActionsInServiceActionItem:(id)a0;
- (void)serviceActionControlsViewController:(id)a0 removeServiceActionItem:(id)a1;

@end
