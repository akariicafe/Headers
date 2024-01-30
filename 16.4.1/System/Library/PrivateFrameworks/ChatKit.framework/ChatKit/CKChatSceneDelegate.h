@class NSString, CKInteractionNotificationView, CKCoreChatController, CKNavigationController, CKDetailsNavigationController;

@interface CKChatSceneDelegate : CKSceneDelegate <CKChatControllerDelegate, CKInteractionNotificationViewDelegate>

@property (retain, nonatomic) CKNavigationController *navigationController;
@property (retain, nonatomic) CKCoreChatController *chatController;
@property (retain, nonatomic) CKInteractionNotificationView *dismissOnInteractionView;
@property (weak, nonatomic) CKDetailsNavigationController *detailsNavigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)conversation;
- (id)stateRestorationActivityForScene:(id)a0;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (long long)type;
- (void)scene:(id)a0 openURLContexts:(id)a1;
- (void)sceneWillEnterForeground:(id)a0;
- (void)sceneDidEnterBackground:(id)a0;
- (id)init;
- (void)scene:(id)a0 continueUserActivity:(id)a1;
- (void).cxx_destruct;
- (void)sceneDidDisconnect:(id)a0;
- (void)setupCKDismissOnInteractionView;
- (void)__updateAppSnapshot;
- (void)_chatItemsDidChange:(id)a0;
- (void)_handleChatDisplayNameChangedNotification:(id)a0;
- (void)_handleMovedMessagesInChatsWithGUIDsToRecentlyDeletedNotification:(id)a0;
- (void)_handleRegistryWillUnregisterChatNotification:(id)a0;
- (void)_updateAppSnapshot;
- (id)canActivatePredicate;
- (void)chatController:(id)a0 didDetachDetailsNavigationController:(id)a1;
- (void)chatController:(id)a0 didReportSpamForConversation:(id)a1;
- (void)chatController:(id)a0 didSendCompositionInConversation:(id)a1;
- (void)chatController:(id)a0 forwardComposition:(id)a1;
- (void)chatController:(id)a0 requestDeleteJunkConversation:(id)a1;
- (void)chatController:(id)a0 requestRecoverJunkConversation:(id)a1;
- (void)chatController:(id)a0 willSendComposition:(id)a1 inConversation:(id)a2;
- (void)dismissAndReopenDetailsNavigationController;
- (void)dismissDetailsNavigationController;
- (void)doneButtonPressedForChatController:(id)a0;
- (BOOL)hasDetailsNavigationController;
- (void)interactionNotificationViewWasTapped:(id)a0;
- (BOOL)isDetailsNavigationControllerDetached;
- (void)loadAndShowConversationWithMessageGUID:(id)a0 withInlineReplyOverlay:(BOOL)a1;
- (id)prefersToActivatePredicate;
- (void)presentDetailsNavigationController:(id)a0;
- (void)prewarmCameraIfNecessaryForChatController:(id)a0;
- (BOOL)shouldConfigureChatControllerAsCollapsed;
- (void)showConversation:(id)a0;
- (void)showConversation:(id)a0 scrollToMessage:(id)a1 withInlineReplyOverlay:(BOOL)a2;
- (void)showConversationAndMessageForChatGUID:(id)a0 messageGUID:(id)a1 withInlineReplyOverlay:(BOOL)a2 animate:(BOOL)a3;
- (void)tearDownCKDismissOnInteractionView;
- (void)windowSceneDidBecomeVisible:(id)a0;

@end
