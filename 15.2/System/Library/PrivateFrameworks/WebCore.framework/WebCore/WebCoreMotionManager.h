@interface WebCoreMotionManager : NSObject {
    struct RetainPtr<CMMotionManager> { void *m_ptr; } m_motionManager;
    struct RetainPtr<CLLocationManager> { void *m_ptr; } m_locationManager;
    struct WeakHashSet<WebCore::MotionManagerClient, WTF::EmptyCounter> { struct HashSet<WTF::Ref<WTF::WeakPtrImpl<>>, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTableTraits> { struct HashTable<WTF::Ref<WTF::WeakPtrImpl<>>, WTF::Ref<WTF::WeakPtrImpl<>>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } m_set; } m_deviceMotionClients;
    struct WeakHashSet<WebCore::MotionManagerClient, WTF::EmptyCounter> { struct HashSet<WTF::Ref<WTF::WeakPtrImpl<>>, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTableTraits> { struct HashTable<WTF::Ref<WTF::WeakPtrImpl<>>, WTF::Ref<WTF::WeakPtrImpl<>>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } m_set; } m_deviceOrientationClients;
    struct RetainPtr<NSTimer> { void *m_ptr; } m_updateTimer;
    BOOL m_gyroAvailable;
    BOOL m_headingAvailable;
    BOOL m_initialized;
}

+ (id)sharedManager;

- (BOOL)gyroAvailable;
- (void)update;
- (BOOL)headingAvailable;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)initializeOnMainThread;
- (void)checkClientStatus;
- (void)sendMotionData:(id)a0 withHeading:(id)a1;
- (void)sendAccelerometerData:(id)a0;
- (id).cxx_construct;
- (void)addOrientationClient:(void *)a0;
- (void)removeOrientationClient:(void *)a0;
- (void)addMotionClient:(void *)a0;
- (void)removeMotionClient:(void *)a0;

@end
