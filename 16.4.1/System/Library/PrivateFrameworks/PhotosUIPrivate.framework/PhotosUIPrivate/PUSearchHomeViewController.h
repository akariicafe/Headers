@class NSString, PUSearchHomeGadgetDataSourceManager, PXProgrammaticNavigationDestination;
@protocol PXViewControllerEventTracker;

@interface PUSearchHomeViewController : PXGadgetUIViewController <UISearchControllerDelegate, PXChangeObserver> {
    PXProgrammaticNavigationDestination *_px_navigationDestination;
}

@property (retain, nonatomic) PUSearchHomeGadgetDataSourceManager *searchHomeDataSourceManager;
@property (retain, nonatomic) id<PXViewControllerEventTracker> searchControllerEventTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)gadgetSpecClass;

- (void)selectZeroKeyword:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)ppt_dismissKeyboard;
- (void)didDismissSearchController:(id)a0;
- (BOOL)searchBarIsActive;
- (void)activateSearchField;
- (void)_updateNavigationBarForSharedLibrary;
- (id)searchControllerSearchText;
- (void)_unregisterNotificationsForAnalytics;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)presentForSearchHashtag:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)_notifyAnalyticsSearchAction:(unsigned long long)a0;
- (void)_configureSearchNavigationBar;
- (long long)scrollAnimationIdentifier;
- (void)presentOneYearAgo;
- (void)zeroKeywordGadgetDidScroll:(id)a0;
- (void)dealloc;
- (void)_scrollViewStoppedScrolling;
- (void)viewDidLoad;
- (void)gadget:(id)a0 didChange:(unsigned long long)a1;
- (id)searchControllerSearchTokens;
- (void)presentSiriSearchRequest:(id)a0 resultCount:(unsigned long long)a1;
- (id)px_navigationDestination;
- (void)presentSearchWithText:(id)a0 searchCategory:(unsigned long long)a1;
- (void)_clearSearchField;
- (void)ppt_prepareForSearchTest:(id /* block */)a0;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)zeroKeywordGadgetsDidReload;
- (void)_reportZeroKeywordsToParsec:(BOOL)a0 searchCancelled:(BOOL)a1;
- (void)ppt_prepareForSearchScrollingTestWithSearchText:(id)a0 completion:(id /* block */)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)nextExistingParticipantOnRouteToDestination:(id)a0;
- (id)px_gridPresentation;
- (void)viewDidAppear:(BOOL)a0;
- (void)_handleAnalyticsNotification:(id)a0;
- (id)_visibleZeroKeywordIndexPaths;
- (void)performRecentSearch:(id)a0;
- (void)didPresentSearchController:(id)a0;
- (void)presentSpotlightSearch:(id)a0;
- (BOOL)pu_scrollToInitialPositionAnimated:(BOOL)a0;
- (BOOL)pu_handleSecondTabTap;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)_adjustedIndexPaths:(id)a0 withSection:(unsigned long long)a1;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)a0;
- (void).cxx_destruct;
- (void)presentSearchWithTerms:(id)a0 searchCategories:(id)a1;
- (BOOL)shouldPreventPlaceholder;
- (void)_registerNotificationsForAnalytics;
- (void)viewWillAppear:(BOOL)a0;

@end
