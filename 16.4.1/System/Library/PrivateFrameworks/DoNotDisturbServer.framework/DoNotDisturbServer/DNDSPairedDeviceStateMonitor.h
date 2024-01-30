@class NSSet, NSString, DNDSPairedDevice, DNDAccountFeatureSupport, NSObject, IDSService;
@protocol DNDSPairedDeviceStateMonitorDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface DNDSPairedDeviceStateMonitor : NSObject <IDSServiceDelegate, DNDSSysdiagnoseDataProvider> {
    NSObject<OS_dispatch_source> *_coalescingTimer;
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_localService;
    IDSService *_cloudService;
    int _pairedDeviceDidChangeNotificationToken;
}

@property (copy) DNDSPairedDevice *previousPairedDevice;
@property (copy) DNDSPairedDevice *pairedDevice;
@property (copy) NSSet *cloudDevices;
@property (readonly, copy, nonatomic) DNDAccountFeatureSupport *accountFeatureSupport;
@property (weak, nonatomic) id<DNDSPairedDeviceStateMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;

- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (void)_pairedDeviceStateChanged:(id)a0;
- (id)_getCurrentPairedDevice;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)_beginMonitoringForChanges;
- (id)initWithLocalIDSService:(id)a0 cloudIDSService:(id)a1;
- (void)_queue_informDelegatesOfPairedStateChange;
- (void)_queue_updateCloudDevices;
- (void)dealloc;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(BOOL)a1;
- (void)_queue_updatePairedState;
- (void)_endMonitoringForChanges;
- (id)pairedDeviceForDeviceIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)resume;
- (id)sysdiagnoseDataIdentifier;

@end
