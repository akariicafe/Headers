@class NSString, NSDictionary, CALayer, AVPlayerController;

@interface WebAVPlayerLayer : CALayer {
    struct RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::DumbPtrTraits<WebCore::VideoFullscreenInterfaceAVKit> > { struct VideoFullscreenInterfaceAVKit *m_ptr; } _fullscreenInterface;
    struct RetainPtr<WebAVPlayerController> { void *m_ptr; } _avPlayerController;
    struct RetainPtr<CALayer> { void *m_ptr; } _videoSublayer;
    struct FloatRect { struct FloatPoint { float m_x; float m_y; } m_location; struct FloatSize { float m_width; float m_height; } m_size; } _videoSublayerFrame;
    struct RetainPtr<NSString> { void *m_ptr; } _videoGravity;
    struct RetainPtr<NSString> { void *m_ptr; } _previousVideoGravity;
}

@property (retain, nonatomic) NSString *videoGravity;
@property (nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;
@property (nonatomic) struct VideoFullscreenInterfaceAVKit { void /* function */ **x0; void /* function */ **x1; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x2; struct WeakPtrFactory<WebCore::VideoFullscreenInterfaceAVKit, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x3; struct Mode { unsigned int x0; } x4; struct Mode { unsigned int x0; } x5; struct Ref<WebCore::PlaybackSessionInterfaceAVKit, WTF::DumbPtrTraits<WebCore::PlaybackSessionInterfaceAVKit> > { struct PlaybackSessionInterfaceAVKit *x0; } x6; struct RetainPtr<WebAVPlayerViewControllerDelegate> { void *x0; } x7; struct RetainPtr<WebAVPlayerViewController> { void *x0; } x8; struct VideoFullscreenModel *x9; struct VideoFullscreenChangeObserver *x10; struct RetainPtr<UIWindow> { void *x0; } x11; struct RetainPtr<UIViewController> { void *x0; } x12; struct RetainPtr<UIView> { void *x0; } x13; struct RetainPtr<UIView> { void *x0; } x14; struct RetainPtr<UIWindow> { void *x0; } x15; struct RetainPtr<WebAVPlayerLayerView> { void *x0; } x16; struct Function<void (bool)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > > { struct CallableWrapperBase<void, bool> *x0; } x0; } x0; } x17; struct Timer<WebCore::VideoFullscreenInterfaceAVKit> { void /* function */ **x0; struct Ref<WTF::RunLoop, WTF::DumbPtrTraits<WTF::RunLoop> > { struct RunLoop *x0; } x1; struct RetainPtr<__CFRunLoopTimer *> { void *x0; } x2; struct VideoFullscreenInterfaceAVKit *x3; } x18; struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x19; unsigned char x20; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; BOOL x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *fullscreenInterface;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (retain, nonatomic) CALayer *videoSublayer;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property struct CGSize { double width; double height; } videoDimensions;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } modelVideoLayerFrame;

+ (id)keyPathsForValuesAffectingVideoRect;

- (void)layoutSublayers;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoRect;
- (void)resolveBounds;

@end
