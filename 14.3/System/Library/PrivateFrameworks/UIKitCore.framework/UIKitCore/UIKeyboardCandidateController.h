@class UIViewPropertyAnimator, NSDictionary, TUICandidateView, TIKeyboardCandidate, NSMutableArray, UIKBScreenTraits, UIView, UIKBRenderConfig, TIKeyboardCandidateResultSet, NSString, NSArray, UIKeyboardCandidateInlineFloatingView, UIKeyboardCandidateViewState, UIKeyboardCandidateViewConfiguration, UIPanGestureRecognizer;
@protocol UIKeyboardCandidateControllerDelegate, UIKeyboardCandidateListDelegate;

@interface UIKeyboardCandidateController : NSObject <TUICandidateViewDelegate, UIGestureRecognizerDelegate, UIKeyboardCandidateList>

@property (weak, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;
@property (retain, nonatomic) TUICandidateView *bar;
@property (retain, nonatomic) TUICandidateView *key;
@property (retain, nonatomic) TUICandidateView *inlineView;
@property (retain, nonatomic) UIKeyboardCandidateInlineFloatingView *inlineViewContainer;
@property (retain, nonatomic) NSMutableArray *activeViews;
@property (retain, nonatomic) UIKeyboardCandidateViewConfiguration *barConfiguration;
@property (retain, nonatomic) UIKeyboardCandidateViewConfiguration *inlineConfiguration;
@property (retain, nonatomic) UIKeyboardCandidateViewConfiguration *keyConfiguration;
@property (retain, nonatomic) UIKeyboardCandidateViewState *barState;
@property (retain, nonatomic) UIKeyboardCandidateViewState *extendedBarState;
@property (retain, nonatomic) UIKeyboardCandidateViewState *extendedScrolledBarState;
@property (retain, nonatomic) UIKeyboardCandidateViewState *inlineViewState;
@property (retain, nonatomic) UIKeyboardCandidateViewState *extendedInlineViewState;
@property (nonatomic) double additionalExtendedBarBackdropOffset;
@property (retain, nonatomic) TIKeyboardCandidate *currentCandidate;
@property (nonatomic) BOOL darkKeyboard;
@property (nonatomic) BOOL darkKeyboardChanged;
@property (retain, nonatomic) NSDictionary *opacities;
@property (nonatomic) double singleSlottedCellMargin;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UIViewPropertyAnimator *animator;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (weak, nonatomic) id<UIKeyboardCandidateControllerDelegate> delegate;
@property (retain, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet;
@property (copy, nonatomic) NSString *inlineText;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inlineRect;
@property (nonatomic) BOOL inlineRectIsVertical;
@property (nonatomic) BOOL adjustForLeftHandBias;
@property (nonatomic) BOOL reuseArrowButtonToExpandAssistantBarItems;
@property (nonatomic) double splitGap;
@property (readonly, nonatomic) UIView *candidateBar;
@property (readonly, nonatomic) UIView *inlineCandidateView;
@property (readonly, nonatomic) UIView *candidateKey;
@property (readonly, nonatomic) BOOL barIsExtended;
@property (readonly, nonatomic) BOOL inlineViewIsExtended;
@property (readonly, nonatomic) BOOL isExtended;
@property (nonatomic) long long activeCandidateViewType;
@property (readonly, nonatomic) NSArray *activeCandidateViews;
@property (retain, nonatomic) UIKBScreenTraits *screenTraits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (double)candidateViewAnimationDuration;

- (id)secureCandidateRenderTraits;
- (id)keyboardBehaviors;
- (void)toggleBarExtendedWithAnimator:(id)a0;
- (BOOL)isExtendedList;
- (void)acceptSelectedCandidate;
- (void)updateStates;
- (void)updateConfigurations;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)candidateViewWillBeginDragging:(id)a0;
- (id)init;
- (void)candidateView:(id)a0 didAcceptCandidate:(id)a1 atIndexPath:(id)a2 inGridType:(long long)a3 generateFeedback:(BOOL)a4;
- (void)clearCurrentCandidate;
- (void).cxx_destruct;
- (void)candidateViewDidTapInlineText:(id)a0;
- (struct CGSize { double x0; double x1; })maximumSizeForInlineView;
- (BOOL)handleNumberKey:(unsigned long long)a0;
- (id)snapshot;
- (BOOL)shouldShowDisambiguationCandidates;
- (void)candidateViewDidTapArrowButton:(id)a0;
- (id)newCandidateKeyWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void)updateStatesForInlineView;
- (void)dealloc;
- (long long)layoutDirectionForCurrentInputMode;
- (void)_setRenderConfig:(id)a0;
- (id)statisticsIdentifier;
- (void)candidateAcceptedAtIndex:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })candidateBarEdgeInsetsForOrientation:(long long)a0;
- (unsigned long long)currentIndex;
- (void)showCandidateAtIndex:(unsigned long long)a0;
- (long long)candidateViewTypeForView:(id)a0;
- (void)loadDefaultStates;
- (void)updateStatesForKey;
- (double)rowHeightForBarForOrientation:(long long)a0;
- (double)candidateBarHeightForOrientation:(long long)a0;
- (void)revealHiddenCandidates;
- (void)panGestureRecognizerAction:(id)a0;
- (void)showCandidateInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void)toggleInlineViewExtendedAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (long long)rowForCandidateAtIndex:(unsigned long long)a0;
- (BOOL)isFloatingList;
- (BOOL)shouldShowDisambiguationCandidatesInExtendedView;
- (BOOL)shouldShowSortControlForConfiguration:(id)a0;
- (BOOL)showCandidate:(id)a0;
- (void)updateStatesForBar;
- (id)loadInlineCandidateView;
- (void)setCandidates:(id)a0 inlineText:(id)a1 inlineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 maxX:(double)a3 layout:(BOOL)a4;
- (void)showCandidateAtIndex:(unsigned long long)a0 animated:(BOOL)a1 scrollPosition:(unsigned long long)a2;
- (id)candidateAtIndex:(unsigned long long)a0;
- (BOOL)hasCandidateInForwardDirection:(BOOL)a0 granularity:(int)a1;
- (void)updateOpacitiesToState:(id)a0;
- (void)candidateView:(id)a0 didAcceptCandidate:(id)a1 atIndexPath:(id)a2 inGridType:(long long)a3;
- (void)toggleBarExtended;
- (void)collapse;
- (id)candidates;
- (id)loadCandidateBar;
- (void)candidatesDidChange;
- (void)dimKeys:(id)a0;
- (void)setupPanGestureRecognizerIfNeeded;
- (unsigned long long)selectedSortIndex;
- (void)candidateViewNeedsToExpand:(id)a0;
- (long long)viewOffsetForCandidateAtIndex:(unsigned long long)a0;
- (BOOL)handleTabKeyWithShift:(BOOL)a0;
- (double)candidateBarWidth;
- (void)setupAnimatorWithCurve:(long long)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)candidateViewSelectionDidChange:(id)a0 inGridType:(long long)a1;
- (void)extendKeyboardBackdropHeight:(double)a0;
- (void)removeInlineView;
- (BOOL)hasCandidates;
- (void)setUIKeyboardCandidateListDelegate:(id)a0;
- (BOOL)showCandidate:(id)a0 animated:(BOOL)a1 scrollPosition:(unsigned long long)a2;
- (void)updateStyles;
- (void)setCandidates:(id)a0 type:(int)a1 inlineText:(id)a2 inlineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 maxX:(double)a4 layout:(BOOL)a5;
- (void)resetSortControlIndexAfterCandidatesChanged;
- (id)firstNonEmptyActiveCandidateView;
- (double)candidateBarHeight;

@end
