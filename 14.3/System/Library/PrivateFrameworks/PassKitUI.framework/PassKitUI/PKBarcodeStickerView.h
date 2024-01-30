@class UIFont, UIImageView, UIImage, UILabel, NSMutableArray, PKBarcode;

@interface PKBarcodeStickerView : UIButton {
    PKBarcode *_barcode;
    UIImage *_barcodeImage;
    UIImageView *_matteView;
    UIImageView *_barcodeView;
    NSMutableArray *_stickerConstraints;
    NSMutableArray *_matteConstraints;
    UILabel *_altTextLabel;
    BOOL _barcodeViewInvalidated;
    BOOL _drawBarcode;
}

@property (nonatomic) long long validity;
@property (nonatomic) struct CGSize { double width; double height; } desiredBarcodeSize;
@property (nonatomic) BOOL shouldMatteCode;
@property (nonatomic) UIFont *altTextFont;
@property (nonatomic) double altTextInset;

+ (long long)validityStateForPass:(id)a0;
+ (struct CGSize { double x0; double x1; })_sizeForBarcode:(id)a0;
+ (struct PKBarcodeQuietZone { double x0; double x1; double x2; double x3; })_quietZoneForBarcode:(id)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithBarcode:(id)a0 validityState:(long long)a1;
- (void)_updateValidity;
- (void)_updateMatteViewHiding;
- (struct CGSize { double x0; double x1; })_varianceForBarcode:(id)a0;
- (id)barcodeImage;
- (id)_resizedBarcode:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1;
- (void)_updateDrawBarcode;
- (void)_generateMatteRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 barcodeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 altTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 boundingSize:(struct CGSize { double x0; double x1; })a3;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
