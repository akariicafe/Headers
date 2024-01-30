@class NSMutableDictionary, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface IOSurfaceRemoteRemoteClient : NSObject

@property (nonatomic) int pid;
@property (retain, nonatomic) NSMutableDictionary *surfaceStates;
@property (retain, nonatomic) NSObject<OS_xpc_object> *remoteConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *disconnectedQueue;
@property (copy, nonatomic) id /* block */ disconnectedHandler;

- (void)_handleError:(id)a0;
- (void)dealloc;
- (void)_handleMessage:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_removeSurface:(unsigned int)a0;
- (id)initWithRemoteConnection:(id)a0 disconnectedQueue:(id)a1 disconnectedHandler:(id /* block */)a2;
- (void)_addSurface:(struct __IOSurfaceClient { } *)a0 mappedAddress:(void *)a1 mappedSize:(unsigned long long)a2 extraData:(id)a3;
- (struct __IOSurfaceClient { } *)_getClient:(unsigned int)a0 inboundExtradata:(id)a1 outboundExtraData:(id *)a2;

@end
