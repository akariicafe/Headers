@class TUICandidateInlineTextView, UIView, TIKeyboardCandidateResultSet, NSString, TIKeyboardCandidate, TUICandidateArrowButton, TUICandidateSortControl, TUICandidateBackdropView, TUICandidateGrid, TUICandidateMask, NSIndexPath;
@protocol TUICandidateViewDelegate, TUICandidateViewState;

@interface TUICandidateView : UIView <TUICandidateGridDelegate>

@property (retain, nonatomic) UIView *clipsToBoundsView;
@property (retain, nonatomic) TUICandidateMask *maskView;
@property (retain, nonatomic) TUICandidateGrid *primaryGrid;
@property (retain, nonatomic) TUICandidateGrid *disambiguationGrid;
@property (retain, nonatomic) TUICandidateSortControl *sortControl;
@property (retain, nonatomic) TUICandidateInlineTextView *inlineTextView;
@property (retain, nonatomic) TUICandidateArrowButton *arrowButton;
@property (retain, nonatomic) TUICandidateBackdropView *backdropView;
@property (nonatomic) BOOL showingSortControl;
@property (nonatomic) BOOL shouldShowArrowButton;
@property (nonatomic) BOOL changingLayout;
@property (retain, nonatomic) id<TUICandidateViewState> state;
@property (retain, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet;
@property (copy, nonatomic) NSString *inlineText;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSIndexPath *disambiguationSelectedIndexPath;
@property (readonly, nonatomic) TIKeyboardCandidate *selectedCandidate;
@property (readonly, nonatomic) TIKeyboardCandidate *selectedDisambiguationCandidate;
@property (weak, nonatomic) id<TUICandidateViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (BOOL)handleNumberKey:(unsigned long long)a0;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)commonInit;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showCandidateInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setState:(id)a0 animated:(BOOL)a1 force:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)showingArrowButton;
- (void)resetSortControlIndex;
- (void)setState:(id)a0 animated:(BOOL)a1 animator:(id)a2 options:(unsigned long long)a3 force:(BOOL)a4 completion:(id /* block */)a5;
- (void)setState:(id)a0 animated:(BOOL)a1 options:(unsigned long long)a2 force:(BOOL)a3 completion:(id /* block */)a4;
- (long long)rowForCandidate:(id)a0;
- (id)indexPathForCandidate:(id)a0;
- (void)setSelectedIndexPath:(id)a0 animated:(BOOL)a1 scrollPosition:(unsigned long long)a2;
- (long long)selectedSortControlIndex;
- (BOOL)hasCandidateInForwardDirection:(BOOL)a0 granularity:(int)a1 inGridType:(long long)a2;
- (long long)viewOffsetForCandidate:(id)a0;
- (void)showCandidateInForwardDirection:(BOOL)a0 granularity:(int)a1 inGridType:(long long)a2;
- (void)candidateGrid:(id)a0 didAcceptCandidate:(id)a1 atIndexPath:(id)a2;
- (void)candidateGridSelectionDidChange:(id)a0;
- (void)candidateGrid:(id)a0 didChangeContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)candidateGrid:(id)a0 didMoveHighlightFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)candidateGridNeedsToExpand:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForClipsToBoundsViewWithState:(id)a0;
- (double)sortControlHeight;
- (double)inlineTextHeight;
- (double)disambiguationHeight;
- (double)arrowButtonWidth;
- (void)prepareForLayoutChange:(BOOL)a0;
- (void)changeLayoutInsideAnimationBlock;
- (id)gridOfType:(long long)a0;
- (void)updatePrimaryGridRowTypeWithOptions:(unsigned long long)a0 animated:(BOOL)a1 animator:(id)a2 completion:(id /* block */)a3;
- (void)finalizeLayoutChange;
- (void)reloadGridsIfNeeded;
- (void)updateSortControlTitlesIfNeeded;
- (void)updateCornerRadius;
- (BOOL)reloadPrimaryGridDataIfNeeded;
- (void)didTapArrowButton:(id)a0;
- (void)reloadDisambiguationGridDataIfNeeded;
- (void)updateDisambiguationSelectionIndex;
- (id)candidateGroupsForCurrentState;
- (void)didTapInlineText:(id)a0;
- (id)sortControlTitles;
- (BOOL)shouldAutomaticallyHideAndShowSortControl;
- (BOOL)toggleSortControl:(BOOL)a0 animated:(BOOL)a1;
- (void)handleSortControlValueChanged;
- (void)updateArrowButtonVisibility;
- (id)visibleCandidates;
- (id)filteredCandidates;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)hasCandidateInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (id)initWithCoder:(id)a0;
- (double)arrowButtonHeight;

@end
