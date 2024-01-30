@class NSString;

@interface WKProcessAssertionBackgroundTaskManager : NSObject <RBSAssertionObserving> {
    struct RetainPtr<RBSAssertion> { void *m_ptr; } _backgroundTask;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _backgroundTaskWasInvalidated;
    struct WeakHashSet<WebKit::ProcessAndUIAssertion, WTF::EmptyCounter> { struct HashSet<WTF::Ref<WTF::WeakPtrImpl<>>, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTableTraits> { struct HashTable<WTF::Ref<WTF::WeakPtrImpl<>>, WTF::Ref<WTF::WeakPtrImpl<>>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>, WTF::HashTraits<WTF::Ref<WTF::WeakPtrImpl<>>>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } m_set; } _assertionsNeedingBackgroundTask;
    id /* block */ _pendingTaskReleaseTask;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)assertion:(id)a0 didInvalidateWithError:(id)a1;
- (void)assertionWillInvalidate:(id)a0;
- (void)_cancelPendingReleaseTask;
- (void)_scheduleReleaseTask;
- (void)_handleBackgroundTaskExpiration;
- (void)addAssertionNeedingBackgroundTask:(void *)a0;
- (void)_notifyAssertionsOfImminentSuspension;
- (void)removeAssertionNeedingBackgroundTask:(void *)a0;
- (BOOL)_hasBackgroundTask;
- (void).cxx_destruct;
- (id)init;
- (void)_updateBackgroundTask;
- (void)_releaseBackgroundTask;
- (void)dealloc;
- (id).cxx_construct;
- (void)_handleBackgroundTaskExpirationOnMainThread;

@end
