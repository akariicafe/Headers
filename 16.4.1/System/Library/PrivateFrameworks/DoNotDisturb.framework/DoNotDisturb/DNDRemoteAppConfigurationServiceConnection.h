@class NSObject, NSString, BSServiceQuality, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface DNDRemoteAppConfigurationServiceConnection : NSObject <DNDRemoteAppConfigurationServiceServerProtocol> {
    BSServiceConnection *_queue_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSServiceQuality *_queuePriority;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;

- (void)getCurrentAppConfigurationForActionIdentifier:(id)a0 withRequestDetails:(id)a1 completionHandler:(id /* block */)a2;
- (void)invalidateAppContextForActionIdentifier:(id)a0 withRequestDetails:(id)a1 completionHandler:(id /* block */)a2;
- (void)_queue_createConnection;
- (void)_queue_invalidateConnection;
- (id)init;
- (void).cxx_destruct;
- (id)_queue_remoteTarget;

@end
