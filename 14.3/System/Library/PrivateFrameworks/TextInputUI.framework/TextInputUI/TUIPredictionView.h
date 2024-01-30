@class UILongPressGestureRecognizer, UIKBVisualEffectView, NSArray, TUIPredictionViewStackView, NSString, NSLocale, UIKBRenderConfig, TIAutocorrectionList;
@protocol TUIPredictionViewDelegate;

@interface TUIPredictionView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIKBVisualEffectView *backdropView;
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
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_ensureVisibleCellCount:(unsigned long long)a0 forCellStackView:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (long long)layoutDirection;
- (void).cxx_destruct;
- (void)_didRecognizeTapGesture:(id)a0;
- (void)_updateVisibleCellAppearance;
- (void)_setRenderConfig:(id)a0;
- (unsigned long long)_predictionCellIndexAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)setAutocorrectionList:(id)a0 animated:(BOOL)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)configurePredictionCell:(id)a0 forCandidate:(id)a1 animated:(BOOL)a2;
- (void)layoutSubviews;
- (id)visibleCells;
- (id)_candidatesToDisplayForAutocorrectionList:(id)a0;
- (void)_updateHighlightedCellForTouch:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_reloadCellsAnimated:(BOOL)a0;
- (id)allVisibleCells;
- (double)maximumBackgroundWidth;
- (void)cancelTapGestureRecognizer;
- (BOOL)_shouldPadWithEmptyCellsForAutocorrectionList:(id)a0;

@end
