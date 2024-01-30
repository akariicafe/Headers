@class NSString, NSXPCConnection;
@protocol SFShareSheetSlotManagerDelegate;

@interface SFShareSheetSlotManager : NSObject <SFShareSheetSlotObserverProtocol, NSXPCConnectionDelegate> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) id<SFShareSheetSlotManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)machServiceName;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)connectionEstablished;
- (void)ensureConnectionEstablished;
- (void)ensureXPCStarted;
- (void)connectToDaemonWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)connectToDaemonWithSessionID:(id)a0 discoveryContext:(id)a1 assetIdentifiers:(id)a2 urlsBeingShared:(id)a3 shouldSuggestFamilyMembers:(id)a4 completionHandler:(id /* block */)a5;
- (void)activityViewControllerWithSessionID:(id)a0 selectedActivityWithIdentifier:(id)a1;
- (void)performAirDropActivityInHostWithNoContentView:(BOOL)a0;
- (void)invalidated;
- (void)activityViewControllerWithSessionID:(id)a0 selectedActionWithIdentifier:(id)a1;
- (void)activityViewControllerWithSessionID:(id)a0 selectedPersonWithIdentifier:(id)a1;
- (void)activityViewControllerWithSessionID:(id)a0 removedPersonWithIdentifier:(id)a1;
- (void)dataSourceUpdatedWithSessionConfiguration:(id)a0;
- (void)activityViewControllerWithSessionID:(id)a0 provideFeedbackForPeopleSuggestionWithIdentifier:(id)a1;
- (void)activityViewControllerWithSessionID:(id)a0 didLongPressShareActivityWithIdentifier:(id)a1;
- (void)activityViewControllerWillEnterForegroundWithSessionID:(id)a0;
- (void)activityViewControllerWithSessionID:(id)a0 toggledActivityWithIdentifier:(id)a1 activityCategory:(long long)a2;
- (void)activityViewControllerWithSessionID:(id)a0 favoritedActivity:(BOOL)a1 withIdentifier:(id)a2 activityCategory:(long long)a3;
- (void)activityViewControllerPerformedActivityWithInfoDictionary:(id)a0;
- (void)activityViewControllerWithSessionID:(id)a0 selectedDefaultActivityWithIdentifier:(id)a1 activityCategory:(long long)a2;
- (void)activityViewControllerWithSessionID:(id)a0 updatedFavoritesProxies:(id)a1 activityCategory:(long long)a2;
- (void)activityViewControllerDidEnterBackgroundWithSessionID:(id)a0;
- (void)activityViewControllerPerformEditActionsWithSessionID:(id)a0;
- (void)performUserDefaultsWithFavoritesProxies:(id)a0 suggestionProxies:(id)a1 orderedUUIDs:(id)a2 activityCategory:(long long)a3;
- (void)performExtensionActivityInHostWithBundleID:(id)a0 request:(id)a1;
- (void)performActivityInHostWithUUID:(id)a0;
- (void)performShortcutActivityInHostWithBundleID:(id)a0 singleUseToken:(id)a1;
- (void)willPerformInServiceActivityWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)setProgress:(id)a0 withTopText:(id)a1 bottomText:(id)a2 forNodeWithIdentifier:(id)a3 shouldPulse:(id)a4 animated:(BOOL)a5;
- (void).cxx_destruct;
- (void)activate;
- (void)connectionInterrupted;
- (id)init;
- (void)invalidate;
- (id)exportedInterface;
- (void)interrupted;

@end
