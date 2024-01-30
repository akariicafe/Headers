@class RTInvocationDispatcher, NSString, RTVehicleLocationProvider, NSObject;
@protocol OS_dispatch_queue, RTDaemonClientRegistrarVehicleEventProtocol;

@interface RTDaemonClientRegistrarVehicleEvent : RTDaemonClientRegistrar <NSSecureCoding, RTDaemonClientRegistrarProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL registered;
@property (retain, nonatomic) RTInvocationDispatcher *dispatcher;
@property (retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<RTDaemonClientRegistrarVehicleEventProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)stopMonitoringVehicleEvents;
- (BOOL)invocationsPending;
- (long long)countOfPendingInvocations;
- (void)startMonitoringVehicleEvents;
- (void)addPendingVehicleEventBlock:(id /* block */)a0 failBlock:(id /* block */)a1 description:(id)a2;
- (void).cxx_destruct;
- (void)onVehicleEventNotification:(id)a0;
- (id)initWithVehicleLocationProvider:(id)a0 queue:(id)a1;

@end
