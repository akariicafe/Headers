@interface DropInCore.CallCenterManager : NSObject <TUConversationManagerDelegate> {
    void /* unknown type, empty encoding */ callParticpants;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ callCenter;
    void /* unknown type, empty encoding */ conversationProviderManager;
    void /* unknown type, empty encoding */ participantValidator;
    void /* unknown type, empty encoding */ conversationProviderLoader;
    void /* unknown type, empty encoding */ serialQueue;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ signposter;
    void /* unknown type, empty encoding */ activeConversation;
    void /* unknown type, empty encoding */ conversationTimer;
    void /* unknown type, empty encoding */ someoneJoined;
    void /* unknown type, empty encoding */ activeCall;
}

- (void)conversationManager:(id)a0 stateChangedForConversation:(id)a1;
- (void)serverDisconnectedForConversationManager:(id)a0;
- (void)conversationManager:(id)a0 activeRemoteParticipantsChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 removedActiveConversation:(id)a1;
- (void)conversationManager:(id)a0 updatedIncomingPendingConversations:(id)a1;
- (void)callStatusChangedWithNotification:(id)a0;
- (void)uplinkMutedChangedWithNotification:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
