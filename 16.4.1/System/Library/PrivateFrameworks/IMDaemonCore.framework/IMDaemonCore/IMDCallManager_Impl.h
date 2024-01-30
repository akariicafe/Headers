@interface IMDCallManager_Impl : NSObject <TUConversationManagerDelegate> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ serviceSession;
    void /* unknown type, empty encoding */ conversationManager;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ newChatListenerTask;
}

- (void)conversationManager:(id)a0 addedActiveConversation:(id)a1;
- (void)conversationManager:(id)a0 conversationUpdatedMessagesGroupUUID:(id)a1;
- (id)initWithServiceSession:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
