@class PKBarcodeStickerView, PKLinkedAppIconView, UILabel, UIView;

@interface PKPassFrontFaceView : PKPassFaceView {
    UILabel *_logoLabel;
    PKBarcodeStickerView *_barcodeView;
    UIView *_bottomRightItemView;
}

@property (readonly, nonatomic) PKBarcodeStickerView *barcodeView;
@property (nonatomic) BOOL showsLinkedApp;
@property (nonatomic) long long bottomRightItem;
@property (nonatomic) BOOL showsBarcodeView;
@property (nonatomic) BOOL showsLiveBalance;
@property (readonly, nonatomic) PKLinkedAppIconView *linkedApp;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)createBodyContentViews;
- (void)insertContentView:(id)a0 ofType:(long long)a1;
- (void)setShowsBarcodeView:(BOOL)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })barcodeFrame;
- (id)templateForLayoutMode:(long long)a0;
- (id)headerTemplate;
- (void)createHeaderContentViews;
- (id)passFaceTemplate;
- (id)_relevantBuckets;
- (id)createContactlessLogoView;
- (id)createExpiredLabel;
- (id)templateForHeaderBucket;
- (void)_positionBarcodeView;
- (id)_rebucketAuxiliaryFields:(id)a0;
- (void)updateValidity;

@end
