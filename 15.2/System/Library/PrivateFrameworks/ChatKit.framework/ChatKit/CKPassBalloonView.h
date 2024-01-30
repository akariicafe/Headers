@class LPWebLinkPresentationProperties;

@interface CKPassBalloonView : CKLinkBalloonView {
    BOOL _isIrisAsset;
}

@property (retain, nonatomic) LPWebLinkPresentationProperties *presentationProperties;

- (void)prepareForDisplay;
- (BOOL)isIrisAsset;
- (void)setIsIrisAsset:(BOOL)a0;
- (void).cxx_destruct;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2 hasInvisibleInkEffect:(BOOL)a3;
- (void)prepareForReuse;

@end
