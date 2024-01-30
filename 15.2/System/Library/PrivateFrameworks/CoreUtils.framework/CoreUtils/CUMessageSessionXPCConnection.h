@class CUMessageSessionServer, NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CUMessageSessionXPCConnection : NSObject <CUMessageSessionXPCServerInterface> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidated;
    NSMutableSet *_registeredRequestIDs;
    CUMessageSessionServer *_server;
    NSXPCConnection *_xpcCnx;
}

- (void)connectionInvalidated;
- (void)remoteSendRequestID:(id)a0 options:(id)a1 request:(id)a2 responseHandler:(id /* block */)a3;
- (void)remoteRegisterRequestID:(id)a0 options:(id)a1;
- (void).cxx_destruct;

@end
