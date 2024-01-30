@interface PromotedContentUI.CarouselCollectionViewCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ $__lazy_storage_$_captionLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_assetImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_blurImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_captionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_ctaButton;
    void /* unknown type, empty encoding */ element;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ index;
    void /* unknown type, empty encoding */ touchPoint;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)didTapCTAButtonWithSender:(id)a0;

@end
