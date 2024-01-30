@class NSString, NSOperationQueue, NSURLSessionConfiguration, NSObject;
@protocol OS_dispatch_queue, NSURLSessionTaskDelegate;

@interface WebCoreNSURLSession : NSObject {
    struct RefPtr<WebCore::PlatformMediaResourceLoader, WTF::DumbPtrTraits<WebCore::PlatformMediaResourceLoader> > { struct PlatformMediaResourceLoader *m_ptr; } _loader;
    struct WeakObjCPtr<id<NSURLSessionDelegate> > { id m_weakReference; } _delegate;
    struct RetainPtr<NSOperationQueue> { void *m_ptr; } _queue;
    struct RetainPtr<NSString> { void *m_ptr; } _sessionDescription;
    struct HashSet<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask> >, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask> > > { struct HashTable<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::IdentityExtractor, WTF::DefaultHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask> >, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask> >, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask> > > { struct RetainPtr<WebCoreNSURLSessionDataTask> *m_table; } m_impl; } _dataTasks;
    struct HashSet<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >, WTF::DefaultHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > > > { struct HashTable<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >, WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >, WTF::IdentityExtractor, WTF::DefaultHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > > > { struct RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > *m_table; } m_impl; } _origins;
    struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__1::__cxx_atomic_base_impl<unsigned char> > { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } _dataTasksLock;
    BOOL _invalidated;
    unsigned long long _nextTaskIdentifier;
    struct OSObjectPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *m_ptr; } _internalQueue;
    int _corsResults;
}

@property (readonly) struct PlatformMediaResourceLoader { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; } *loader;
@property (retain) id<NSURLSessionTaskDelegate> delegate;
@property (readonly, retain) NSOperationQueue *delegateQueue;
@property (readonly, copy) NSURLSessionConfiguration *configuration;
@property (copy) NSString *sessionDescription;
@property (readonly) BOOL didPassCORSAccessChecks;

- (void)flushWithCompletionHandler:(id /* block */)a0;
- (void)addDelegateOperation:(struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > > { struct CallableWrapperBase<void> *x0; } x0; } x0; } *)a0;
- (void)taskCompleted:(id)a0;
- (void)task:(id)a0 didReceiveCORSAccessCheckResult:(BOOL)a1;
- (void)task:(id)a0 didReceiveResponseFromOrigin:(struct Ref<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > { struct SecurityOrigin *x0; } *)a1;
- (struct PlatformMediaResourceLoader { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; } *)loader;
- (void)getAllTasksWithCompletionHandler:(id /* block */)a0;
- (id)delegateQueue;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)uploadTaskWithStreamedRequest:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)streamTaskWithHostName:(id)a0 port:(long long)a1;
- (void)getTasksWithCompletionHandler:(id /* block */)a0;
- (id)downloadTaskWithRequest:(id)a0;
- (void)resetWithCompletionHandler:(id /* block */)a0;
- (id)downloadTaskWithResumeData:(id)a0;
- (id)streamTaskWithNetService:(id)a0;
- (id)uploadTaskWithRequest:(id)a0 fromFile:(id)a1;
- (id)uploadTaskWithRequest:(id)a0 fromData:(id)a1;
- (void)dealloc;
- (id)downloadTaskWithURL:(id)a0;
- (id)dataTaskWithRequest:(id)a0;
- (id)configuration;
- (id)dataTaskWithURL:(id)a0;
- (BOOL)didPassCORSAccessChecks;
- (id)initWithResourceLoader:(struct PlatformMediaResourceLoader { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; } *)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (BOOL)wouldTaintOrigin:(const struct SecurityOrigin { struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x0; struct SecurityOriginData { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x0; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x1; struct Optional<unsigned short> { BOOL x0; union constexpr_storage_t<unsigned short> { unsigned char x0; unsigned short x1; } x1; } x2; } x1; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x2; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; int x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; } *)a0;
- (void)sendH2Ping:(id)a0 pongHandler:(id /* block */)a1;
- (id).cxx_construct;
- (void)finishTasksAndInvalidate;
- (void)setDelegate:(id)a0;
- (void)invalidateAndCancel;
- (id)delegate;

@end
