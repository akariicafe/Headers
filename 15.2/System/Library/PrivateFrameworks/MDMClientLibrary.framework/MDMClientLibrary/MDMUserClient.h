@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MDMUserClient : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionSyncQueue;

+ (id)sharedClient;

- (id)pushToken;
- (void)_destroyXPCConnectionAndInvalidate:(BOOL)a0;
- (void)scheduleTokenUpdate;
- (void)simulatePush;
- (void)getAssertionDescriptionsWithCompletion:(id /* block */)a0;
- (void)processUserRequest:(id)a0 encodeResponse:(BOOL)a1 completion:(id /* block */)a2;
- (void)simulatePushWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_queue_createAndStartMDMXPCConnection;

@end
