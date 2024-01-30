@interface ConversationKit.CallCenter : NSObject <TUConversationManagerDelegate, TUConversationMediaControllerDelegate, TURouteControllerDelegate> {
    void /* unknown type, empty encoding */ tuCallCenter;
    void /* unknown type, empty encoding */ delegate;
}

- (void)routesChangedForRouteController:(id)a0;
- (void)conversationManager:(id)a0 activeRemoteParticipantsChangedForConversation:(id)a1;
- (void)mediaController:(id)a0 participantMediaPrioritiesChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 stateChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 localVideoToggledForConversation:(id)a1;
- (void)conversationManager:(id)a0 addedActiveConversation:(id)a1;
- (void)conversationManager:(id)a0 removedActiveConversation:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
