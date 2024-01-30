@class NPSManager;

@interface IMDNDList : NSObject

@property (retain, nonatomic) NPSManager *syncManager;

+ (id)sharedList;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)muteChat:(id)a0 untilDate:(id)a1 syncToPairedDevice:(BOOL)a2;
- (void)muteChat:(id)a0 usingIdentifier:(id)a1 untilDate:(id)a2 syncToPairedDevice:(BOOL)a3;
- (void)syncToPairedDeviceIncludingVersion:(BOOL)a0;
- (id)unmuteDateForIdentifier:(id)a0;
- (void)_handleChatGroupIDDidChangeNotification:(id)a0;
- (void)_handleDNDListChanged;
- (void)_synchronizeDNDList:(id)a0 syncToPairedDevice:(BOOL)a1;
- (void)_updateGroupID:(id)a0 toGroupID:(id)a1 forChat:(id)a2;
- (id)currentList;
- (id)dndIdentifiersForChat:(id)a0;
- (id)groupHashForChat:(id)a0;
- (id)groupHashForHandleIDs:(id)a0;
- (BOOL)isMutedChat:(id)a0;
- (BOOL)isMutedChatIdentifier:(id)a0 handleIDs:(id)a1 style:(unsigned char)a2 isSMS:(BOOL)a3;
- (void)muteChat:(id)a0 untilDate:(id)a1;
- (void)unmuteChat:(id)a0 usingIdentifier:(id)a1 syncToPairedDevice:(BOOL)a2;
- (id)unmuteDateForChat:(id)a0;

@end
