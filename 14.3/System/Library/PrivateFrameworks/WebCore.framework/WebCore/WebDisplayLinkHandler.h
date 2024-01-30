@class CADisplayLink;

@interface WebDisplayLinkHandler : NSObject {
    struct DisplayRefreshMonitorIOS { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct HashSet<WebCore::DisplayRefreshMonitorClient *, WTF::DefaultHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > { struct HashTable<WebCore::DisplayRefreshMonitorClient *, WebCore::DisplayRefreshMonitorClient *, WTF::IdentityExtractor, WTF::DefaultHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > { struct DisplayRefreshMonitorClient **x0; } x0; } x2; struct HashSet<WebCore::DisplayRefreshMonitorClient *, WTF::DefaultHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > *x3; struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__1::__cxx_atomic_base_impl<unsigned char> > { _Atomic unsigned char x0; } x0; } x0; } x0; } x4; unsigned int x5; int x6; BOOL x7; BOOL x8; BOOL x9; struct RetainPtr<WebDisplayLinkHandler> { void *x0; } x10; } *m_monitor;
    CADisplayLink *m_displayLink;
}

- (void)setPreferredFramesPerSecond:(long long)a0;
- (void)dealloc;
- (id)initWithMonitor:(struct DisplayRefreshMonitorIOS { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct HashSet<WebCore::DisplayRefreshMonitorClient *, WTF::DefaultHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > { struct HashTable<WebCore::DisplayRefreshMonitorClient *, WebCore::DisplayRefreshMonitorClient *, WTF::IdentityExtractor, WTF::DefaultHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > { struct DisplayRefreshMonitorClient **x0; } x0; } x2; struct HashSet<WebCore::DisplayRefreshMonitorClient *, WTF::DefaultHash<WebCore::DisplayRefreshMonitorClient *>, WTF::HashTraits<WebCore::DisplayRefreshMonitorClient *> > *x3; struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__1::__cxx_atomic_base_impl<unsigned char> > { _Atomic unsigned char x0; } x0; } x0; } x0; } x4; unsigned int x5; int x6; BOOL x7; BOOL x8; BOOL x9; struct RetainPtr<WebDisplayLinkHandler> { void *x0; } x10; } *)a0;
- (void)handleDisplayLink:(id)a0;
- (void)invalidate;

@end
