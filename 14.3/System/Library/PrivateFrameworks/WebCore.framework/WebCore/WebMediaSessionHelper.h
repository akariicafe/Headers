@interface WebMediaSessionHelper : NSObject {
    struct MediaSessionHelperiOS { void /* function */ **x0; struct WeakHashSet<WebCore::MediaSessionHelperClient, WTF::EmptyCounter> { struct HashSet<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > >, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > >, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > > > { struct HashTable<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > >, WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > >, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > >, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > >, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > > > { struct Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > *x0; } x0; } x0; } x1; unsigned int x2; BOOL x3; BOOL x4; BOOL x5; struct RetainPtr<WebMediaSessionHelper> { void *x0; } x6; BOOL x7; } *_callback;
    struct RetainPtr<AVRouteDetector> { void *m_ptr; } _routeDetector;
    BOOL _monitoringAirPlayRoutes;
    BOOL _startMonitoringAirPlayRoutesPending;
}

- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (id)initWithCallback:(struct MediaSessionHelperiOS { void /* function */ **x0; struct WeakHashSet<WebCore::MediaSessionHelperClient, WTF::EmptyCounter> { struct HashSet<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > >, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > >, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > > > { struct HashTable<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > >, WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > >, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > >, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > >, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > > > { struct Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > *x0; } x0; } x0; } x1; unsigned int x2; BOOL x3; BOOL x4; BOOL x5; struct RetainPtr<WebMediaSessionHelper> { void *x0; } x6; BOOL x7; } *)a0;
- (void).cxx_destruct;
- (void)stopMonitoringAirPlayRoutes;
- (void)mediaServerConnectionDied:(id)a0;
- (void)dealloc;
- (void)startMonitoringAirPlayRoutes;
- (void)carPlayIsConnectedDidChange:(id)a0;
- (void)clearCallback;
- (void)wirelessRoutesAvailableDidChange:(id)a0;
- (id).cxx_construct;
- (void)activeOutputDeviceDidChange:(id)a0;
- (BOOL)hasWirelessTargetsAvailable;

@end
