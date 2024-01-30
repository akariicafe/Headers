@protocol IMDaemonListenerAccountsProtocol, IMDaemonListenerChatProtocol, IMDaemonListenerChatDatabaseProtocol, IMDaemonListenerFileProviderProtocol, IMDaemonListenerAVProtocol, IMDaemonListenerChatCountsProtocol, IMDaemonListenerAnyProtocol;

@interface IMDClientConnectionManager : NSObject <IMDBroadcasterProviding> {
    void /* unknown type, empty encoding */ connectionListener;
}

@property (nonatomic, readonly) id<IMDaemonListenerAnyProtocol> broadcasterForAllListeners;
@property (nonatomic, readonly) id<IMDaemonListenerAccountsProtocol> broadcasterForAccountListeners;
@property (nonatomic, readonly) id<IMDaemonListenerChatProtocol> broadcasterForChatListeners;
@property (nonatomic, readonly) id<IMDaemonListenerChatProtocol> broadcasterForBlackholeChatListeners;
@property (nonatomic, readonly) id<IMDaemonListenerChatDatabaseProtocol> broadcasterForChatDatabaseListeners;
@property (nonatomic, readonly) id<IMDaemonListenerChatCountsProtocol> broadcasterForChatCountsListeners;
@property (nonatomic, readonly) id<IMDaemonListenerFileProviderProtocol> broadcasterForFileProviderListeners;
@property (nonatomic, readonly) id<IMDaemonListenerAVProtocol> broadcasterForAVConferenceListeners;
@property (nonatomic, readonly) id<IMDaemonListenerAVProtocol> broadcasterForACConferenceListeners;

- (id)broadcasterForACConferenceListenersSupportingService:(id)a0;
- (id)broadcasterForAVConferenceListenersSupportingService:(id)a0;
- (id)broadcasterForBlackholeChatListenersSupportingService:(id)a0;
- (id)broadcasterForChatListenersSupportingService:(id)a0;
- (id)broadcasterForChatListenersUsingBlackholeRegistry:(BOOL)a0;
- (id)broadcasterForListenersSupportingService:(id)a0;
- (id)broadcasterForNotificationListenersSupportingService:(id)a0;
- (id)broadcasterForSentMessageListenersSupportingService:(id)a0;
- (id)broadcasterForVCConferenceListenersSupportingService:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
