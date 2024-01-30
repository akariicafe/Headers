@class NSURLSession, PKShapeView, UIImageView, NSString, UIView;

@interface PKContinuityPaymentFaviconView : UIView {
    NSURLSession *_urlSession;
    UIImageView *_macImageView;
    UIImageView *_imageView;
    UIView *_monogramView;
    UIView *_imageShadowView;
    PKShapeView *_maskView;
    NSString *_modelIdentifier;
    NSString *_merchantName;
}

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 URL:(id)a1 modelIdentifier:(id)a2 merchantName:(id)a3;
- (void)_loadMacImage;
- (void)_setupMonogram;
- (double)_iconVerticalOffset;

@end
