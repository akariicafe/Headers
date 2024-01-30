@class NSString, IMStateCaptureAssistant;
@protocol IMDRemoteDatabaseProtocol, IMDMessagePTaskStore;

@interface IMDChatStore : NSObject <IMStateLoggable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *modificationStamp;
@property (retain) id<IMDMessagePTaskStore> messagePTaskStore;
@property (retain, nonatomic) IMStateCaptureAssistant *stateCaptureAssistant;
@property (readonly, nonatomic) id<IMDRemoteDatabaseProtocol> database;

+ (id)sharedInstance;

- (void)addMessageWithGUID:(id)a0 toChat:(id)a1 deferSpotlightIndexing:(BOOL)a2;
- (id)loadAllChats;
- (id)chatsFilteredUsingPredicate:(id)a0 sortedUsingDescriptors:(id)a1 limit:(unsigned long long)a2;
- (id)_incomingChatsWithChatRecords:(id)a0;
- (BOOL)storeChat:(id)a0;
- (id)newestChatWithOriginalGroupID:(id)a0 onService:(id)a1;
- (void)archiveChat:(id)a0;
- (void)_broadcastToForceReloadChats;
- (id)_chatRegistry;
- (void)_processIncomingChat:(id)a0;
- (id)chatsWithHandle:(id)a0 onService:(id)a1;
- (id)_incomingChatWithChatRecord:(id)a0;
- (id)_loadChatsIncludingAllChats:(BOOL)a0;
- (void)blackholeChat:(id)a0;
- (id)newestChatWithGroupID:(id)a0 onService:(id)a1;
- (BOOL)updateHandle:(id)a0 sourceMessage:(id)a1 personCentricID:(id)a2 onService:(id)a3;
- (id)chatsFilteredUsingPredicate:(id)a0;
- (void)deleteChat:(id)a0;
- (id)chatWithGUID:(id)a0;
- (id)chatsWithHandles:(id)a0 onService:(id)a1 displayName:(id)a2 groupID:(id)a3 style:(unsigned char)a4;
- (void)enumerateBatchedChatsFilteredUsingPredicate:(id)a0 block:(id /* block */)a1;
- (void)addMessageWithGUID:(id)a0 toChat:(id)a1;
- (void)setChatIsFiltered:(long long)a0 withChatGuid:(id)a1;
- (id)chatsWithGroupID:(id)a0;
- (id)stateDictionaryForDiagnosticsRequest;
- (BOOL)updatePersonCentricIDForHandlesInChatWithMessage:(id)a0 fromIdentifier:(id)a1 personCentricID:(id)a2 chat:(id)a3;
- (id)chatsGUIDsForMessageWithIdentifier:(long long)a0;
- (void)unblackholeChat:(id)a0;
- (id)chatsWithPinningIdentifier:(id)a0;
- (void)removeMessageWithGUID:(id)a0 fromChat:(id)a1;
- (void)remapMessageError:(unsigned int)a0 toError:(unsigned int)a1 forChat:(id)a2 completion:(id /* block */)a3;
- (id)init;
- (void)unarchiveChat:(id)a0;
- (void)_updateModificationDate;
- (id)chatsFilteredUsingPredicate:(id)a0 sortedUsingLastMessageDateAscending:(BOOL)a1 olderThan:(id)a2 limit:(unsigned long long)a3;
- (unsigned long long)unreadCountForChat:(id)a0;
- (id)chatsGUIDsForMessageWithGUID:(id)a0;
- (void)enumerateBatchedChatsFilteredUsingPredicate:(id)a0 batchSize:(unsigned long long)a1 block:(id /* block */)a2;
- (void)_addGroupPhotoToTransferCenterForChat:(id)a0;
- (id)chatsWithIdentifier:(id)a0 onService:(id)a1;
- (void).cxx_destruct;
- (id)chatsWithIdentifier:(id)a0;
- (id)chatsWithRoomname:(id)a0 onService:(id)a1;
- (id)loadRecentChats;

@end
