@class PKPass, PKBarcodeStickerView;

@interface PKBarcodeTableViewCell : UITableViewCell {
    PKBarcodeStickerView *_barcodeStickerView;
    struct CGSize { double width; double height; } _maximumBarcodeSize;
}

@property (retain, nonatomic) PKPass *pass;
@property (nonatomic) long long barcodeStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_computeMaxBarcodeSize;

@end
