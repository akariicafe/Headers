@class NSXPCListener, NSMutableDictionary, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, CXCallControllerHostDelegate;

@interface CXCallControllerHost : NSObject <NSXPCListenerDelegate, CXCallControllerHostConnectionDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CXCallControllerHostDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSMutableDictionary *callUUIDToCallMap;
@property (retain, nonatomic) NSMutableDictionary *callUUIDToPublicCallUUIDMap;
@property (retain, nonatomic) NSMutableSet *connections;
@property (readonly, nonatomic) int clientsShouldConnectToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_performDelegateCallback:(id /* block */)a0;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)callControllerHostConnection:(id)a0 requestCalls:(id /* block */)a1;
- (id)_sanitizedCallFromCall:(id)a0 forCallControllerHostConnection:(id)a1;
- (void)callControllerHostConnectionInvalidated:(id)a0;
- (void)addOrUpdateCall:(id)a0;
- (void).cxx_destruct;
- (void)callControllerHostConnection:(id)a0 requestTransaction:(id)a1 completion:(id /* block */)a2;
- (void)removeCall:(id)a0;
- (id)initWithCalls:(id)a0 delegate:(id)a1 queue:(id)a2;
- (id)_callsForCallControllerHostConnection:(id)a0;

@end
