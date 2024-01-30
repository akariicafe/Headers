@class SBFFluidBehaviorSettings, NSString, UIScrollView, SBHHomePullToSearchSettings, SBCoverSheetSpotlightViewController;
@protocol SBCoverSheetSpotlightPresenterDelegate;

@interface SBCoverSheetSpotlightPresenter : NSObject <SPUIRemoteSearchViewDelegate, PTSettingsKeyObserver, SBCoverSheetSpotlightViewControllerDelegate, CSCoverSheetSpotlightPresenting> {
    id<SBCoverSheetSpotlightPresenterDelegate> _delegate;
    SBHHomePullToSearchSettings *_pullToSearchSettings;
    SBFFluidBehaviorSettings *_searchAnimationSettings;
    UIScrollView *_scrollView;
    BOOL _scrollViewBeganScrollingFromTop;
    long long _searchState;
    SBCoverSheetSpotlightViewController *_spotlightViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (double)_rubberbandingOffsetForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0;
- (void)dismissSearchView;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dismissSpotlightAnimated:(BOOL)a0;
- (void)presentSpotlightAnimated:(BOOL)a0;
- (double)_spotlightPresentationProgressForOffset:(double)a0;
- (void)_setUpSearchAnimationSettings;
- (void)setSearchState:(long long)a0 withMode:(long long)a1;
- (void)coverSheetSpotlightViewControllerShouldDismiss:(id)a0 animated:(BOOL)a1;
- (BOOL)isSpotlightPresented;

@end
