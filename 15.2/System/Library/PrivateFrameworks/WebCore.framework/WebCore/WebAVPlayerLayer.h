@class NSString, NSDictionary, CALayer, AVPlayerController;

@interface WebAVPlayerLayer : CALayer {
    struct RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::RawPtrTraits<WebCore::VideoFullscreenInterfaceAVKit>, WTF::DefaultRefDerefTraits<WebCore::VideoFullscreenInterfaceAVKit>> { struct VideoFullscreenInterfaceAVKit *m_ptr; } _fullscreenInterface;
    struct RetainPtr<WebAVPlayerController> { void *m_ptr; } _avPlayerController;
    struct RetainPtr<CALayer> { void *m_ptr; } _videoSublayer;
    struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { BOOL hasIntrinsicWidth; BOOL hasIntrinsicHeight; float m_width; float m_height; } m_size; } _videoSublayerFrame;
    struct RetainPtr<NSString> { void *m_ptr; } _videoGravity;
    struct RetainPtr<NSString> { void *m_ptr; } _previousVideoGravity;
}

@property (retain, nonatomic) NSString *videoGravity;
@property (nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (nonatomic) void *fullscreenInterface;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (retain, nonatomic) CALayer *videoSublayer;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property struct CGSize { double width; double height; } videoDimensions;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } modelVideoLayerFrame;

+ (id)keyPathsForValuesAffectingVideoRect;

- (void)layoutSublayers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoRect;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)resolveBounds;
- (id).cxx_construct;
- (struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { BOOL x0; BOOL x1; float x2; float x3; } x1; })calculateTargetVideoFrame;

@end
