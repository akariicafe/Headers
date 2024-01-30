@class NSMutableArray, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface _GEOProgressForSendingOverXPC : _GEOMirroredProgress {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_remoteConnections;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *endpoint;

- (id)initWithMirroredProgress:(id)a0 endpoint:(id)a1;
- (void)_update;
- (void)_broadcastOverXPCConnections:(id)a0;
- (void)_connectionDidInvalidate;
- (void)cancel;
- (void)dealloc;
- (id)initWithMirroredProgress:(id)a0;
- (void).cxx_destruct;

@end
