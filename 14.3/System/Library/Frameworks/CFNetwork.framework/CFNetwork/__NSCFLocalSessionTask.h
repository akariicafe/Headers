@class NSOutputStream, NSString, __NSCFURLSessionConnection, NSURL, NSOperationQueue, NSObject, NSInputStream;
@protocol OS_dispatch_source, OS_dispatch_data;

@interface __NSCFLocalSessionTask : NSURLSessionTask <NSURLSessionTaskSubclass, NSURLSessionDataTaskSubclass, NSURLSessionUploadTaskSubclass, __NSCFURLSessionConnectionDelegate> {
    NSURL *_uploadFile;
    NSObject<OS_dispatch_data> *_dataTaskData;
    id /* block */ _dataTaskCompletion;
    NSObject<OS_dispatch_data> *_pendingResponseBytes;
    unsigned long long _suspendCount;
    id /* block */ _async_initialization;
    NSObject<OS_dispatch_source> *_resourceTimeout;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connKeyLock;
    struct HTTPConnectionCacheKey { void /* function */ **x0; struct __CFAllocator *x1; int x2; unsigned long long x3; struct __CFString *x4; struct __CFString *x5; int x6; int x7; struct __CFDictionary *x8; unsigned long long x9; struct __CFDictionary *x10; struct shared_ptr<NetworkProxy> { struct NetworkProxy *x0; struct __shared_weak_count *x1; } x11; struct shared_ptr<const __CFString> { struct __CFString *x0; struct __shared_weak_count *x1; } x12; int x13; int x14; struct unique_ptr<const __CFDictionary, Deleter_CFRelease> { struct __compressed_pair<const __CFDictionary *, Deleter_CFRelease> { struct __CFDictionary *x0; } x0; } x15; struct unique_ptr<const __CFString, Deleter_CFRelease> { struct __compressed_pair<const __CFString *, Deleter_CFRelease> { struct __CFString *x0; } x0; } x16; double x17; } *_connKey;
    double _startTimeoutTime;
    NSObject<OS_dispatch_source> *_startTimeoutTimer;
    NSObject<OS_dispatch_source> *_payloadTransmissionTimer;
    NSObject<OS_dispatch_source> *_willSendRequestTimer;
    NSInputStream *_socketReadStreamForUpgrade;
    NSOutputStream *_socketWriteStreamForUpgrade;
    struct shared_ptr<TransportConnection> { struct TransportConnection *__ptr_; struct __shared_weak_count *__cntrl_; } _connectionForUpgrade;
    NSObject<OS_dispatch_data> *_extraBytes;
    NSOperationQueue *_connectionWorkQueue;
    int _connectionWorkQueueSuspensionCount;
    BOOL _pendingResponseDisposition;
    BOOL _pendingResponseDisposition_didFinish;
    BOOL _didIssueWaitingForConnectivity;
    BOOL _didIssueDidFinish;
    BOOL _suspendedForDisposition;
    BOOL _didCheckMixedReplace;
    BOOL _isMixedReplace;
    BOOL _sentDidFinishCollectingMetrics;
}

@property (retain) __NSCFURLSessionConnection *cfConn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connection:(id)a0 needConnectedSocketToHost:(id)a1 port:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)connection:(id)a0 waitingWithReason:(long long)a1;
- (void)connection:(id)a0 didReceiveTCPConnection:(struct shared_ptr<TransportConnection> { struct TransportConnection *x0; struct __shared_weak_count *x1; })a1 extraBytes:(id)a2;
- (void)startResourceTimer;
- (void)_onqueue_expectedProgressTargetChanged;
- (void)_setConnectionCacheKey:(struct HTTPConnectionCacheKey { void /* function */ **x0; struct __CFAllocator *x1; int x2; unsigned long long x3; struct __CFString *x4; struct __CFString *x5; int x6; int x7; struct __CFDictionary *x8; unsigned long long x9; struct __CFDictionary *x10; struct shared_ptr<NetworkProxy> { struct NetworkProxy *x0; struct __shared_weak_count *x1; } x11; struct shared_ptr<const __CFString> { struct __CFString *x0; struct __shared_weak_count *x1; } x12; int x13; int x14; struct unique_ptr<const __CFDictionary, Deleter_CFRelease> { struct __compressed_pair<const __CFDictionary *, Deleter_CFRelease> { struct __CFDictionary *x0; } x0; } x15; struct unique_ptr<const __CFString, Deleter_CFRelease> { struct __compressed_pair<const __CFString *, Deleter_CFRelease> { struct __CFString *x0; } x0; } x16; double x17; } *)a0;
- (void)_onqueue_didFinishCollectingMetrics:(id)a0 completion:(id /* block */)a1;
- (void)connection:(id)a0 _willSendRequestForEstablishedConnection:(id)a1 completion:(id /* block */)a2;
- (void)_task_onqueue_didReceiveDispatchData:(id)a0 completionHandler:(id /* block */)a1;
- (void)connection:(id)a0 request:(id)a1 needsNewBodyStreamCallback:(id /* block */)a2;
- (void)_onqueue_needConnectedSocketToHost:(id)a0 port:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)_onqueue_didReceiveDispatchData:(id)a0 completion:(id /* block */)a1;
- (void)_onqueue_didReceiveResponse:(id)a0 redirectRequest:(id)a1 withCompletion:(id /* block */)a2;
- (void)connection:(id)a0 challenged:(id)a1 authCallback:(id /* block */)a2;
- (void)_onqueue_cancel_with_error:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1 completion:(id /* block */)a2;
- (void)_onqueue_adjustPoolPriority;
- (void)connection:(id)a0 _conditionalRequirementsChanged:(BOOL)a1;
- (id)error:(id)a0 code:(long long)a1;
- (id)_onqueue_strippedMutableRequest;
- (void)_private_onqueue_didReceiveResponseDisposition:(long long)a0 completion:(id /* block */)a1;
- (void)_onqueue_conditionalRequirementsChanged:(BOOL)a0;
- (void)connection:(id)a0 didReceiveSocketInputStream:(id)a1 outputStream:(id)a2;
- (void)connection:(id)a0 wasRedirected:(id)a1 newRequest:(id)a2 responseCallback:(id /* block */)a3;
- (void)_onqueue_setupNextEffectiveConfigurationWithCompletionHandler:(id /* block */)a0;
- (void)_onqueue_didReceiveChallenge:(id)a0 request:(id)a1 withCompletion:(id /* block */)a2;
- (void)connectionWillFinishLoading:(id)a0;
- (void)_onqueue_willCacheResponse:(id)a0 withCompletion:(id /* block */)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1 completion:(id /* block */)a2;
- (void)_onqueue_didReceiveResponse:(id)a0 completion:(id /* block */)a1;
- (BOOL)_needSendingMetrics;
- (void)_onqueue_connectionWaitingWithReason:(long long)a0;
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)a0;
- (id)resourceTimeoutError;
- (void)connection:(id)a0 didFinishCollectingMetrics:(id)a1 completion:(id /* block */)a2;
- (void)_didSendMetrics;
- (void)set_timeoutIntervalForResource:(double)a0;
- (void)_task_onqueue_didFinish;
- (void)_onqueue_completeInitialization;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)a0 withCompletion:(id /* block */)a1;
- (void)connection:(id)a0 didFinishLoadingWithError:(id)a1;
- (void)_onqueue_needNewBodyStream:(id)a0 withCompletion:(id /* block */)a1;
- (void)connection:(id)a0 willCacheResponse:(id)a1 responseCallback:(id /* block */)a2;
- (void)_askForConnectedSocketLater;
- (id)initWithBackgroundTaskInfo:(id)a0 taskGroup:(id)a1;
- (void)cancel_with_error:(id)a0;
- (void)connection:(id)a0 sentBodyBytes:(id)a1 totalBytes:(id)a2 expectedBytes:(id)a3;
- (void)_onqueue_didSendBodyBytes:(long long)a0 totalBytesSent:(long long)a1 totalBytesExpectedToSend:(long long)a2;
- (void)_onqueue_adjustLoadingPoolPriority;
- (void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)a0;
- (void).cxx_destruct;
- (void)_onqueue_didFinishWithError:(id)a0;
- (void)_onSessionQueue_disavow;
- (void)_onqueue_adjustPriorityHint:(float)a0 incremental:(BOOL)a1;
- (void)_onqueue_cancel;
- (void)_onqueue_resume;
- (id)initWithOriginalRequest:(id)a0 ident:(unsigned long long)a1 taskGroup:(id)a2;
- (void)dealloc;
- (void)_onqueue_suspend;
- (void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)a0;
- (id).cxx_construct;

@end
