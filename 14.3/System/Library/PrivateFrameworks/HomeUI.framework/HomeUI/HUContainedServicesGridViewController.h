@class NSString, HFItem;
@protocol HUPresentationDelegate, HUServiceContainerItem, NSCopying, HUContainedServiceGridViewControllerDelegate;

@interface HUContainedServicesGridViewController : HUServiceGridViewController <HUPresentationDelegate, HUServiceGridItemManagerDelegate, HUDetailsPresentationDelegateHost>

@property (nonatomic, getter=isPresentedModally) BOOL presentedModally;
@property (readonly, copy, nonatomic) HFItem<HUServiceContainerItem, NSCopying> *serviceContainerItem;
@property (weak, nonatomic) id<HUContainedServiceGridViewControllerDelegate> serviceGridDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL requiresPresentingViewControllerDismissal;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

- (void).cxx_destruct;
- (void)_done:(id)a0;
- (void)_edit:(id)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)viewDidLoad;
- (void)itemManager:(id)a0 performUpdateRequest:(id)a1;
- (void)_updateRightBarButtons;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)detailsViewControllerForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)initWithServiceContainerItem:(id)a0 isPresentedModally:(BOOL)a1 valueSource:(id)a2;
- (id)initWithItemManager:(id)a0;
- (id)layoutOptionsForSection:(long long)a0;
- (id)initWithServiceContainerItem:(id)a0;

@end
