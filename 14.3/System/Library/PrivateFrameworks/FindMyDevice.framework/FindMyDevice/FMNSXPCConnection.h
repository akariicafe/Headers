@class FMFuture, NSString, NSXPCConnection;

@interface FMNSXPCConnection : NSObject <FMNSXPCConnecting>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) FMFuture *future;
@property (nonatomic) BOOL _testMockConnection;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addFailureBlock:(id /* block */)a0;
- (void)dealloc;
- (id)remoteObjectProxy;
- (id)initWithConfiguration:(id)a0;
- (id)initWithConfiguration:(id)a0 exportedObject:(id)a1;
- (void)destroyXPCConnection;
- (void)invalidate;

@end
