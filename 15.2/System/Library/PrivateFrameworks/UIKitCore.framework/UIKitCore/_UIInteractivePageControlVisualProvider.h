@class CAMediaTimingFunction, UIVisualEffectView, _UIPageIndicatorFeed, UITapGestureRecognizer, _UIPageControlInteractor, UISelectionFeedbackGenerator, UILongPressGestureRecognizer, NSString, UIDelayedAction, UIViewFloatAnimatableProperty, _UIPageIndicatorStore, _UIPageControlIndicatorContentView, _UIPageControlContentView, CADisplayLink, UIImpactFeedbackGenerator;

@interface _UIInteractivePageControlVisualProvider : _UIPageControlVisualProvider <_UIPageIndicatorFeedDelegate, _UIPageIndicatorStoreDelegate, UIGestureRecognizerDelegate, _UIControlEventsGestureRecognizerDelegate> {
    struct { unsigned char scrubbing : 1; unsigned char platterExpanded : 1; unsigned char didScrubPastInitialThreshold : 1; } _state;
    long long _indicatorStartIndex;
    long long _numberOfVisibleIndicators;
    long long _targetPage;
    long long _currentTick;
    long long _tickThreshold;
    double _panDistance;
    double _indicatorPaddingOffset;
    double _continuousStartIndex;
}

@property (retain, nonatomic) _UIPageControlContentView *contentView;
@property (retain, nonatomic) _UIPageControlIndicatorContentView *indicatorContentView;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (nonatomic) BOOL isPlatterExpanded;
@property (nonatomic) BOOL isScrubbing;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *scrubbingGestureRecognizer;
@property (retain, nonatomic) UIDelayedAction *successiveTapAction;
@property (nonatomic) long long previousMoveDirection;
@property (nonatomic) struct CGPoint { double x; double y; } previousTouchLocation;
@property (retain, nonatomic) _UIPageIndicatorFeed *indicatorFeed;
@property (retain, nonatomic) _UIPageIndicatorStore *indicatorStore;
@property (retain, nonatomic) _UIPageControlInteractor *interactor;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *continuousDisplayedPage;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *scrubProgress;
@property (retain, nonatomic) CAMediaTimingFunction *indicatorTransformCurve;
@property (readonly, nonatomic) long long resolvedDirection;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (retain, nonatomic) UIImpactFeedbackGenerator *joggingFeedbackGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traitCollectionDidChangeOnSubtree:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)didUpdateBackgroundEffect;
- (void)layoutSubviews;
- (void)didTapPageControl:(id)a0;
- (BOOL)shouldDisableTouchTracking;
- (void)resetSuccessiveTapInfo;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)configureIndicator:(id)a0 atPage:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForNumberOfPages:(long long)a0;
- (void)didUpdateNumberOfPages;
- (void)prepare;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)controlEventsGestureRecognizer:(id)a0 recognizedControlEvent:(unsigned long long)a1 withEvent:(id)a2;
- (struct CGSize { double x0; double x1; })indicatorSizeForImage:(id)a0;
- (void)didUpdateCurrentPageIndicatorTintColor;
- (unsigned long long)maxVisibleIndicators;
- (void)didUpdatePageIndicatorTintColor;
- (void)pruneArchivedSubviews:(id)a0;
- (void).cxx_destruct;
- (void)didScrubPageControl:(id)a0;
- (void)didUpdateInteractionTypeAvailability;
- (id)preferredIndicatorImage;
- (void)setPreferredIndicatorImage:(id)a0;
- (void)didUpdateCustomLayoutValues;
- (void)displayLinkTicked:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setCustomIndicatorImage:(id)a0 forPage:(long long)a1;
- (void)updateDisplayedPageToCurrentPage;
- (id)customIndicatorImageForPage:(long long)a0;
- (id)indicatorImageForPage:(long long)a0;
- (void)didUpdateBackgroundStyle;
- (void)didUpdateLayoutDirection;
- (void)invalidateIndicators;

@end
