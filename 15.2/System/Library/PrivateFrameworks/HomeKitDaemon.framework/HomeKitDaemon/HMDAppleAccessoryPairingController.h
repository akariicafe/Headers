@class HMDHomeManager, HMBLocalZone, HMDLegacyCloudDatabase, HMDAppleAccessoryPairingControllerDataSource, NSMutableDictionary, HMDMutableHomeData, NSString;

@interface HMDAppleAccessoryPairingController : HMFObject <HMBCloudDatabaseDelegate, HMBLocalZoneDelegate, HMBLocalZoneModelObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak) HMDHomeManager *homeManager;
@property (retain) HMDAppleAccessoryPairingControllerDataSource *dataSource;
@property (retain) HMDLegacyCloudDatabase *legacyCloudDatabase;
@property (retain) HMBLocalZone *homeManagerZone;
@property (retain) HMBLocalZone *blobZone;
@property (retain) NSMutableDictionary *pairingHomes;
@property (retain) HMDMutableHomeData *homeData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void).cxx_destruct;
- (id)localZone:(id)a0 didProcessModelDeletion:(id)a1;
- (id)localZone:(id)a0 didProcessModelCreation:(id)a1;
- (id)localZone:(id)a0 didProcessModelUpdate:(id)a1;
- (void)cloudDatabase:(id)a0 encounteredError:(id)a1 withOperation:(id)a2 onZone:(id)a3;
- (void)cloudDatabase:(id)a0 encounteredError:(id)a1 withOperation:(id)a2 onContainer:(id)a3;
- (void)cloudDatabase:(id)a0 didRemoveZoneWithID:(id)a1;
- (void)cloudDatabase:(id)a0 didCreateZoneWithID:(id)a1;
- (id)legacyAccessoriesForEncodingHome:(id)a0;
- (BOOL)handleMessage:(id)a0 from:(id)a1;
- (void)pairAccessory:(id)a0 configurationAppIdentifier:(id)a1;
- (id)initWithHomeManager:(id)a0 dataSource:(id)a1;
- (void)removeControllerForZone:(id)a0;

@end
