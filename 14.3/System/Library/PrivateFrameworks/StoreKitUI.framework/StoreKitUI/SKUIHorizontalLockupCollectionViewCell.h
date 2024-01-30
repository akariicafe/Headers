@class UIView, NSString, UIColor, UIImageView, UIButton, SKUIButtonViewElement, SKUIHorizontalLockupView, SKUICheckboxInputViewElement, SKUICellScrollView;

@interface SKUIHorizontalLockupCollectionViewCell : SKUICollectionViewCell <UIScrollViewAccessibilityDelegate, SKUIPerspectiveView, SKUIViewElementView> {
    UIButton *_actionButton;
    SKUIButtonViewElement *_actionButtonViewElement;
    SKUICellScrollView *_actionsScrollView;
    SKUICheckboxInputViewElement *_editModeCheckboxElement;
    UIImageView *_editModeControl;
    UIView *_highlightBackgroundView;
    SKUIHorizontalLockupView *_lockupView;
    UIColor *_lockupViewBackgroundColor;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly, nonatomic, getter=isScrollingCellToHideActionButton) BOOL scrollingCellToHideActionButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;
+ (double)maximumPerspectiveHeightForSize:(struct CGSize { double x0; double x1; })a0;

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)dealloc;
- (void)setSelected:(BOOL)a0;
- (void)setVanishingPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)_highlightBackgroundColor;
- (void)updateForChangedDistanceFromVanishingPoint;
- (void)setPerspectiveTargetView:(id)a0;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;
- (BOOL)isDeleteButtonHidden;
- (void)hideDeleteButton;
- (void)_removeEditControlAnimated:(BOOL)a0;
- (void)_addEditControlAnimated:(BOOL)a0;
- (BOOL)_isActionsScrollViewEnabled;
- (void)_reloadActionsScrollViewWithViewElement:(id)a0 context:(id)a1;
- (id)_editControlImage;
- (void)_reloadHighlightBackgroundView;
- (void)_reloadLockupViewBackgroundColor;
- (void)_actionButtonAction:(id)a0;
- (id)_attributedStringForActionButton:(id)a0 context:(id)a1;

@end
