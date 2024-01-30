@class NSSet, CKRegistrationViewController, CKMessagesController, CKSceneDelegateState;

@interface CKMessagesSceneDelegate : CKSceneDelegate <CKMessagesControllerDelegate, CKAlertSuppressionContextsProviding>

@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (nonatomic, getter=isLocked) BOOL locked;
@property (retain, nonatomic) CKSceneDelegateState *storedState;
@property (retain, nonatomic) CKRegistrationViewController *madridRegistrationController;
@property (nonatomic) BOOL shouldShowRegistrationOverride;
@property (readonly, nonatomic) CKMessagesController *messagesController;
@property (readonly, nonatomic) NSSet *alertSuppressionContexts;

- (void)sceneDidDisconnect:(id)a0;
- (void)windowScene:(id)a0 performActionForShortcutItem:(id)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)openSMSURL:(id)a0;
- (void)openURL:(id)a0 sourceApplication:(id)a1;
- (void)dealloc;
- (BOOL)_messageUnknownFilteringEnabled;
- (id)stateRestorationActivityForScene:(id)a0;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (id)sharedConversationList;
- (long long)type;
- (void)scene:(id)a0 continueUserActivity:(id)a1;
- (void)sceneWillEnterForeground:(id)a0;
- (void)sceneDidEnterBackground:(id)a0;
- (void)windowSceneDidBecomeVisible:(id)a0;
- (void)_chatItemsDidChange:(id)a0;
- (void)_updateAppSnapshot;
- (void)__updateAppSnapshot;
- (id)prefersToActivatePredicate;
- (id)canActivatePredicate;
- (void)sceneWillResignActive:(id)a0;
- (void)scene:(id)a0 openURLContexts:(id)a1;
- (void)messagesController:(id)a0 didUpdateCurrentConversation:(id)a1;
- (void)sceneDidBecomeActive:(id)a0;
- (BOOL)hasBusinessRecipientWithRecipientIDs:(id)a0;
- (void)openSURFURL:(id)a0;
- (void)_handleAccountsChanged:(id)a0;
- (void)_handleDaemonConnected:(id)a0;
- (void)_handleDaemonDisconnected:(id)a0;
- (void)_destroyMadridRegistrationView;
- (void)_scheduleDeferredSetup;
- (void)_prepareForResume:(BOOL)a0;
- (void)_showMadridRegistrationViewIfNecessary;
- (void)_updateStoredState;
- (BOOL)restoreStateFromUserActivity:(id)a0;
- (void)_showPeerPaymentUIForPerson:(id)a0 amount:(id)a1;
- (BOOL)_shouldShowMadridRegistrationView;
- (BOOL)_restoreState:(id)a0;
- (void)_updateMadridRegistrationViewAnimated:(BOOL)a0;
- (void)_clearOldInputContextIdentifiersIfNeeded;
- (void)loadConversationWithMessageGUID:(id)a0;
- (id)validIntentDictionaryWithURLParameters:(id)a0;
- (void)_setMessageFilterModeBy:(id)a0;
- (BOOL)shouldRestoreToConversationListForState:(id)a0;
- (void)__showMadridRegistrationViewIfNecessary;
- (void)_createMadridRegistrationViewIfNecessary;
- (id)_oldInputContextIdentifiers;
- (void)_conversationFilteringStateChangedNotification:(id)a0;
- (void)_prepareForSuspend;

@end
