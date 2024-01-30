@class NUComposition, UIImage, NUMediaView, PHLivePhoto;
@protocol PUCropTransformedImageViewDelegate;

@interface PUCropTransformedImageView : UIView

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) PHLivePhoto *livePhoto;
@property (retain, nonatomic) NUMediaView *videoMediaView;
@property (retain, nonatomic) NUComposition *autoloopComposition;
@property (readonly, nonatomic) NUComposition *videoComposition;
@property (nonatomic) struct { long long privateInteger; float privateFloat; } imageModulationOptions;
@property (weak, nonatomic) id<PUCropTransformedImageViewDelegate> delegate;
@property (nonatomic) double straightenAngle;
@property (nonatomic) double pitchAngle;
@property (nonatomic) double yawAngle;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } canvasFrame;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic, getter=isTracking) BOOL tracking;
@property (readonly, nonatomic, getter=isDecelerating) BOOL decelerating;

- (void).cxx_destruct;
- (void)_setTracking:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageBounds;
- (void)_resetCropRect;
- (void)_setCropModel:(id)a0;
- (id)cropModel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageCropRectForViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImageCropRectFromViewCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)setModelCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setNeedsLayerTransformsUpdateAnimated:(BOOL)a0;
- (void)setVideoComposition:(id)a0 withSeekTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })validateViewCropRectAgainstModelCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewCropRectForImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
