@class NSXPCListenerEndpoint, NSUUID, HDXPCListener, HKHealthStoreConfiguration, HDProfile, NSString, HKTaskConfiguration;
@protocol HDTaskServerDelegate, HDTaskServerEndpointDelegate, HDTaskServer;

@interface HDTaskServerEndpoint : NSObject <HDXPCListenerDelegate>

@property (retain, nonatomic) HDXPCListener *listener;
@property (readonly, nonatomic) Class taskServerClass;
@property (readonly, copy, nonatomic) NSUUID *taskUUID;
@property (readonly, copy, nonatomic) HKTaskConfiguration *taskConfiguration;
@property (readonly, copy, nonatomic) HKHealthStoreConfiguration *healthStoreConfiguration;
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, weak, nonatomic) id<HDTaskServer> taskServer;
@property (weak, nonatomic) id<HDTaskServerEndpointDelegate> delegate;
@property (weak, nonatomic) id<HDTaskServerDelegate> taskServerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)connectionConfiguredForListener:(id)a0 client:(id)a1 exportedObject:(id)a2;
- (void)resume;
- (id)initWithTaskServerClass:(Class)a0 taskConfiguration:(id)a1 healthStoreConfiguration:(id)a2 taskUUID:(id)a3 profile:(id)a4 connectionQueue:(id)a5;
- (id)exportObjectForListener:(id)a0 client:(id)a1 error:(id *)a2;
- (void)connectionInvalidatedForListener:(id)a0 client:(id)a1 exportedObject:(id)a2;
- (void)invalidate;

@end
