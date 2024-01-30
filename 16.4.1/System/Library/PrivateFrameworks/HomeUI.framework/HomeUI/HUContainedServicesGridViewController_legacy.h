@class NSString, HFItem;
@protocol HUContainedServiceGridViewControllerDelegate_legacy, HUServiceContainerItem, NSCopying, HUPresentationDelegate;

@interface HUContainedServicesGridViewController_legacy : HUServiceGridViewController <HUPresentationDelegate, HUServiceGridItemManagerDelegate, HUDetailsPresentationDelegateHost>

@property (nonatomic, getter=isPresentedModally) BOOL presentedModally;
@property (readonly, copy, nonatomic) HFItem<HUServiceContainerItem, NSCopying> *serviceContainerItem;
@property (weak, nonatomic) id<HUContainedServiceGridViewControllerDelegate_legacy> serviceGridDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL requiresPresentingViewControllerDismissal;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

+ (id)itemManagerWithServiceContainerItem:(id)a0 mediaItem:(id)a1 valueSource:(id)a2;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)_done:(id)a0;
- (void)_edit:(id)a0;
- (void)_updateRightBarButtons;
- (id)detailsViewControllerForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)initWithItemManager:(id)a0;
- (id)initWithServiceContainerItem:(id)a0;
- (id)initWithServiceContainerItem:(id)a0 isPresentedModally:(BOOL)a1 valueSource:(id)a2;
- (void)itemManagerDidUpdate:(id)a0;
- (id)layoutOptionsForSection:(long long)a0;

@end
