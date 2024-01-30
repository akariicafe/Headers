@class NSString;
@protocol IMDMessagePTaskStore;

@interface IMDChatStore : NSObject

@property (retain) NSString *modificationStamp;
@property (retain) id<IMDMessagePTaskStore> messagePTaskStore;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_updateModificationDate;
- (void)remapMessageError:(unsigned int)a0 toError:(unsigned int)a1 forChat:(id)a2 completion:(id /* block */)a3;
- (id)_chatRegistry;
- (id)storeChat:(id)a0;
- (BOOL)updatePersonCentricIDForHandlesInChatWithMessage:(id)a0 fromIdentifier:(id)a1 personCentricID:(id)a2 chat:(id)a3;
- (void)addMessageWithGUID:(id)a0 toChat:(id)a1;
- (id)chatsGUIDsForMessageWithGUID:(id)a0;
- (id)chatsGUIDsForMessageWithIdentifier:(long long)a0;
- (unsigned long long)unreadCountForChat:(id)a0;
- (void)deleteChat:(id)a0;
- (void)removeMessageWithGUID:(id)a0 fromChat:(id)a1;
- (void)addMessageWithGUID:(id)a0 toChat:(id)a1 deferSpotlightIndexing:(BOOL)a2;
- (id)loadAllChats;
- (id)newestChatWithOriginalGroupID:(id)a0 onService:(id)a1;
- (void)_addGroupPhotoToTransferCenterForChat:(id)a0;
- (BOOL)updateHandle:(id)a0 forMessage:(id)a1 WithPC:(id)a2 onService:(id)a3;
- (void)_broadcastUpdateForMergedChatWithPersonCentricIDIfNeeded:(id)a0 updatedHandleID:(id)a1;
- (void)archiveChat:(id)a0;
- (void)unarchiveChat:(id)a0;
- (void)blackholeChat:(id)a0;
- (void)unblackholeChat:(id)a0;
- (id)chatsWithHandle:(id)a0 onService:(id)a1;
- (id)chatsWithRoomname:(id)a0 onService:(id)a1;
- (void)setChatIsFiltered:(long long)a0 withChatGuid:(id)a1;
- (id)_allHandlesOnAllChats;
- (void)_broadcastToForceReloadChats;

@end
