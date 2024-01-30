@class NSString, NSMapTable, UIResponder;

@interface SKUIPanelView : SKUIViewReuseView <SKUIAnimatorDOMFeatureDelegate, SKUIViewElementView> {
    NSMapTable *_animators;
    UIResponder *_inputResponder;
    NSMapTable *_viewElements;
    NSMapTable *_viewMargins;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_attributedStringForText:(id)a0 style:(id)a1 context:(id)a2;
+ (void)_enumerateChildrenOfViewElement:(id)a0 usingBlock:(id /* block */)a1;
+ (BOOL)_isValidTextInputViewElement:(id)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_marginsForViewElement:(id)a0 index:(unsigned long long)a1 width:(double)a2 context:(id)a3;
+ (BOOL)_shouldDisplayViewElement:(id)a0;
+ (struct CGSize { double x0; double x1; })_sizeForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (BOOL)_useEditorialLayoutForLabelElement:(id)a0;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;

- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_buttonAction:(id)a0;
- (void)animatorFeature:(id)a0 performAnimationWithName:(id)a1 options:(id)a2;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;

@end
