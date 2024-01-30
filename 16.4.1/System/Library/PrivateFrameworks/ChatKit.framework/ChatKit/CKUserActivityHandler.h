@interface CKUserActivityHandler : NSObject

+ (BOOL)_messageUnknownFilteringEnabled;
+ (void)openSURFURL:(id)a0 navigationProvider:(id)a1;
+ (id)createPluginPayloadForCloudKit:(id)a0;
+ (void)_sendCollaborationInitationForURL:(id)a0 originatingProcess:(id)a1 chat:(id)a2 conversation:(id)a3 recipientIDs:(id)a4 navigationProvider:(id)a5 animate:(BOOL)a6;
+ (void)_setMessageFilterModeBy:(id)a0 navigationProvider:(id)a1;
+ (void)_showPeerPaymentUIForPerson:(id)a0 amount:(id)a1 navigationProvider:(id)a2 chatController:(id)a3;
+ (void)chatScene:(id)a0 openURLContexts:(id)a1;
+ (void)chatScene:(id)a0 willConnectToSession:(id)a1 userActivities:(id)a2 urlContexts:(id)a3 windowSceneDelegate:(id)a4;
+ (void)compositionFromDictionary:(id)a0 completion:(id /* block */)a1;
+ (id)conversationfromLaunchEventContext:(id)a0;
+ (id)createPluginPayloadForCloudKitPlusCollaborationMetadata:(id)a0 shareOptions:(id)a1;
+ (id)createPluginPayloadForCloudKitWithLaunchContext:(id)a0;
+ (id)createPluginPayloadForFileProvider:(id)a0 sendCopyFileURLs:(id)a1;
+ (id)createPluginPayloadForPendingCollaboration:(id)a0;
+ (void)fileProviderCompositionFromPluginPayload:(id)a0 url:(id)a1 shareOptions:(id)a2 previousComposition:(id)a3 completion:(id /* block */)a4;
+ (id)finalCompositionFromExistingComposition:(id)a0 pluginPayloadComposition:(id)a1 shareOptions:(id)a2;
+ (BOOL)hasBusinessRecipientWithRecipientIDs:(id)a0;
+ (BOOL)isPreferencesURL:(id)a0;
+ (void)loadCompositionWithAttachments:(id)a0 launchEventContext:(id)a1 animate:(BOOL)a2 navigationProvider:(id)a3 chatController:(id)a4;
+ (void)loadConversationWithMessageGUID:(id)a0 withInlineReplyOverlay:(BOOL)a1 navigationProvider:(id)a2;
+ (void)loadNonGelatoCompositionForConversation:(id)a0 launchEventContext:(id)a1 animate:(BOOL)a2 navigationProvider:(id)a3 chatController:(id)a4;
+ (void)messagesScene:(id)a0 continueUserActivity:(id)a1 withNavigationProvider:(id)a2 chatController:(id)a3 completion:(id /* block */)a4;
+ (void)messagesScene:(id)a0 willConnectToSession:(id)a1 userActivities:(id)a2 stateRestorationActivity:(id)a3 windowSceneDelegate:(id)a4;
+ (void)openSMSURL:(id)a0 animate:(BOOL)a1 navigationProvider:(id)a2 chatController:(id)a3 originatingProcess:(id)a4;
+ (void)openURL:(id)a0 animate:(BOOL)a1 sourceApplication:(id)a2 originatingProcess:(id)a3 navigationProvider:(id)a4 chatController:(id)a5 completion:(id /* block */)a6;
+ (void)processAppleEventDictionary:(id)a0 animate:(BOOL)a1 navigationProvider:(id)a2 chatController:(id)a3;
+ (void)processLaunchEventContext:(id)a0 animate:(BOOL)a1 navigationProvider:(id)a2 chatController:(id)a3;
+ (BOOL)restoreState:(id)a0 navigationProvider:(id)a1;
+ (BOOL)restoreStateFromUserActivity:(id)a0 withNavigationProvider:(id)a1;
+ (void)sendBackgroundCollaborationForUserActivity:(id)a0 withNavigationProvider:(id)a1 chatController:(id)a2 completion:(id /* block */)a3;
+ (void)setChatControllerCompositionForConversation:(id)a0 navigationProvider:(id)a1 composition:(id)a2;
+ (void)setupCollaborationCompositionWithLaunchEventContext:(id)a0 animate:(BOOL)a1 navigationProvider:(id)a2 chatController:(id)a3 conversation:(id)a4 replaceComposition:(BOOL)a5;
+ (void)setupFinalCompositionWithExistingComposition:(id)a0 withPluginPayloadComposition:(id)a1 shareOptions:(id)a2 conversation:(id)a3 animated:(BOOL)a4 navigationProvider:(id)a5;
+ (void)showConversation:(id)a0 animated:(BOOL)a1 navigationProvider:(id)a2;
+ (void)updateChatController:(id)a0 composition:(id)a1;
+ (id)validIntentDictionaryWithURLParameters:(id)a0;

@end
