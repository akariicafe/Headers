@class HFHomeKitDispatcher, NSMapTable, NSString, NSMutableSet;

@interface HFSoftwareUpdateManager : NSObject <HFAccessoryObserver, HFHomeObserver, HFExecutionEnvironmentObserver, HFSoftwareUpdateObserver>

@property (readonly, nonatomic) NSMapTable *accessoryUniqueIDToSoftwareUpdateMapTable;
@property (readonly, nonatomic) NSMapTable *accessoryUniqueIDToSoftwareUpdateProgressMapTable;
@property (readonly, nonatomic) NSMapTable *accessoryUniqueIDToFetchPromisesMapTable;
@property (readonly, nonatomic) NSMapTable *observedAccessoryUniqueIDToAccessoryMapTable;
@property (readonly, nonatomic) NSMapTable *documentationMetadataToDocumentationMapTable;
@property (readonly, nonatomic) NSMapTable *documentationMetadataToDocumentationFutureMapTable;
@property (readonly, nonatomic) NSMutableSet *requestedSoftwareUpdateInstalls;
@property (weak, nonatomic) HFHomeKitDispatcher *dispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)dealloc;
- (id)initWithDispatcher:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)resetCaches;
- (void)accessoryDidUpdateReachability:(id)a0;
- (void)softwareUpdate:(id)a0 didUpdateState:(long long)a1;
- (void)softwareUpdateController:(id)a0 accessory:(id)a1 didReceiveUpdate:(id)a2;
- (void)softwareUpdateController:(id)a0 accessory:(id)a1 didUpdateProgress:(id)a2;
- (void)executionEnvironmentDidBecomeActive:(id)a0;
- (BOOL)isReadyToInstallSoftwareUpdate:(id)a0;
- (id)_fetchNeedsAttentionReasons:(id)a0;
- (id)_fetchSoftwareUpdateDocumentationWithAccessory:(id)a0;
- (void)_finishFetchPromisesWithAccessory:(id)a0;
- (void)_markSoftwareUpdate:(id)a0 asRequested:(BOOL)a1;
- (long long)_softwareUpdateStateForAccessory:(id)a0;
- (void)_updateRequestedSoftwareUpdateInstallsWithAccessory:(id)a0 softwareUpdateState:(long long)a1 softwareUpdateVersion:(id)a2;
- (void)_waitToFinishPromise:(id)a0 untilSoftwareUpdateDocumentationFetchCompletes:(id)a1;
- (id)fetchAvailableSoftwareUpdate:(id)a0 options:(unsigned long long)a1;
- (BOOL)hasNewValidSoftwareUpdate:(id)a0;
- (BOOL)hasRequestedSoftwareUpdate:(id)a0;
- (BOOL)hasSoftwareUpdate:(id)a0;
- (BOOL)hasValidSoftwareUpdate:(id)a0;
- (BOOL)isDownloadingSoftwareUpdate:(id)a0;
- (BOOL)isInstallingSoftwareUpdate:(id)a0;
- (BOOL)isSoftwareUpdateInProgress:(id)a0;
- (BOOL)isSoftwareUpdateInstalled:(id)a0;
- (void)softwareUpdateController:(id)a0 accessory:(id)a1 didFailUpdate:(id)a2 withError:(id)a3 timestamp:(id)a4;
- (id)softwareUpdateDocumentation:(id)a0;
- (unsigned long long)softwareUpdateDownloadSize:(id)a0;
- (id)softwareUpdateForAccessory:(id)a0;
- (id)softwareUpdatePortionComplete:(id)a0;
- (BOOL)softwareUpdatePossessesNecessaryDocumentation:(id)a0;
- (id)softwareUpdateProgressForAccessory:(id)a0;
- (id)softwareUpdateReleaseDate:(id)a0;
- (id)softwareUpdateVersion:(id)a0;
- (void)startObservingSoftwareUpdatesForAccessories:(id)a0;
- (id)startSoftwareUpdate:(id)a0;
- (void)stopObservingSoftwareUpdatesForAccessories:(id)a0;

@end
