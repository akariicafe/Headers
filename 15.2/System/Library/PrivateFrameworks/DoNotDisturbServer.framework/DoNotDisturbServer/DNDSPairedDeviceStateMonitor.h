@class NSSet, NSString, DNDSPairedDevice, NSObject, IDSService;
@protocol DNDSPairedDeviceStateMonitorDelegate, OS_dispatch_queue;

@interface DNDSPairedDeviceStateMonitor : NSObject <IDSServiceDelegate, DNDSSysdiagnoseDataProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_localService;
    IDSService *_cloudService;
    int _pairedDeviceDidChangeNotificationToken;
}

@property (copy) DNDSPairedDevice *pairedDevice;
@property (copy) NSSet *cloudDevices;
@property (weak, nonatomic) id<DNDSPairedDeviceStateMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;

- (void)_beginMonitoringForChanges;
- (id)sysdiagnoseDataIdentifier;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (id)_getCurrentPairedDevice;
- (id)pairedDeviceForDeviceIdentifier:(id)a0;
- (void)_endMonitoringForChanges;
- (void)_queue_updatePairedState;
- (void)_queue_updateCloudDevices;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(BOOL)a1;
- (void).cxx_destruct;
- (void)_pairedDeviceStateChanged:(id)a0;
- (void)resume;
- (void)dealloc;
- (id)initWithLocalIDSService:(id)a0 cloudIDSService:(id)a1;

@end
