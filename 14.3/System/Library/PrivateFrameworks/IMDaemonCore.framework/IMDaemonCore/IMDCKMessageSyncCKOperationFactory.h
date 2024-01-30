@interface IMDCKMessageSyncCKOperationFactory : NSObject

- (id)_messageFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)a0 zoneID:(id)a1 resultsLimit:(unsigned long long)a2;
- (id)_operationGroupWithName:(id)a0;
- (id)_fetchOptionsDictionaryWithFetchOptions:(id)a0 andZoneID:(id)a1;
- (id)fetchMessageZoneChangesCKOperationUsingToken:(id)a0 zoneID:(id)a1 resultsLimit:(unsigned long long)a2 operationGroupName:(id)a3 activity:(id)a4;
- (id)saveMessagesCKOperationUsingRecordsToSave:(id)a0 operationGroupName:(id)a1 activity:(id)a2;
- (id)deleteMessageCKOperationUsingRecordIDstoDelete:(id)a0 activity:(id)a1;
- (id)fetchArchivedRecordsOperationWithSyncToken:(id)a0 zoneID:(id)a1 activity:(id)a2;

@end
