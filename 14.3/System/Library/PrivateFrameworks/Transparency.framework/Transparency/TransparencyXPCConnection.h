@class NSXPCConnection;

@interface TransparencyXPCConnection : NSObject

@property (retain) NSXPCConnection *connection;

+ (id)instance;
+ (void)invokeXPCWithBlock:(id /* block */)a0 synchronous:(BOOL)a1;
+ (void)removeInstance;
+ (void)invokeXPCAsynchronousCallWithBlock:(id /* block */)a0;
+ (void)invokeXPCSynchronousCallWithBlock:(id /* block */)a0;

- (void)createConnection;
- (void).cxx_destruct;
- (void)dealloc;

@end
