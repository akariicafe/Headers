@class LPWebLinkPresentationProperties;

@interface CKWalletItemBalloonView : CKLinkBalloonView {
    BOOL _isIrisAsset;
}

@property (retain, nonatomic) LPWebLinkPresentationProperties *presentationProperties;

- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)setIsIrisAsset:(BOOL)a0;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2 hasInvisibleInkEffect:(BOOL)a3;
- (BOOL)isIrisAsset;

@end
