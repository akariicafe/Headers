@class UIImageView, PKSubcredentialPairingFlowControllerContext;

@interface PKCredentialPairingExplanationHeaderView : UIView {
    UIImageView *_imageView;
    PKSubcredentialPairingFlowControllerContext *_context;
}

@property (nonatomic) BOOL useCompactLayout;

- (void)layoutSubviews;
- (id)initWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)pairingImage;

@end
