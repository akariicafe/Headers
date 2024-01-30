@interface _TVRCRMSDeviceManager : NSObject

+ (id)sharedInstance;

- (id)_allRecords;
- (id)pairingGUIDForNetworkName:(id)a0;
- (void)removeStoredInfoForNetworkName:(id)a0;
- (void)addStoredInfoForNetworkName:(id)a0 displayName:(id)a1 pairingGUID:(id)a2;
- (void)_addOrUpdateRecordInUserDefaults:(id)a0;
- (void)_removeRecordWithNetworkNameFromUserDefaults:(id)a0;
- (void)_performWithMutableRecords:(id /* block */)a0;

@end
