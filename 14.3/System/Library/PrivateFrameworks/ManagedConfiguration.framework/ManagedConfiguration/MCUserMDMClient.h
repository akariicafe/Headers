@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MCUserMDMClient : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionSyncQueue;

+ (id)sharedClient;

- (id)pushToken;
- (void)simulatePush;
- (void)_queue_createAndStartMDMXPCConnection;
- (id)init;
- (void).cxx_destruct;
- (BOOL)supportsPerUserMDM;
- (void)processUserRequest:(id)a0 encodeResponse:(BOOL)a1 completion:(id /* block */)a2;
- (void)getAssertionDescriptionsWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_destroyXPCConnectionAndInvalidate:(BOOL)a0;
- (void)scheduleTokenUpdate;

@end
