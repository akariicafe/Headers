@class NSString, CKCoreChatController, CKNavigationController, CKDetailsNavigationController;

@interface CKChatSceneDelegate : CKSceneDelegate <CKChatControllerDelegate>

@property (retain, nonatomic) CKNavigationController *navigationController;
@property (retain, nonatomic) CKCoreChatController *chatController;
@property (weak, nonatomic) CKDetailsNavigationController *detailsNavigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void)sceneDidDisconnect:(id)a0;
- (void)sceneDidEnterBackground:(id)a0;
- (void)sceneWillEnterForeground:(id)a0;
- (id)stateRestorationActivityForScene:(id)a0;
- (void).cxx_destruct;
- (void)chatController:(id)a0 forwardComposition:(id)a1;
- (id)init;
- (void)scene:(id)a0 openURLContexts:(id)a1;
- (void)showConversation:(id)a0;
- (void)_chatItemsDidChange:(id)a0;
- (void)_handleRegistryWillUnregisterChatNotification:(id)a0;
- (void)windowSceneDidBecomeVisible:(id)a0;
- (void)loadAndShowConversationWithMessageGUID:(id)a0 withInlineReplyOverlay:(BOOL)a1;
- (void)_updateAppSnapshot;
- (void)showConversationAndMessageForChatGUID:(id)a0 messageGUID:(id)a1 withInlineReplyOverlay:(BOOL)a2 animate:(BOOL)a3;
- (void)showConversation:(id)a0 scrollToMessage:(id)a1 withInlineReplyOverlay:(BOOL)a2;
- (void)__updateAppSnapshot;
- (id)prefersToActivatePredicate;
- (void)chatController:(id)a0 willSendComposition:(id)a1 inConversation:(id)a2;
- (void)chatController:(id)a0 didSendCompositionInConversation:(id)a1;
- (void)chatController:(id)a0 didReportSpamForConversation:(id)a1;
- (void)prewarmCameraIfNecessaryForChatController:(id)a0;
- (void)doneButtonPressedForChatController:(id)a0;
- (void)chatController:(id)a0 didDetachDetailsNavigationController:(id)a1;
- (void)presentDetailsNavigationController:(id)a0;
- (id)canActivatePredicate;
- (BOOL)hasDetailsNavigationController;
- (void)dismissDetailsNavigationController;
- (void)dismissAndReopenDetailsNavigationController;
- (BOOL)isDetailsNavigationControllerDetached;
- (long long)type;
- (void)scene:(id)a0 continueUserActivity:(id)a1;
- (id)conversation;

@end
