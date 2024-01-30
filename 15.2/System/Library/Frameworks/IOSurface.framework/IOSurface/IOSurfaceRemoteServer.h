@class NSMutableArray, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface IOSurfaceRemoteServer : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableArray *clients;

- (void)shutdown;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleClientConnection:(id)a0;
- (void)_handleClientDisconnected:(id)a0;
- (id)initWithListener:(id)a0 options:(id)a1;

@end
