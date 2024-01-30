@class NSString, DNDSPairedDevice, NSObject, IDSService;
@protocol DNDSPairedDeviceStateMonitorDelegate, OS_dispatch_queue;

@interface DNDSPairedDeviceStateMonitor : NSObject <IDSServiceDelegate, DNDSSysdiagnoseDataProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_idsService;
    int _pairedDeviceDidChangeNotificationToken;
}

@property (copy) DNDSPairedDevice *pairedDevice;
@property (weak, nonatomic) id<DNDSPairedDeviceStateMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;

- (id)initWithIDSService:(id)a0;
- (void).cxx_destruct;
- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (void)dealloc;
- (id)sysdiagnoseDataIdentifier;
- (void)resume;
- (id)sysdiagnoseDataForDate:(id)a0;
- (void)_endMonitoringForChanges;
- (void)_beginMonitoringForChanges;
- (void)_queue_updatePairedState;
- (id)_getCurrentPairedDevice;
- (void)_pairedDeviceStateChanged:(id)a0;

@end
