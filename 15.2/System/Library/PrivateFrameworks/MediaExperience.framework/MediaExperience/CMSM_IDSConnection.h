@class IDSDevice, NSString, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface CMSM_IDSConnection : NSObject <IDSServiceDelegate> {
    IDSService *pIdsService;
    NSObject<OS_dispatch_queue> *idsDispatchQueue;
    IDSDevice *pNearbyPairedDevice;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (id)copyNearbyPairedDeviceName;
- (id)copyNearbyPairedDeviceUniqueID;
- (void)updateNearbyPairedDevice;
- (id)copyNearbyPairedDeviceModelIdentifier;
- (id)init;
- (id)getNearbyPairedDevice;
- (id)copyNearbyPairedDeviceProductName;

@end
