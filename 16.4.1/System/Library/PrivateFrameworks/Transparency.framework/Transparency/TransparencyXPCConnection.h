@class NSString, NSXPCInterface, NSXPCConnection;

@interface TransparencyXPCConnection : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSString *machName;
@property (retain) NSXPCInterface *interface;

+ (void)invokeXPCWithBlock:(id /* block */)a0 synchronous:(BOOL)a1 errorHandler:(id /* block */)a2;
+ (id)transparencySupportInstance;
+ (void)setupTestConnection:(id)a0 forMachName:(id)a1;
+ (void)invokeXPCAsynchronousCallWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (id)cachedConnection:(id)a0 interface:(Class)a1;
+ (id)mainInstance;
+ (id)idsInstance;
+ (void)invokeXPCSynchronousCallWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;

- (id)createConnection;
- (id)initWithMachName:(id)a0 interface:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setTestEndpoint:(id)a0;

@end
