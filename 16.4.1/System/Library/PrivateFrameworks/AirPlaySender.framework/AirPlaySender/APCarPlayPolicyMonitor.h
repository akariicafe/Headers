@class NSString, CRVehiclePolicyMonitor, NSObject;
@protocol OS_dispatch_queue, APCarPlayPolicyMonitorDelegate;

@interface APCarPlayPolicyMonitor : NSObject <CRVehiclePolicyMonitoring> {
    NSObject<OS_dispatch_queue> *_queue;
    struct OpaqueFigCFWeakReferenceHolder { } *_weakEndpoint;
    struct OpaqueFigEndpoint { } *_observedEndpoint;
    CRVehiclePolicyMonitor *_monitor;
}

@property (nonatomic) id<APCarPlayPolicyMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEndpoint:(struct OpaqueFigEndpoint { } *)a0;
- (void)dealloc;
- (void)willDisableVehicleTrackedByMonitor:(id)a0;
- (void)willEnableVehicleTrackedByMonitor:(id)a0;
- (void)endpointAuthenticationSucceeded;

@end
