@class CHManager;

@interface RTTDatabaseManager : HCDatabaseManager {
    CHManager *_callHistoryManager;
}

+ (id)sharedManager;

- (id)containerIdentifier;
- (id)init;
- (void).cxx_destruct;
- (void)logMessage:(id)a0;
- (BOOL)deleteConversationWithCallUID:(id)a0;
- (BOOL)contactIsTTYContact:(id)a0;
- (id)cloudKitContainer;
- (id)conversationForCallUID:(id)a0;
- (BOOL)saveConversation:(id)a0;
- (BOOL)contactIDIsTTYContact:(id)a0;
- (BOOL)contactPathWasUsedForTTY:(id)a0;
- (void)callHistoryDBDidChange:(id)a0;
- (void)_callHistoryDBDidChange:(id)a0;
- (BOOL)deleteConversationsWithCallUIDs:(id)a0;
- (id)managedObjectModelName;

@end
