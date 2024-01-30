@class UIImageView;

@interface PKCredentialPairingExplanationHeaderView : UIView {
    UIImageView *_imageView;
}

@property (nonatomic) BOOL useCompactLayout;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)pairingImage;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
