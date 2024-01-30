@class NSString;

@interface IMDDatabaseClient : IMDDatabaseLegacyXPCBridge <IMDRemoteDatabaseProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchGroupPhotoPathsForChatsWithGroupIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateAttachmentSyndicationRanges:(id)a0 shouldHideFromSyndication:(BOOL)a1;
- (void)fetchDataForKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchInteger64ForKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)storeData:(id)a0 forKey:(id)a1;
- (void)fetchMessageRecordsForChatRecordWithGUID:(id)a0 filteredUsingPredicate:(id)a1 sortedUsingDescriptors:(id)a2 limit:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (id)chatRecordsFilteredByPredicate:(id)a0;
- (void)fetchChatRecordsFilteredUsingPredicate:(id)a0 sortedUsingDescriptors:(id)a1 limit:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)fetchChatRecordsFilteredUsingPredicate:(id)a0 sortedUsingLastMessageDateAscending:(BOOL)a1 olderThan:(id)a2 limit:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (id)chatRecordsWithIdentifier:(id)a0;
- (id)chatRecordsWithHandles:(id)a0 serviceName:(id)a1 displayName:(id)a2 groupID:(id)a3 style:(long long)a4;
- (void)fetchChatRecordsWithAtLeastHandles:(id)a0 serviceName:(id)a1 style:(long long)a2 completionHandler:(id /* block */)a3;
- (void)fetchLastMessageRecordForChatRecordWithRowID:(long long)a0 completionHandler:(id /* block */)a1;
- (void)coreSpotlightDeleteAttachmentGUIDs:(id)a0;
- (void)deleteAttachmentsDirectWithPredicate:(id)a0;
- (void)_sendSyncXPCMessage:(id)a0 action:(long long)a1 responseHandler:(id /* block */)a2;
- (void)_sendAsyncXPCMessage:(id)a0 action:(long long)a1 responseHandler:(id /* block */)a2;
- (void)fetchChatRecordsFilteredUsingPredicate:(id)a0 sortedUsingLastMessageDateAscending:(BOOL)a1 limit:(unsigned long long)a2 completionHandler:(id /* block */)a3;

@end
