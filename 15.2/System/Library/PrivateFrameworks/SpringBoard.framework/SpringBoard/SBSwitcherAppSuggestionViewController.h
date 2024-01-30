@class SBBestAppSuggestion, UILongPressGestureRecognizer, SBSwitcherAppSuggestionBannerView, NSMutableSet, NSObject, UITapGestureRecognizer;
@protocol SBSwitcherAppSuggestionViewControllerDelegate, OS_dispatch_queue;

@interface SBSwitcherAppSuggestionViewController : UIViewController {
    SBSwitcherAppSuggestionBannerView *_bannerView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    BOOL _presentingOrDismissingBanner;
    NSObject<OS_dispatch_queue> *_setSuggestionQueue;
    NSMutableSet *_pauseSuggestionUpdateReasons;
}

@property (nonatomic, getter=_isSuggestionQueueSuspended, setter=_setSuggestionQueueSuspended:) BOOL suggestionQueueSuspended;
@property (retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion;
@property (nonatomic) BOOL showSuggestions;
@property (weak, nonatomic) id<SBSwitcherAppSuggestionViewControllerDelegate> delegate;

- (void)_handleLongPress:(id)a0;
- (void)_setBestAppSuggestion:(id)a0 animationCompletion:(id /* block */)a1;
- (BOOL)_hasSuggestionBannerView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_offscreenRectForBottomBanner;
- (void)viewDidLoad;
- (void)_evaluateSuggestionQueueSuspension;
- (void)_activateBestAppSuggestion;
- (void)viewWillLayoutSubviews;
- (void)_insertAndAnimateInBottomBannerForSuggestion:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)_bannerStyle;
- (void)willMoveToParentViewController:(id)a0;
- (void)beginPausingSuggestionUpdatesForReason:(id)a0;
- (void)loadView;
- (void)_updateBottomBannerWithCompletion:(id /* block */)a0;
- (void)_handleBannerTap:(id)a0;
- (void)_activateCurrentSuggestion;
- (void).cxx_destruct;
- (void)endPausingSuggestionUpdatesForReason:(id)a0;
- (void)_animateOutAndRemoveCurrentBottomBannerWithCompletion:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_idleOnscreenRectForBottomBanner;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
