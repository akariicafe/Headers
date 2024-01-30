@class NSString;

@interface WKProcessAssertionBackgroundTaskManager : NSObject <RBSAssertionObserving> {
    struct RetainPtr<RBSAssertion> { void *m_ptr; } _backgroundTask;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _backgroundTaskWasInvalidated;
    struct ThreadSafeWeakHashSet<WebKit::ProcessAndUIAssertion> { struct HashSet<WTF::Ref<WTF::ThreadSafeWeakPtrControlBlock<WebKit::ProcessAndUIAssertion>>, WTF::DefaultHash<WTF::Ref<WTF::ThreadSafeWeakPtrControlBlock<WebKit::ProcessAndUIAssertion>>>, WTF::HashTraits<WTF::Ref<WTF::ThreadSafeWeakPtrControlBlock<WebKit::ProcessAndUIAssertion>>>, WTF::HashTableTraits> { struct HashTable<WTF::Ref<WTF::ThreadSafeWeakPtrControlBlock<WebKit::ProcessAndUIAssertion>>, WTF::Ref<WTF::ThreadSafeWeakPtrControlBlock<WebKit::ProcessAndUIAssertion>>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::ThreadSafeWeakPtrControlBlock<WebKit::ProcessAndUIAssertion>>>, WTF::HashTraits<WTF::Ref<WTF::ThreadSafeWeakPtrControlBlock<WebKit::ProcessAndUIAssertion>>>, WTF::HashTraits<WTF::Ref<WTF::ThreadSafeWeakPtrControlBlock<WebKit::ProcessAndUIAssertion>>>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } m_set; unsigned int m_operationCountSinceLastCleanup; struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } m_lock; } _assertionsNeedingBackgroundTask;
    id /* block */ _pendingTaskReleaseTask;
    struct unique_ptr<WebKit::ProcessStateMonitor, std::default_delete<WebKit::ProcessStateMonitor>> { struct __compressed_pair<WebKit::ProcessStateMonitor *, std::default_delete<WebKit::ProcessStateMonitor>> { struct ProcessStateMonitor *__value_; } __ptr_; } m_processStateMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)assertionWillInvalidate:(id)a0;
- (id).cxx_construct;
- (void)_handleBackgroundTaskExpiration;
- (BOOL)_hasBackgroundTask;
- (void)_handleBackgroundTaskExpirationOnMainThread;
- (void)removeAssertionNeedingBackgroundTask:(void *)a0;
- (void)dealloc;
- (void)_notifyAssertionsOfImminentSuspension;
- (void)addAssertionNeedingBackgroundTask:(void *)a0;
- (void)_releaseBackgroundTask;
- (id)init;
- (void)_cancelPendingReleaseTask;
- (void)_scheduleReleaseTask;
- (void)assertion:(id)a0 didInvalidateWithError:(id)a1;
- (void)_updateBackgroundTask;
- (void)setProcessStateMonitorEnabled:(BOOL)a0;
- (void).cxx_destruct;

@end
