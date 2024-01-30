@class NSXPCListenerEndpoint, NSString, NSMutableDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CUMessageSession : NSObject <CUMessageSessionXPCClientInterface, NSSecureCoding> {
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_requestMap;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ activateHandler;
@property (copy, nonatomic) id /* block */ invalidateHandler;
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (copy, nonatomic) id /* block */ registerRequestHandler;
@property (copy, nonatomic) id /* block */ sendRequestHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;

- (void)_cleanup;
- (void)encodeWithCoder:(id)a0;
- (void)_ensureXPCStarted;
- (id)initWithCoder:(id)a0;
- (void)_interrupted;
- (void)dealloc;
- (id)init;
- (void)activate;
- (void)invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)_registerRequestID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)_sendRequestID:(id)a0 options:(id)a1 request:(id)a2 responseHandler:(id /* block */)a3;
- (id)initWithTemplate:(id)a0;
- (void)registerRequestID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)remoteRequestID:(id)a0 options:(id)a1 request:(id)a2 responseHandler:(id /* block */)a3;
- (void)sendRequestID:(id)a0 options:(id)a1 request:(id)a2 responseHandler:(id /* block */)a3;

@end
