@class NSString;

@interface __NSCFURLLocalTCPIOStreamTaskFromDataTask : __NSCFTCPIOStreamTask <__NSCFURLSessionConnectionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connection:(id)a0 needConnectedSocketToHost:(id)a1 port:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)connection:(id)a0 waitingWithReason:(long long)a1;
- (void)connection:(id)a0 didReceiveTCPConnection:(struct shared_ptr<TransportConnection> { struct TransportConnection *x0; struct __shared_weak_count *x1; })a1 extraBytes:(id)a2;
- (void)connection:(id)a0 _willSendRequestForEstablishedConnection:(id)a1 completion:(id /* block */)a2;
- (void)connection:(id)a0 request:(id)a1 needsNewBodyStreamCallback:(id /* block */)a2;
- (void)connection:(id)a0 challenged:(id)a1 authCallback:(id /* block */)a2;
- (void)connection:(id)a0 didReceiveResponse:(id)a1 completion:(id /* block */)a2;
- (void)connection:(id)a0 _conditionalRequirementsChanged:(BOOL)a1;
- (void)connection:(id)a0 didReceiveSocketInputStream:(id)a1 outputStream:(id)a2;
- (void)connection:(id)a0 wasRedirected:(id)a1 newRequest:(id)a2 responseCallback:(id /* block */)a3;
- (void)connectionWillFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveData:(id)a1 completion:(id /* block */)a2;
- (void)connection:(id)a0 didFinishCollectingMetrics:(id)a1 completion:(id /* block */)a2;
- (void)connection:(id)a0 didFinishLoadingWithError:(id)a1;
- (void)connection:(id)a0 willCacheResponse:(id)a1 responseCallback:(id /* block */)a2;
- (void)connection:(id)a0 sentBodyBytes:(id)a1 totalBytes:(id)a2 expectedBytes:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTask:(id)a0 connection:(struct shared_ptr<TransportConnection> { struct TransportConnection *x0; struct __shared_weak_count *x1; })a1 extraBytes:(id)a2 disavow:(id /* block */)a3;

@end
