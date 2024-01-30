@class NPSManager;

@interface IMDNDList : NSObject

@property (retain, nonatomic) NPSManager *syncManager;

+ (id)sharedList;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)unmuteDateForIdentifier:(id)a0;
- (void)muteChat:(id)a0 usingIdentifier:(id)a1 untilDate:(id)a2 syncToPairedDevice:(BOOL)a3;
- (void)muteChat:(id)a0 untilDate:(id)a1 syncToPairedDevice:(BOOL)a2;
- (void)syncToPairedDeviceIncludingVersion:(BOOL)a0;
- (id)unmuteDateForChat:(id)a0;
- (id)groupHashForHandleIDs:(id)a0;
- (id)groupHashForChat:(id)a0;
- (id)currentList;
- (BOOL)isMutedChat:(id)a0;
- (BOOL)isMutedChatIdentifier:(id)a0 handleIDs:(id)a1 style:(unsigned char)a2 isSMS:(BOOL)a3;
- (void)muteChat:(id)a0 untilDate:(id)a1;
- (void)_handleDNDListChanged;

@end
