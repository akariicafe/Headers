@class NSMutableArray, PKBarcodeStickerView, UIButton, UIImageView, UILabel, PKBackdropView, UIView;

@interface PKPassPaymentCardFrontFaceView : PKPassFrontFaceView {
    UILabel *_balanceLabel;
    UIView *_scrimView;
    PKBackdropView *_backdropView;
    PKBarcodeStickerView *_topBarcodeView;
    PKBarcodeStickerView *_bottomBarcodeView;
    NSMutableArray *_oldTopBarcodeViews;
    NSMutableArray *_oldBottomBarcodeViews;
    UIButton *_fullScreenButton;
    UIImageView *_compactBankLogoView;
}

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_handleAccountChanged:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)dealloc;
- (void)createBodyContentViews;
- (id)templateForLayoutMode:(long long)a0;
- (void)createHeaderContentViews;
- (void)setViewExpanded:(BOOL)a0;
- (void)setDynamicBarcodeData:(id)a0;
- (id)templateForHeaderBucket;
- (void)setShowsLiveBalance:(BOOL)a0;
- (id)_filterAuxiliaryField:(id)a0;
- (id)_filterSecondaryField:(id)a0;
- (void)_showFullScreenBarcodeForButton:(id)a0;
- (void)_updateBalanceLabelFontSize;
- (void)_updateBalanceWithAccount:(id)a0;
- (double)_barcodePadding;
- (struct CGSize { double x0; double x1; })_barcodeSize;
- (BOOL)showsShare;

@end
