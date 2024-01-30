@class TUIDrawingView, UILayoutGuide, UIKBTree, UIView, UIKBRenderTraits, NSMutableArray;
@protocol TUIVariantSelectorDelegate;

@interface TUIVariantSelectorView : UIView

@property (retain, nonatomic) UIKBTree *backingTree;
@property (retain, nonatomic) UIView *variantView;
@property (retain, nonatomic) UILayoutGuide *variantLayoutGuide;
@property (retain, nonatomic) UIView *deepShadowView;
@property (retain, nonatomic) UIView *keyShadowView;
@property (retain, nonatomic) UIView *backdropView;
@property (retain, nonatomic) TUIDrawingView *backgroundMaskView;
@property (retain, nonatomic) TUIDrawingView *borderView;
@property (retain, nonatomic) UIKBRenderTraits *renderTraits;
@property (readonly, nonatomic) unsigned long long selectedVariant;
@property (retain, nonatomic) NSMutableArray *arrangedVariantCells;
@property (nonatomic) BOOL baseKeyOnRight;
@property (nonatomic) BOOL needsPopup;
@property (nonatomic) long long layoutStyle;
@property (weak, nonatomic) id<TUIVariantSelectorDelegate> selectorDelegate;
@property (readonly, nonatomic) UILayoutGuide *baseKeyLayoutGuide;
@property (readonly, nonatomic) UIKBTree *associatedTree;
@property (weak, nonatomic) UIView *touchesForwardingView;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)addVariantsForKey:(id)a0 toView:(id)a1;
- (id)cellViewsInSubtreeOrder;
- (id)constraintsToMatchInnerView:(id)a0 toOuterView:(id)a1 withInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (id)constraintsToMatchView:(id)a0 toLayoutGuide:(id)a1 withInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)finishVariantSelection;
- (BOOL)highlightCellAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)indexOfHighlightedVariant;
- (id)initWithKey:(id)a0 renderTraits:(id)a1;
- (id)paddleBezierPath;
- (void)popupConstructor;
- (void)setInitialHighlight;
- (void)unhighlightAllViews;
- (void)updateRenderTraits:(id)a0 forState:(int)a1;
- (void)updateSelectorForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateSelectorForTouch:(id)a0 event:(id)a1;
- (void)updateVariantsIfNeededForKey:(id)a0;
- (id)variantCellAtLocation:(struct CGPoint { double x0; double x1; })a0;

@end
