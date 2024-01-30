@interface ConversationKit.PlaceholderCallCenter : NSObject <TUConversationManagerDelegate> {
    void /* unknown type, empty encoding */ activeCalls;
    void /* unknown type, empty encoding */ expectedAVLessConversationUUIDs;
    void /* unknown type, empty encoding */ conversationManager;
    void /* unknown type, empty encoding */ queue;
}

- (void)conversationManager:(id)a0 stateChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 avModeChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 removedActiveConversation:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
