@class NSObject, NSString, BSServiceQuality, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface DNDRemoteAvailabilityServiceConnection : NSObject <DNDRemoteAvailabilityServiceServerProtocol> {
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

- (void)_queue_createConnection;
- (void)getIsLocalUserAvailableWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void)_queue_invalidateConnection;
- (id)init;
- (void).cxx_destruct;
- (id)_queue_remoteTarget;

@end
