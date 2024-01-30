@class NSArray, VUICastInfoLayout, IKViewElement;

@interface VUIProductBannerCastInfoView : UIView

@property (retain, nonatomic) VUICastInfoLayout *layout;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) NSArray *labels;

+ (id)configureViewWithItems:(id)a0 existingView:(id)a1;

- (void)_updateTextColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutSubviewsWithSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
