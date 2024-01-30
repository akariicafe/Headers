@class HFHomeStatusItemManager, NSString, NUIContainerStackView, HUGridLayoutOptions, NSMutableArray;

@interface HUHomeStatusViewController : UIViewController <HUHomeStatusDetailsViewControllerDelegate, HFItemManagerDelegate, HUPreloadableViewController>

@property (retain, nonatomic) HFHomeStatusItemManager *statusItemManager;
@property (retain, nonatomic) NUIContainerStackView *stackView;
@property (nonatomic, getter=isViewVisible) BOOL viewVisible;
@property (readonly, nonatomic) NSMutableArray *viewVisibleFutures;
@property (nonatomic) BOOL hasFinishedInitialLoad;
@property (nonatomic) BOOL wantsPreferredContentSize;
@property (copy, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)itemManager:(id)a0 didUpdateResultsForItem:(id)a1 atIndexPath:(id)a2;
- (id)itemManager:(id)a0 futureToUpdateItems:(id)a1 itemUpdateOptions:(id)a2;
- (void)itemManager:(id)a0 performUpdateRequest:(id)a1;
- (void)itemManager:(id)a0 didRemoveItem:(id)a1 atIndexPath:(id)a2;
- (void)itemManager:(id)a0 didInsertItem:(id)a1 atIndexPath:(id)a2;
- (id)hu_preloadContent;
- (void)statusDetailViewControllerDidFinish:(id)a0;
- (void)presentHomeStatusDetailsWithSender:(id)a0;
- (void)updatePreferredContentSizeIfNeeded;
- (void)configureLabel:(id)a0 forItem:(id)a1;

@end
