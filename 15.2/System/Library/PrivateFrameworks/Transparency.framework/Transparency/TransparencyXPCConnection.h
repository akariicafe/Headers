@class NSXPCConnection;

@interface TransparencyXPCConnection : NSObject

@property (retain) NSXPCConnection *connection;

+ (void)invokeXPCSynchronousCallWithBlock:(id /* block */)a0;
+ (id)instance;
+ (void)removeInstance;
+ (void)invokeXPCWithBlock:(id /* block */)a0 synchronous:(BOOL)a1;
+ (void)invokeXPCAsynchronousCallWithBlock:(id /* block */)a0;

- (void)createConnection;
- (void).cxx_destruct;
- (void)dealloc;

@end
