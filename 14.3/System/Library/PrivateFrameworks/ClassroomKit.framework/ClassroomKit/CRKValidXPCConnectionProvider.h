@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface CRKValidXPCConnectionProvider : NSObject

@property (readonly, nonatomic) id /* block */ builder;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBuilder:(id /* block */)a0;
- (void)tearDownConnection;
- (id)unprotectedConnection;
- (id)makeConnection;
- (id)invokeBuilder;
- (void)connectionDied:(id)a0;
- (id)captureConnection;

@end
