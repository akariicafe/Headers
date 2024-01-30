@class TUIEmojiVariantSelectorView, NSDate, UITapGestureRecognizer, UIViewController, _UIKeyboardFeedbackGenerator, TUIEmojiSearchView, TUIEmojiSearchResultsCollectionViewController, NSString, NSLayoutConstraint, TUIEmojiSearchAnalyticsSession, NSTimer, TUIEmojiSearchSource, NSArray, TouchExclusionView;
@protocol UIPredictiveViewController, TUIEmojiSearchInputViewControllerDelegate;

@interface TUIEmojiSearchInputViewController : UIInputViewController <TUIEmojiSearchTextFieldDelegate, TUIEmojiSearchSourceDelegate, TUIEmojiSearchResultsCollectionViewControllerDelegate, UIPredictiveViewController> {
    TUIEmojiSearchSource *_emojiSearchSource;
    TUIEmojiSearchResultsCollectionViewController *_resultsViewController;
    TUIEmojiVariantSelectorView *_variantSelectorView;
    UITapGestureRecognizer *_variantSelectorDismissGesture;
    TouchExclusionView *_variantSelectorDismissOverlayView;
    NSTimer *_resultsUpdateRateLimitTimer;
    NSArray *_rateLimitedResults;
    NSString *_rateLimitedSearchQuery;
    BOOL _canAutocorrectWithCurrentInputMode;
    NSTimer *_waitForAutocorrectionDelayTimer;
    NSString *_exactSearchQuery;
    NSString *_autocorrectedSearchQuery;
    NSDate *_lastActivationDate;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    TUIEmojiSearchAnalyticsSession *_analyticsSession;
    _UIKeyboardFeedbackGenerator *_feedbackGenerator;
}

@property (weak, nonatomic) id<TUIEmojiSearchInputViewControllerDelegate> delegate;
@property (readonly, nonatomic) TUIEmojiSearchView *emojiSearchView;
@property (retain, nonatomic) UIViewController<UIPredictiveViewController> *childPredictionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *displayedCandidates;

- (void)emojiSearchTextFieldWillBecomeInactive:(id)a0;
- (void)emojiSearchTextFieldDidBecomeActive:(id)a0;
- (void)emojiSearchTextFieldWillBecomeActive:(id)a0;
- (BOOL)hidesExpandableButton;
- (double)preferredHeightForTraitCollection:(id)a0;
- (BOOL)isVisibleForInputDelegate:(id)a0 inputViews:(id)a1;
- (void)emojiSearchTextFieldDidBecomeInactive:(id)a0;
- (void)_didRecognizeVariantDismissGesture:(id)a0;
- (void).cxx_destruct;
- (void)emojiSearchTextField:(id)a0 didChangeSearchString:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)_keyboardInputModeDidChange:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_variantSelectorValueChanged:(id)a0;
- (void)emojiSearchResultsController:(id)a0 didSelectEmoji:(id)a1;
- (void)emojiSearchSource:(id)a0 didProduceResults:(id)a1 forExactQuery:(id)a2 autocorrectedQuery:(id)a3;
- (void)_displayResults:(id)a0 forExactQuery:(id)a1 autocorrectedQuery:(id)a2;
- (void)_selectedEmojiString:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_keyboardInsets;
- (void)emojiSearchTextFieldWillClear:(id)a0;
- (void)autocorrectionListDidBecomeAvailable:(id)a0;
- (void)emojiSearchResultsController:(id)a0 didRequestVariantSelectorForEmojiToken:(id)a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)_canShowWhileLocked;
- (void)_dismissVariantSelector;
- (void)viewDidLoad;

@end
