@class NSString;
@protocol AVPlayerViewControllerDelegate_WebKitOnly;

@interface WebAVPlayerViewController : NSObject <AVPlayerViewControllerDelegate> {
    struct VideoFullscreenInterfaceAVKit { void /* function */ **x0; void /* function */ **x1; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x2; struct WeakPtrFactory<WebCore::VideoFullscreenInterfaceAVKit, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x3; struct Mode { unsigned int x0; } x4; struct Mode { unsigned int x0; } x5; struct Ref<WebCore::PlaybackSessionInterfaceAVKit, WTF::DumbPtrTraits<WebCore::PlaybackSessionInterfaceAVKit> > { struct PlaybackSessionInterfaceAVKit *x0; } x6; struct RetainPtr<WebAVPlayerViewControllerDelegate> { void *x0; } x7; struct RetainPtr<WebAVPlayerViewController> { void *x0; } x8; struct VideoFullscreenModel *x9; struct VideoFullscreenChangeObserver *x10; struct RetainPtr<UIWindow> { void *x0; } x11; struct RetainPtr<UIViewController> { void *x0; } x12; struct RetainPtr<UIView> { void *x0; } x13; struct RetainPtr<UIView> { void *x0; } x14; struct RetainPtr<UIWindow> { void *x0; } x15; struct RetainPtr<WebAVPlayerLayerView> { void *x0; } x16; struct Function<void (bool)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > > { struct CallableWrapperBase<void, bool> *x0; } x0; } x0; } x17; struct Timer<WebCore::VideoFullscreenInterfaceAVKit> { void /* function */ **x0; struct Ref<WTF::RunLoop, WTF::DumbPtrTraits<WTF::RunLoop> > { struct RunLoop *x0; } x1; struct RetainPtr<__CFRunLoopTimer *> { void *x0; } x2; struct VideoFullscreenInterfaceAVKit *x3; } x18; struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x19; unsigned char x20; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; BOOL x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *_fullscreenInterface;
    struct RetainPtr<UIViewController> { void *m_ptr; } _presentingViewController;
    struct RetainPtr<AVPlayerViewController> { void *m_ptr; } _avPlayerViewController;
    struct RetainPtr<NSTimer> { void *m_ptr; } _startPictureInPictureTimer;
    struct RetainPtr<AVObservationController> { void *m_ptr; } _avPlayerViewControllerObservationController;
    id<AVPlayerViewControllerDelegate_WebKitOnly> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)view;
- (void)dealloc;
- (BOOL)isPictureInPicturePossible;
- (BOOL)isPictureInPictureActive;
- (void)startPictureInPicture;
- (id).cxx_construct;
- (void)setShowsPlaybackControls:(BOOL)a0;
- (void)setAllowsPictureInPicturePlayback:(BOOL)a0;
- (void)removeFromParentViewController;
- (void)setDelegate:(id)a0;
- (void)stopPictureInPicture;
- (void)setPlayerController:(id)a0;
- (void)exitFullScreenAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setWebKitOverrideRouteSharingPolicy:(unsigned long long)a0 routingContextUID:(id)a1;
- (void)enterFullScreenAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)pictureInPictureWasStartedWhenEnteringBackground;
- (BOOL)showsPlaybackControls;
- (id)initWithFullscreenInterface:(struct VideoFullscreenInterfaceAVKit { void /* function */ **x0; void /* function */ **x1; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x2; struct WeakPtrFactory<WebCore::VideoFullscreenInterfaceAVKit, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x3; struct Mode { unsigned int x0; } x4; struct Mode { unsigned int x0; } x5; struct Ref<WebCore::PlaybackSessionInterfaceAVKit, WTF::DumbPtrTraits<WebCore::PlaybackSessionInterfaceAVKit> > { struct PlaybackSessionInterfaceAVKit *x0; } x6; struct RetainPtr<WebAVPlayerViewControllerDelegate> { void *x0; } x7; struct RetainPtr<WebAVPlayerViewController> { void *x0; } x8; struct VideoFullscreenModel *x9; struct VideoFullscreenChangeObserver *x10; struct RetainPtr<UIWindow> { void *x0; } x11; struct RetainPtr<UIViewController> { void *x0; } x12; struct RetainPtr<UIView> { void *x0; } x13; struct RetainPtr<UIView> { void *x0; } x14; struct RetainPtr<UIWindow> { void *x0; } x15; struct RetainPtr<WebAVPlayerLayerView> { void *x0; } x16; struct Function<void (bool)> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void, bool>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void, bool> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, bool> > > { struct CallableWrapperBase<void, bool> *x0; } x0; } x0; } x17; struct Timer<WebCore::VideoFullscreenInterfaceAVKit> { void /* function */ **x0; struct Ref<WTF::RunLoop, WTF::DumbPtrTraits<WTF::RunLoop> > { struct RunLoop *x0; } x1; struct RetainPtr<__CFRunLoopTimer *> { void *x0; } x2; struct VideoFullscreenInterfaceAVKit *x3; } x18; struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x19; unsigned char x20; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; BOOL x38; BOOL x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; } *)a0;
- (BOOL)playerViewControllerShouldHandleDoneButtonTap:(id)a0;
- (void)tryToStartPictureInPicture;
- (BOOL)pictureInPictureActive;
- (id)avPlayerViewController;

@end
