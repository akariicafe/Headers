@class NSString, PUSearchHomeGadgetDataSourceManager, PXProgrammaticNavigationDestination;
@protocol PXViewControllerEventTracker;

@interface PUSearchHomeViewController : PXGadgetUIViewController <UISearchControllerDelegate> {
    PXProgrammaticNavigationDestination *_px_navigationDestination;
}

@property (retain, nonatomic) PUSearchHomeGadgetDataSourceManager *searchHomeDataSourceManager;
@property (nonatomic) BOOL shouldActiveSearchFieldUponAppearing;
@property (retain, nonatomic) id<PXViewControllerEventTracker> searchControllerEventTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)gadgetSpecClass;

- (id)nextExistingParticipantOnRouteToDestination:(id)a0;
- (id)px_navigationDestination;
- (void)presentForSearchHashtag:(id)a0;
- (id)init;
- (long long)scrollAnimationIdentifier;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)_configureSearchNavigationBar;
- (void)ppt_prepareForSearchTest:(id /* block */)a0;
- (void)gadget:(id)a0 didChange:(unsigned long long)a1;
- (void)didDismissSearchController:(id)a0;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_clearSearchField;
- (BOOL)pu_scrollToInitialPositionAnimated:(BOOL)a0;
- (void)presentOneYearAgo;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)a0;
- (void)_activateSearchField;
- (void)performRecentSearch:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)selectZeroKeyword:(id)a0;
- (void)presentSiriSearchRequest:(id)a0 resultCount:(unsigned long long)a1;
- (void)didPresentSearchController:(id)a0;
- (void)ppt_dismissKeyboard;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)px_gridPresentation;
- (void)performRecentSearchNew:(id)a0;
- (void)_notifyAnalyticsSearchAction:(unsigned long long)a0;
- (void)ppt_prepareForSearchScrollingTestWithSearchText:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldPreventPlaceholder;
- (void)viewDidLoad;

@end
