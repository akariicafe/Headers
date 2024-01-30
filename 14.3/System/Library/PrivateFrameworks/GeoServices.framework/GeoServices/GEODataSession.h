@class NSString, NSObject;
@protocol OS_dispatch_queue, GEODataSession;

@interface GEODataSession : NSObject <GEODataSession>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionIsolation;
@property (readonly, nonatomic) id<GEODataSession> urlSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)asynchronousGetURL:(id)a0 kind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a1 auditToken:(id)a2 requestCounterTicket:(id)a3 queue:(id)a4 completionHandler:(id /* block */)a5;
+ (id)sharedDataSession;

- (id)downloadTaskWithRequest:(id)a0 priority:(float)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (id)taskWithRequest:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)taskWithRequest:(id)a0 priority:(float)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (id)initWithUrlSession:(id)a0;
- (void)asynchronousGetURL:(id)a0 kind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a1 auditToken:(id)a2 requestCounterTicket:(id)a3 queue:(id)a4 completionHandler:(id /* block */)a5;
- (id)manifestManager;

@end
