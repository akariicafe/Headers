@class LPLinkMetadata;

@interface CKWatchfaceImageBalloonView : CKLinkBalloonView {
    BOOL _isIrisAsset;
}

@property (retain, nonatomic) LPLinkMetadata *metadata;

- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)tapGestureRecognized:(id)a0;
- (void)setIsIrisAsset:(BOOL)a0;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2 hasInvisibleInkEffect:(BOOL)a3;
- (BOOL)isIrisAsset;

@end
