@class UIControl, NSString, SKUIAttributedStringView, SKUIButtonViewElement, SKUIImageView, SKUIImageViewElement;

@interface SKUIContentUnavailableView : SKUIViewReuseView <SKUIViewElementView> {
    UIControl *_button;
    SKUIButtonViewElement *_buttonElement;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    SKUIImageView *_imageView;
    SKUIImageViewElement *_imageElement;
    SKUIAttributedStringView *_messageView;
    SKUIAttributedStringView *_titleView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;
+ (id)_attributedStringWithTitleLabel:(id)a0 context:(id)a1;
+ (id)_attributedStringWithMessageLabel:(id)a0 context:(id)a1;
+ (id)_attributedStringWithButton:(id)a0 context:(id)a1;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;
- (void)_buttonAction:(id)a0;
- (double)_firstBaselineOffsetForView:(id)a0;
- (double)_baselineOffsetForView:(id)a0;

@end
