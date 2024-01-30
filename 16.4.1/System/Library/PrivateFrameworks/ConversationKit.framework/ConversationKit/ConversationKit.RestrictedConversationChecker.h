@interface ConversationKit.RestrictedConversationChecker : NSObject <TUConversationManagerDelegate> {
    void /* unknown type, empty encoding */ callFilterController;
    void /* unknown type, empty encoding */ screenTimeObserver;
    void /* unknown type, empty encoding */ unrestrictedAddressesForConversation;
}

- (void)conversationManager:(id)a0 migratingFromConversation:(id)a1 toConversation:(id)a2;
- (void)conversationManager:(id)a0 removedActiveConversation:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
