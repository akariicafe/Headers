@class AVPictureInPictureCALayerHostView;

@interface AVPictureInPictureSampleBufferDisplayLayerHostView : UIView

@property (readonly, nonatomic) AVPictureInPictureCALayerHostView *hostView;
@property (nonatomic) struct CGSize { double width; double height; } imageQueueSize;
@property (nonatomic) struct CGSize { double width; double height; } contentDimensions;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastKnownFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastKnownBounds;
@property (nonatomic) BOOL needsGeometryUpdate;
@property (nonatomic, getter=isDeferringGeometryUpdates) BOOL deferringGeometryUpdates;
@property (nonatomic) unsigned int contextId;
@property (nonatomic) double beginTime;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateGeometryIfNeeded;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentDimensions:(struct CGSize { double x0; double x1; })a1 imageQueueSize:(struct CGSize { double x0; double x1; })a2;

@end
