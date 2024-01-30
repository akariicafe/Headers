@class NSString;

@interface WebCoreResourceHandleAsOperationQueueDelegate : NSObject <NSURLConnectionDelegate> {
    struct ResourceHandle { void /* function */ **x0; unsigned int x1; struct unique_ptr<WebCore::ResourceHandleInternal, std::__1::default_delete<WebCore::ResourceHandleInternal> > { struct __compressed_pair<WebCore::ResourceHandleInternal *, std::__1::default_delete<WebCore::ResourceHandleInternal> > { struct ResourceHandleInternal *x0; } x0; } x2; } *m_handle;
    struct BinarySemaphore { BOOL m_isSet; struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__1::__cxx_atomic_base_impl<unsigned char> > { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } m_lock; struct Condition { struct Atomic<bool> { struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } value; } m_hasWaiters; } m_condition; } m_semaphore;
    struct RefPtr<WebCore::SynchronousLoaderMessageQueue, WTF::DumbPtrTraits<WebCore::SynchronousLoaderMessageQueue> > { struct SynchronousLoaderMessageQueue *m_ptr; } m_messageQueue;
    struct RetainPtr<NSURLRequest> { void *m_ptr; } m_requestResult;
    struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__1::__cxx_atomic_base_impl<unsigned char> > { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } m_mutex;
    struct RetainPtr<NSCachedURLResponse> { void *m_ptr; } m_cachedResponseResult;
    struct Optional<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > > > > { BOOL init_; union storage_t<WTF::HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > > > > { unsigned char dummy_; struct HashSet<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > > > { struct HashTable<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> >, WTF::IdentityExtractor, WTF::SchedulePairHash, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > >, WTF::HashTraits<WTF::RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > > > { struct RefPtr<WTF::SchedulePair, WTF::DumbPtrTraits<WTF::SchedulePair> > *m_table; } m_impl; } value_; } storage_; } m_scheduledPairs;
    BOOL m_boolResult;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connection:(id)a0 didSendBodyData:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (BOOL)connection:(id)a0 canAuthenticateAgainstProtectionSpace:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1 lengthReceived:(long long)a2;
- (void)callFunctionOnMainThread:(struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct CallableWrapperBase<void> *x0; } x0; } x0; } *)a0;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)connection:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (void).cxx_destruct;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)dealloc;
- (id)connection:(id)a0 willCacheResponse:(id)a1;
- (id).cxx_construct;
- (id)initWithHandle:(struct ResourceHandle { void /* function */ **x0; unsigned int x1; struct unique_ptr<WebCore::ResourceHandleInternal, std::__1::default_delete<WebCore::ResourceHandleInternal> > { struct __compressed_pair<WebCore::ResourceHandleInternal *, std::__1::default_delete<WebCore::ResourceHandleInternal> > { struct ResourceHandleInternal *x0; } x0; } x2; } *)a0 messageQueue:(struct RefPtr<WebCore::SynchronousLoaderMessageQueue, WTF::DumbPtrTraits<WebCore::SynchronousLoaderMessageQueue> > { struct SynchronousLoaderMessageQueue *x0; } *)a1;
- (void)detachHandle;

@end
