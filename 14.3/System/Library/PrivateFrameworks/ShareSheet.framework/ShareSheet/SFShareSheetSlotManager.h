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

- (void)ensureConnectionEstablished;
- (void)connectToDaemonWithSessionID:(id)a0 discoveryContext:(id)a1 assetIdentifiers:(id)a2 urlsBeingShared:(id)a3 shouldSuggestFamilyMembers:(id)a4 completionHandler:(id /* block */)a5;
- (void)setProgress:(id)a0 withTopText:(id)a1 bottomText:(id)a2 forNodeWithIdentifier:(id)a3 shouldPulse:(id)a4 animated:(BOOL)a5;
- (id)init;
- (void)activityViewControllerWithSessionID:(id)a0 favoritedActivity:(BOOL)a1 withIdentifier:(id)a2 activityCategory:(long long)a3;
- (void).cxx_destruct;
- (void)activityViewControllerWithSessionID:(id)a0 removedPersonWithIdentifier:(id)a1;
- (void)performExtensionActivityInHostWithBundleID:(id)a0 request:(id)a1;
- (void)activityViewControllerWithSessionID:(id)a0 didLongPressShareActivityWithIdentifier:(id)a1;
- (void)ensureXPCStarted;
- (void)performActivityInHostWithUUID:(id)a0;
- (id)remoteObjectProxy;
- (void)connectionInterrupted;
- (void)activityViewControllerWithSessionID:(id)a0 selectedDefaultActivityWithIdentifier:(id)a1 activityCategory:(long long)a2;
- (void)performShortcutActivityInHostWithBundleID:(id)a0 singleUseToken:(id)a1;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)activityViewControllerPerformEditActionsWithSessionID:(id)a0;
- (void)sendConfiguration:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldEscapeXpcTryCatch;
- (void)activate;
- (id)exportedInterface;
- (void)willPerformInServiceActivityWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)invalidated;
- (void)activityViewControllerWithSessionID:(id)a0 updatedFavoritesProxies:(id)a1 activityCategory:(long long)a2;
- (void)activityViewControllerWithSessionID:(id)a0 selectedPersonWithIdentifier:(id)a1;
- (void)dataSourceUpdatedWithSessionConfiguration:(id)a0;
- (void)interrupted;
- (id)machServiceName;
- (void)activityViewControllerWillEnterForegroundWithSessionID:(id)a0;
- (id)remoteObjectInterface;
- (void)activityViewControllerWithSessionID:(id)a0 selectedActivityWithIdentifier:(id)a1;
- (void)activityViewControllerDidEnterBackgroundWithSessionID:(id)a0;
- (void)activityViewControllerPerformedActivityWithInfoDictionary:(id)a0;
- (void)activityViewControllerWithSessionID:(id)a0 selectedActionWithIdentifier:(id)a1;
- (void)performUserDefaultsWithFavoritesProxies:(id)a0 suggestionProxies:(id)a1 orderedUUIDs:(id)a2 activityCategory:(long long)a3;
- (void)performAirDropActivityInHostWithNoContentView:(BOOL)a0;
- (void)connectionEstablished;
- (void)invalidate;
- (void)activityViewControllerWithSessionID:(id)a0 toggledActivityWithIdentifier:(id)a1 activityCategory:(long long)a2;

@end
