@class AVPictureInPicturePlayerLayerView, NSDictionary, AVPlayerLayer, AVPlayerController;

@interface __AVPlayerLayerView : UIView {
    AVPlayerController *_playerController;
    AVPictureInPicturePlayerLayerView *_pictureInPicturePlayerLayerView;
}

@property (retain, nonatomic) AVPlayerLayer *pictureInPicturePlayerLayer;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } videoDisplaySize;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (nonatomic) long long videoGravity;
@property (readonly, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoBounds;
@property (nonatomic, getter=isVideoScaled) BOOL videoScaled;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property (readonly, nonatomic) AVPictureInPicturePlayerLayerView *pictureInPicturePlayerLayerView;

+ (Class)layerClass;
+ (id)keyPathsForValuesAffectingReadyForDisplay;
+ (id)keyPathsForValuesAffectingPixelBufferAttributes;
+ (id)keyPathsForValuesAffectingVideoBounds;
+ (id)keyPathsForValuesAffectingVideoScaled;
+ (id)keyPathsForValuesAffectingVideoLayerGravity;
+ (id)keyPathsForValuesAffectingVideoDisplaySize;
+ (id)keyPathsForValuesAffectingPlayerLayer;

- (void)stopRoutingVideoToPictureInPicturePlayerLayerView;
- (void)startRoutingVideoToPictureInPicturePlayerLayerView;
- (void).cxx_destruct;

@end
