@class NSString, PUSearchHomeGadgetDataSourceManager, PXProgrammaticNavigationDestination;
@protocol PXViewControllerEventTracker;

@interface PUSearchHomeViewController : PXGadgetUIViewController <UISearchControllerDelegate> {
    PXProgrammaticNavigationDestination *_px_navigationDestination;
}

@property (retain, nonatomic) PUSearchHomeGadgetDataSourceManager *searchHomeDataSourceManager;
@property (retain, nonatomic) id<PXViewControllerEventTracker> searchControllerEventTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)gadgetSpecClass;

- (id)px_gridPresentation;
- (void)didDismissSearchController:(id)a0;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (id)px_navigationDestination;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)scrollAnimationIdentifier;
- (void)presentOneYearAgo;
- (void)ppt_dismissKeyboard;
- (void)_configureSearchNavigationBar;
- (BOOL)pu_scrollToInitialPositionAnimated:(BOOL)a0;
- (void)presentForSearchHashtag:(id)a0;
- (void)activateSearchField;
- (void)didPresentSearchController:(id)a0;
- (void)selectZeroKeyword:(id)a0;
- (void)presentSpotlightSearch:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)ppt_prepareForSearchTest:(id /* block */)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)init;
- (void)gadget:(id)a0 didChange:(unsigned long long)a1;
- (void)performRecentSearch:(id)a0;
- (BOOL)shouldPreventPlaceholder;
- (void)viewDidAppear:(BOOL)a0;
- (void)ppt_prepareForSearchScrollingTestWithSearchText:(id)a0 completion:(id /* block */)a1;
- (void)_clearSearchField;
- (void)presentSiriSearchRequest:(id)a0 resultCount:(unsigned long long)a1;
- (void)_notifyAnalyticsSearchAction:(unsigned long long)a0;
- (id)nextExistingParticipantOnRouteToDestination:(id)a0;
- (void)presentSearchWithText:(id)a0 searchCategory:(unsigned long long)a1;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)a0;

@end
