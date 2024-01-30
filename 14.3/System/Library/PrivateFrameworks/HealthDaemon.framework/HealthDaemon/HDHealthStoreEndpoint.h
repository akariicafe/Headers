@class HKProfileIdentifier, NSString, NSObject, HDHealthStoreServer, HDXPCClient, HDDaemon;
@protocol OS_dispatch_queue;

@interface HDHealthStoreEndpoint : NSObject <HDHealthStoreEndpointInterface, _HKXPCExportable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}

@property (readonly, weak, nonatomic) HDDaemon *daemon;
@property (readonly, nonatomic) HDXPCClient *client;
@property (readonly, nonatomic) HDHealthStoreServer *server;
@property (readonly, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isClientEntitled:(id)a0 error:(id *)a1;
+ (id)endpointWithClient:(id)a0 healthDaemon:(id)a1;
+ (BOOL)_isDeviceSupportedWithBehavior:(id)a0 error:(id *)a1;

- (void)connectionInvalidated;
- (void)connectionConfigured;
- (void).cxx_destruct;
- (id)remoteInterface;
- (id)initWithClient:(id)a0 daemon:(id)a1;
- (id)exportedInterface;
- (BOOL)_validateSourceBundleIdentifier:(id)a0 client:(id)a1 error:(id *)a2;
- (void)remote_serverForConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)invalidate;
- (BOOL)_validateAccessToProfile:(id)a0 byClient:(id)a1;

@end
