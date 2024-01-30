@class NSObject;
@protocol OS_dispatch_queue, GEODataSession;

@interface GEOProtobufSession : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedDelegateQueue;

@property (readonly, nonatomic) id<GEODataSession> dataSession;

+ (id)sharedProtobufSession;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDataSession:(id)a0;
- (id)taskWithRequest:(id)a0 requestTypeCode:(unsigned int)a1 responseClass:(Class)a2 delegate:(id)a3 delegateQueue:(id)a4;
- (id)taskWithRequestKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 protobufRequest:(id)a1 URL:(id)a2 additionalHTTPHeaders:(id)a3 needsProxy:(BOOL)a4 auditToken:(id)a5 traits:(id)a6 delegate:(id)a7 delegateQueue:(id)a8 requestCounterTicket:(id)a9 multipathServiceType:(unsigned long long)a10 multipathAlternatePort:(unsigned long long)a11 throttleToken:(id)a12;

@end
