@interface WebCoreMotionManager : NSObject {
    struct RetainPtr<CMMotionManager> { void *m_ptr; } m_motionManager;
    struct RetainPtr<CLLocationManager> { void *m_ptr; } m_locationManager;
    struct WeakHashSet<WebCore::MotionManagerClient, WTF::DefaultWeakPtrImpl, WTF::EnableWeakPtrThreadingAssertions::Yes> { struct HashSet<WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::DefaultHash<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTableTraits> { struct HashTable<WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } m_set; unsigned int m_operationCountSinceLastCleanup; } m_deviceMotionClients;
    struct WeakHashSet<WebCore::MotionManagerClient, WTF::DefaultWeakPtrImpl, WTF::EnableWeakPtrThreadingAssertions::Yes> { struct HashSet<WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::DefaultHash<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTableTraits> { struct HashTable<WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::Ref<WTF::DefaultWeakPtrImpl>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>, WTF::HashTraits<WTF::Ref<WTF::DefaultWeakPtrImpl>>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } m_set; unsigned int m_operationCountSinceLastCleanup; } m_deviceOrientationClients;
    struct RetainPtr<NSTimer> { void *m_ptr; } m_updateTimer;
    BOOL m_gyroAvailable;
    BOOL m_headingAvailable;
    BOOL m_initialized;
}

+ (id)sharedManager;

- (id).cxx_construct;
- (void)update;
- (void)dealloc;
- (id)init;
- (BOOL)headingAvailable;
- (void).cxx_destruct;
- (BOOL)gyroAvailable;
- (void)addMotionClient:(void *)a0;
- (void)addOrientationClient:(void *)a0;
- (void)checkClientStatus;
- (void)initializeOnMainThread;
- (void)removeMotionClient:(void *)a0;
- (void)removeOrientationClient:(void *)a0;
- (void)sendAccelerometerData:(id)a0;
- (void)sendMotionData:(id)a0 withHeading:(id)a1;

@end
