@class NSString, _ASCABLEQRCodeImageView, UIView, _ASCABLEQRCodeBadgeView;

@interface _ASCABLEQRCodeView : UIView {
    NSString *_message;
    _ASCABLEQRCodeImageView *_imageView;
    UIView *_platterView;
    _ASCABLEQRCodeBadgeView *_badgeView;
}

- (id)initWithMessage:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_qrCodeASImage;
- (id)_qrCodeCIImage;
- (id)_qrCodeColor;
- (void)_updatePlatterBorderStyle;
- (void)_updateQRCodeImage;

@end
