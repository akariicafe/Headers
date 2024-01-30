@interface IMDCKChatSyncCKOperationFactory : NSObject

- (id)_chatFetchRecordZoneChangesCKConfiguration:(id)a0;
- (id)_chatFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)a0 zoneID:(id)a1 resultsLimit:(unsigned long long)a2;
- (id)_chatSyncOperationGroup;
- (id)_chatSyncOperationGroupWithName:(id)a0;
- (id)_chatWriteRecordsCKConfiguration:(id)a0;
- (id)deleteChatCKOperationUsingRecordIDstoDelete:(id)a0;
- (id)fetchChatCKOperationUsingRecordIDs:(id)a0;
- (id)fetchChatZoneChangesCKOperationUsingToken:(id)a0 zone:(id)a1 resultsLimit:(unsigned long long)a2 activity:(id)a3;
- (id)fetchChatZoneChangesCKOperationUsingToken:(id)a0 zone:(id)a1 resultsLimit:(unsigned long long)a2 groupName:(id)a3 activity:(id)a4;
- (id)saveChatsCKOperationUsingRecordsToSave:(id)a0 activity:(id)a1;

@end
