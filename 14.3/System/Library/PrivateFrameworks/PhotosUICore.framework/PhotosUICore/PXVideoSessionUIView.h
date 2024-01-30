@class NSString, PXVideoView, UIImage, UIView, PXVideoSession, UIImageView;
@protocol PXVideoSessionUIViewDelegate;

@interface PXVideoSessionUIView : UIView <PXVideoViewDelegate> {
    UIView *_videoContainerView;
    PXVideoView *_adoptedVideoView;
    UIImageView *_placeholderImageView;
}

@property (nonatomic) BOOL placeholderVisible;
@property (retain, nonatomic) PXVideoSession *videoSession;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) BOOL isVideoLayerReadyForDisplay;
@property (weak, nonatomic) id<PXVideoSessionUIViewDelegate> delegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (nonatomic) BOOL allowsEdgeAntialiasing;
@property (copy, nonatomic) NSString *videoGravity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)setContentMode:(long long)a0;
- (void)videoViewReadinessDidChange:(id)a0;
- (void)_updateVideoViewFrame;
- (id)generateSnapshotImage;
- (void)layoutSubviews;
- (void)_updateEdgeAntialiasing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updatePlaceholderVisibility;

@end
