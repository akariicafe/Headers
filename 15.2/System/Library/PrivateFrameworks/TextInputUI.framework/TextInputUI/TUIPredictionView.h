@class UIView, UILongPressGestureRecognizer, NSArray, NSString, TUIPredictionViewStackView, NSLocale, UIKBRenderConfig, TIAutocorrectionList, UIColor;
@protocol TUIPredictionViewDelegate;

@interface TUIPredictionView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *backdropView;
@property (retain, nonatomic) TUIPredictionViewStackView *cellStackView;
@property (retain, nonatomic) UILongPressGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) id<TUIPredictionViewDelegate> delegate;
@property (nonatomic) long long selectedIndex;
@property (retain, nonatomic) TIAutocorrectionList *autocorrectionList;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (nonatomic) BOOL drawsBackdropView;
@property (nonatomic) unsigned long long minimumNumberOfCells;
@property (nonatomic) unsigned long long maximumEmojiCells;
@property (retain, nonatomic) NSLocale *currentLocale;
@property (nonatomic) BOOL disablesHighlight;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (retain, nonatomic) UIColor *separatorColor;
@property (nonatomic) double separatorMargin;
@property (retain, nonatomic) UIColor *highlightColor;
@property (nonatomic) double highlightMargin;
@property (nonatomic) double highlightCornerRadius;
@property (nonatomic) BOOL useContinuousCornerInHighlight;
@property (nonatomic) BOOL shouldAnimateCells;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_setRenderConfig:(id)a0;
- (void)layoutSubviews;
- (BOOL)_shouldPadWithEmptyCellsForAutocorrectionList:(id)a0;
- (long long)layoutDirection;
- (void)setAutocorrectionList:(id)a0 animated:(BOOL)a1;
- (void)_updateVisibleCellAppearance;
- (id)visibleCells;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)configurePredictionCell:(id)a0 forCandidate:(id)a1 animated:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_reloadCellsAnimated:(BOOL)a0;
- (unsigned long long)_predictionCellIndexAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_didRecognizeTapGesture:(id)a0;
- (void).cxx_destruct;
- (BOOL)_ensureVisibleCellCount:(unsigned long long)a0 forCellStackView:(id)a1;
- (id)test_cellForCandidate:(id)a0;
- (id)allVisibleCells;
- (void)cancelTapGestureRecognizer;
- (id)_candidatesToDisplayForAutocorrectionList:(id)a0;
- (double)maximumBackgroundWidth;
- (void)_updateHighlightedCellForTouch:(id)a0;

@end
