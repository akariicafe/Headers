@class NSMutableDictionary;

@interface TVRMSPairingRecordStore : NSObject {
    NSMutableDictionary *_pairingRecords;
}

+ (id)sharedRecordStore;

- (id)init;
- (void).cxx_destruct;
- (void)_synchronizePreferences;
- (id)allPairingRecords;
- (id)pairedServiceNetworkNames;
- (id)pairingRecordForServiceWithNetworkName:(id)a0;
- (void)savePairingRecord:(id)a0 forServiceWithNetworkName:(id)a1;
- (void)removePairingRecordForServiceWithNetworkName:(id)a0;

@end
