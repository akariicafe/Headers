@protocol IMDRemoteDatabaseProtocol;

@interface IMDDatabaseServer : IMDDatabaseLegacyXPCBridge

@property (readonly, nonatomic) id<IMDRemoteDatabaseProtocol> database;

+ (id)sharedServer;

- (void)handleIMDChatRecordCopyChatsWithPinningIdentifier_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDMessageRecordClearUnsyncedRemovedRecoverableMessages_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDMessageRecordUpdateMessagesSyndicationRanges_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)_respondWithMessageRecords:(id)a0 responseMessage:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleIMDMessageRecordLoadRecoverableMessagesPendingCloudKitUpdate_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDChatRecordResolveInconsistentGUID_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDChatRecordCopySortedChatsFilteredUsingPredicateWithLimit_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDChatRecordLoadRecoverableMessages_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDMessageRecordCopyLastMessageForChatWithRowID_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDChatRecordRecoverMessages_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)_respondWithChatRecords:(id)a0 responseMessage:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleIMDChatRecordCopyChatsWithIdentifier_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDChatRecordCopyChatsWithAtLeastHandlesOnServiceWithStyle_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDMessageRecordCopyMessageWithGUIDExcludingRecoverableMessages_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)_asyncPersistenceBlock:(id /* block */)a0;
- (void)handleIMDChatRecordPermanentlyDeleteRecoverableMessagesInChatsWithGUIDs_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDMessageRecordCopySortedMessagesForChatGUIDFilteredUsingPredicateWithLimit_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)_respondWithAttachmentRecords:(id)a0 responseMessage:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleIMDMessageRecordLoadRecoverableMessagesPendingCloudKitDelete_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDMessageRecordDeleteRecoverableMessagesOlderThanDays_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDMessageRecordDeleteJunkMessagesOlderThanDays_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDAttachmentRecordCopyFilteredUsingPredicateWithLimit_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)_syncPersistenceBlock:(id /* block */)a0;
- (void)handleIMDChatRecordCopyChatsFilteredUsingPredicate_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)_authorizeOutgoingSandboxedResource:(id)a0 connection:(id)a1;
- (void)handleIMDMessageRecordStoreRecoverableMessagePartBody_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleDeleteAttachmentsDirectWithPredicate_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDKVIntegerForKey_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDMessageRecordUpdateRecoverableMessageSyncState_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDChatRecordCopyChatsSortedByLastMessageDateAndFilteredUsingPredicateWithLimit_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDCoreSpotlightDeleteAttachment_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDChatRecordMoveMessagesToRecoverableMessage_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDMessageRecordUpdateAttachmentSyndicationRanges_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDChatRecordCopyGroupPhotoPaths_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDNotificationsPostSharePlayNotification_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDMessageRecordMoveToRecoverableMessage_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleIMDChatRecordCopyChatsWithHandlesOnServiceWithDisplayNameGroupIDStyle_IPCActionWithXPCConnection:(id)a0 requestMessage:(id)a1 responseMessage:(id)a2 completionHandler:(id /* block */)a3;

@end
