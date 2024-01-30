@class NSString, NSDictionary, CALayer, AVPlayerController;

@interface WebAVPlayerLayer : CALayer {
    struct RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::RawPtrTraits<WebCore::VideoFullscreenInterfaceAVKit>, WTF::DefaultRefDerefTraits<WebCore::VideoFullscreenInterfaceAVKit>> { struct VideoFullscreenInterfaceAVKit *m_ptr; } _fullscreenInterface;
    struct RetainPtr<WebAVPlayerController> { void *m_ptr; } _playerController;
    struct RetainPtr<CALayer> { void *m_ptr; } _videoSublayer;
    struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } _videoSublayerFrame;
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

- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoRect;
- (struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; })calculateTargetVideoFrame;
- (void)resolveBounds;

@end
