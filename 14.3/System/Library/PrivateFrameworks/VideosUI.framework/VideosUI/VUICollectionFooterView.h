@class VUILegacyButton, IKViewElement;

@interface VUICollectionFooterView : UICollectionReusableView

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) IKViewElement *buttonViewElement;
@property (retain, nonatomic) VUILegacyButton *buttonView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;

+ (id)configureCollectionFooterViewWithElement:(id)a0 existingView:(id)a1;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithSize:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;

@end
