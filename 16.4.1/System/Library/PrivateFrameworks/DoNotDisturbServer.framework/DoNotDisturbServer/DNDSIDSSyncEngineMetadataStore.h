@class NSString, NSMutableDictionary, NSMutableSet, NSURL;

@interface DNDSIDSSyncEngineMetadataStore : NSObject <DNDSIDSSyncEngineMetadataStoring> {
    NSMutableDictionary *_recordMetadataByRecordID;
    NSMutableDictionary *_recordIDSyncDatesByPairedDeviceIdentifier;
    NSMutableSet *_initialSyncPairedDeviceIdentifiers;
    NSURL *_url;
    double _deviceObsoletionDuration;
    double _tombstoneObsoletionDuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_read;
- (id)initWithURL:(id)a0;
- (void)purge;
- (void)_write;
- (void)updateMetadata:(id)a0;
- (id)modifiedRecordIDsForPairedDeviceIdentifier:(id)a0;
- (void)setDeletedAtDate:(id)a0 forRecordIDs:(id)a1;
- (void)garbageCollect;
- (void)setSyncDate:(id)a0 forRecordIDs:(id)a1 forPairedDeviceIdentifier:(id)a2;
- (BOOL)_areSyncDatesValidAtDate:(id)a0;
- (void)setLastModifiedDate:(id)a0 forRecordIDs:(id)a1;
- (BOOL)_isPairedDeviceOutdated:(id)a0;
- (BOOL)_canTombstoneBeRemovedWithRecordID:(id)a0;
- (void)_forgetSyncDatesForRecordID:(id)a0;
- (void)_forgetSyncDatesForDevicesWithoutInitialSync;
- (id)initWithDeviceObsoletionDuration:(double)a0 tombstoneObsoletionDuration:(double)a1;
- (id)deletedRecordIDsForPairedDeviceIdentifier:(id)a0;
- (void)setPerformedInitialSyncForPairedDeviceIdentifier:(id)a0;
- (void)_parseDictionary:(id)a0;
- (void)setSyncDate:(id)a0 forRecordsMatchingMetadata:(id)a1 forPairedDeviceIdentifier:(id)a2;
- (void)_forgetObsoleteTombstones;
- (BOOL)hasPerformedInitialSyncForPairedDeviceIdentifier:(id)a0;
- (void)_forgetSyncDatesForOutdatedDevices;
- (id)init;
- (BOOL)isValidAtDate:(id)a0;
- (id)recordMetadataForRecordID:(id)a0;
- (id)unknownRecordIDsInRecordIDs:(id)a0;
- (BOOL)_isMetadataValidAtDate:(id)a0;
- (void)_forgetMetadataForRecordID:(id)a0;
- (void)removePairedDeviceIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_forgetRecordID:(id)a0;
- (BOOL)hasMetadataForPairedDeviceIdentifier:(id)a0;

@end
