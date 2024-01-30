@class NSString, HFMediaAccessoryItem;
@protocol HUContainedMediaAccessoriesGridViewControllerDelegate, HUPresentationDelegate;

@interface HUContainedMediaAccessoriesGridViewController : HUServiceGridViewController <HUPresentationDelegate, HUServiceGridItemManagerDelegate, HUDetailsPresentationDelegateHost>

@property (nonatomic, getter=isPresentedModally) BOOL presentedModally;
@property (readonly, copy, nonatomic) HFMediaAccessoryItem *mediaAccessoryItem;
@property (weak, nonatomic) id<HUContainedMediaAccessoriesGridViewControllerDelegate> mediaAccessoryGridDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL requiresPresentingViewControllerDismissal;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

- (void).cxx_destruct;
- (void)_done:(id)a0;
- (void)_edit:(id)a0;
- (void)viewDidLoad;
- (void)itemManager:(id)a0 performUpdateRequest:(id)a1;
- (void)_updateRightBarButtons;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)detailsViewControllerForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)layoutOptionsForSection:(long long)a0;
- (id)initWithAccessoryContainerItem:(id)a0;
- (id)initWithMediaAccessoryContainerItem:(id)a0 isPresentedModally:(BOOL)a1 valueSource:(id)a2;

@end
