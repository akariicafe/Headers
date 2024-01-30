@class _PXLivePhotoTrimScrubberLoupeViewImageRequest, AVAsset, CAShapeLayer, UIImageView, UIView, NSObject, AVVideoComposition;
@protocol OS_dispatch_queue;

@interface PXLivePhotoTrimScrubberLoupeView : UIView {
    UIView *_container;
    CAShapeLayer *_maskLayer;
    UIImageView *_imageView;
    BOOL _imageIsValid;
    NSObject<OS_dispatch_queue> *_workQueue;
    _PXLivePhotoTrimScrubberLoupeViewImageRequest *_currentImageRequest;
    CAShapeLayer *_borderLayer;
    BOOL _playheadIsValid;
    double _needleWidth;
}

@property (readonly, nonatomic) unsigned long long playheadStyle;
@property (readonly, nonatomic) AVAsset *asset;
@property (readonly, nonatomic) AVVideoComposition *videoComposition;
@property (nonatomic) double aspectRatio;
@property (retain, nonatomic) UIView *playerView;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameTime;
@property (nonatomic) double verticalInset;
@property (nonatomic) double outerCornerRadius;
@property (nonatomic) double innerCornerRadius;

- (void)layoutSubviews;
- (void)_invalidateImage;
- (void)_updateImageIfNeeded;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setAsset:(id)a0 videoComposition:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_PXLivePhotoTrimScrubberLoupeView_commonInit;
- (BOOL)showPlayerView;
- (void)setShowPlayerView:(BOOL)a0;
- (void)setShowNeedleWithWidth:(double)a0 animate:(BOOL)a1;
- (void)setShowLoupeThumbnailWithFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 animate:(BOOL)a1;
- (void)setShowLoupePlayerAnimate:(BOOL)a0;
- (void)_setPlayheadStyle:(unsigned long long)a0 animate:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_loupeFrameWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_extractImageFromImageRequest:(id)a0;
- (void)_presentImage:(id)a0;
- (id)_collapsedPathForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_expandedPathForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 needsCutout:(BOOL)a1;
- (id)_transitionPathForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 needsCutout:(BOOL)a1;
- (void)_invalidatePlayhead;
- (void)_updatePlayheadIfNeeded;
- (void)_updatePlayheadBorderAnimate:(BOOL)a0;

@end
