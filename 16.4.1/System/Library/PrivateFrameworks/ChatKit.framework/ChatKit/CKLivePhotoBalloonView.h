@class PHLivePhotoView, PHLivePhoto;

@interface CKLivePhotoBalloonView : CKImageBalloonView {
    BOOL _isIrisAsset;
}

@property (retain, nonatomic) PHLivePhotoView *livePhotoView;
@property (retain, nonatomic) PHLivePhoto *livePhoto;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setIsIrisAsset:(BOOL)a0;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2 hasInvisibleInkEffect:(BOOL)a3;
- (BOOL)isIrisAsset;

@end
