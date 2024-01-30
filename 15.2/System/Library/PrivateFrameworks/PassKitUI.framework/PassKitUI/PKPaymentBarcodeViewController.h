@class PKPaymentPass, UILayoutGuide, UIImageView, NSData, UILabel, PKRightAngleRotatingView, UIButton;

@interface PKPaymentBarcodeViewController : UIViewController {
    PKRightAngleRotatingView *_barcodeView;
    UILabel *_disclaimerText;
    UIButton *_closeButton;
    UILayoutGuide *_barcodeGuide;
    UIImageView *_compactBankLogoView;
    PKPaymentPass *_pass;
    struct { double barcodeTopPadding; double disclaimerToBarcodePadding; double disclaimerSidePadding; double bankToDisclaimerPadding; double altTextInset; } _viewSizeInfo;
}

@property (retain, nonatomic) NSData *barcodeData;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (id)initWithPass:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_closeButtonPressed:(id)a0;
- (struct { double x0; double x1; double x2; double x3; double x4; })_barcodePadding;
- (struct CGSize { double x0; double x1; })_barcodeSize;

@end
