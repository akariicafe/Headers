@interface WKVideoLayerRemote : CALayer {
    struct WeakPtr<WebKit::MediaPlayerPrivateRemote, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<>, WTF::RawPtrTraits<WTF::WeakPtrImpl<>>, WTF::DefaultRefDerefTraits<WTF::WeakPtrImpl<>>> { void *m_ptr; } m_impl; } _mediaPlayerPrivateRemote;
    struct RetainPtr<CAContext> { void *m_ptr; } _context;
    unsigned char _videoGravity;
    struct unique_ptr<WebCore::Timer, std::default_delete<WebCore::Timer>> { struct __compressed_pair<WebCore::Timer *, std::default_delete<WebCore::Timer>> { struct Timer *__value_; } __ptr_; } _resolveBoundsTimer;
    BOOL _shouldRestartWhenTimerFires;
    struct Seconds { double m_value; } _delay;
}

@property (nonatomic) void *mediaPlayerPrivateRemote;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoLayerFrame;
@property (nonatomic) unsigned char videoGravity;

- (void)layoutSublayers;
- (void).cxx_destruct;
- (id)init;
- (BOOL)resizePreservingGravity;
- (void)resolveBounds;
- (id).cxx_construct;

@end
