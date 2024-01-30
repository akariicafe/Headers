@class NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface NXClient : NSObject <CUXPCCodable> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSObject<OS_xpc_object> *_xpcCnx;
}

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned char flags;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;

- (id)_ensureXPCStarted;
- (id)init;
- (void)_xpcReceivedMessage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_invalidated;
- (void)_xpcReceivedEvent:(id)a0;
- (id)description;
- (void)liveActionPerform:(id)a0 completion:(id /* block */)a1;
- (void)encodeWithXPCObject:(id)a0;
- (void)diagnosticControl:(id)a0 completion:(id /* block */)a1;
- (void)diagnosticShow:(id)a0 completion:(id /* block */)a1;
- (id)descriptionWithLevel:(int)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)_interrupted;
- (void)invalidate;

@end
