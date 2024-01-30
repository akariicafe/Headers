@interface IMDCKAttachmentSyncCKOperationFactory : NSObject

+ (id)_desiredKeysArrayForType:(long long)a0;

- (id)_attachmentFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)a0 zoneID:(id)a1 resultsLimit:(unsigned long long)a2 desiredKeys:(long long)a3;
- (BOOL)_defaultsSayWeHaveSyncedOnce;
- (id)_operationGroupWithName:(id)a0;
- (id)deleteAttachmentCKOperationUsingRecordIDstoDelete:(id)a0;
- (id)fetchAttachmentZoneChangesCKOperationUsingToken:(id)a0 zoneID:(id)a1 resultsLimit:(unsigned long long)a2 desiredKeys:(long long)a3 operationGroupName:(id)a4 activity:(id)a5;
- (id)fetchAttachmentZoneRecords:(id)a0 desiredKeys:(long long)a1 operationGroupName:(id)a2 activity:(id)a3;
- (id)saveAttachmentsCKOperationUsingRecordsToSave:(id)a0 operationGroupName:(id)a1 activity:(id)a2;

@end
