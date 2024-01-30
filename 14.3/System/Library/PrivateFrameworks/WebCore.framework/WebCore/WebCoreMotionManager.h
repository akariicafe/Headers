@class NSTimer, CMMotionManager, CLLocationManager;

@interface WebCoreMotionManager : NSObject {
    CMMotionManager *m_motionManager;
    CLLocationManager *m_locationManager;
    struct WeakHashSet<WebCore::MotionManagerClient, WTF::EmptyCounter> { struct HashSet<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > >, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > >, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > > > { struct HashTable<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > >, WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > >, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > >, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > >, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > > > { struct Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > *m_table; } m_impl; } m_set; } m_deviceMotionClients;
    struct WeakHashSet<WebCore::MotionManagerClient, WTF::EmptyCounter> { struct HashSet<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > >, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > >, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > > > { struct HashTable<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > >, WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > >, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > >, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > >, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > > > { struct Ref<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > *m_table; } m_impl; } m_set; } m_deviceOrientationClients;
    NSTimer *m_updateTimer;
    BOOL m_gyroAvailable;
    BOOL m_headingAvailable;
    BOOL m_initialized;
}

+ (id)sharedManager;

- (void)addMotionClient:(struct MotionManagerClient { void /* function */ **x0; struct WeakPtrFactory<WebCore::MotionManagerClient, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x1; } *)a0;
- (void)addOrientationClient:(struct MotionManagerClient { void /* function */ **x0; struct WeakPtrFactory<WebCore::MotionManagerClient, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x1; } *)a0;
- (void)removeOrientationClient:(struct MotionManagerClient { void /* function */ **x0; struct WeakPtrFactory<WebCore::MotionManagerClient, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x1; } *)a0;
- (void)removeMotionClient:(struct MotionManagerClient { void /* function */ **x0; struct WeakPtrFactory<WebCore::MotionManagerClient, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x1; } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)headingAvailable;
- (void)update;
- (id).cxx_construct;
- (BOOL)gyroAvailable;
- (void)initializeOnMainThread;
- (void)checkClientStatus;
- (void)sendMotionData:(id)a0 withHeading:(id)a1;
- (void)sendAccelerometerData:(id)a0;

@end
