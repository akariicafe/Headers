@class VUIInAppMessagesConfig, VUIInAppMessagingContextProvider, NSString, NSMutableDictionary, IAMMessageCoordinator;

@interface VUIInAppMessagingManager : NSObject <IAMMessageMetricsDelegate, AMSUIMessageGroupDelegate> {
    NSMutableDictionary *messageRegistry;
}

@property (retain, nonatomic) VUIInAppMessagingContextProvider *context;
@property (retain, nonatomic) IAMMessageCoordinator *coordinator;
@property (retain, nonatomic) VUIInAppMessagesConfig *config;
@property (retain, nonatomic) NSString *purchaseOrLinkingAdamID;
@property (retain, nonatomic) NSString *subscriptionChannelTitle;
@property (retain, nonatomic) NSString *subscriptionChannelLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)unregisterMessageTarget:(id)a0;
- (void)reportMessageDidAppearWithIdentifier:(id)a0 fromTargetWithIdentifier:(id)a1;
- (void)registerMessageTarget:(id)a0;
- (void).cxx_destruct;
- (void)reportMessageWithIdentifier:(id)a0 actionWasPerformedWithIdentifier:(id)a1;
- (id)init;
- (void)reportMessageDidDisappearWithIdentifier:(id)a0 fromTargetWithIdentifier:(id)a1;
- (void)dealloc;
- (void)reportMetricsEvent:(id)a0;
- (void)messageDidReportMetricsEvent:(id)a0 eventProperties:(id)a1;
- (void)messageGroup:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void)messageGroup:(id)a0 didFinishCarrierLinkingWithResult:(id)a1 error:(id)a2;
- (void)_handleIsPlaybackUIBeingShownDidChange:(id)a0;
- (void)addMessage:(id)a0 forTargetID:(id)a1;
- (void)removeMessageForTargetID:(id)a0;
- (id)messageForTargetID:(id)a0;
- (id)messageJSONForTargetID:(id)a0;
- (void)reportDocumentAppearance:(id)a0;
- (void)reportApplicationDidBecomeActiveEvent;
- (void)reportCountableEventNamed:(id)a0;
- (id)_getMessageGroups;
- (void)_handleSubscriptionDataDidChangeNotification:(id)a0;
- (void)_handleActiveDownloadButtonsDidChange:(id)a0;
- (void)_handleHasFavoriteTeamsDidChange:(id)a0;
- (void)_handleLocationStatusDidChange:(id)a0;
- (void)_handleNetworkStatusDidChange:(id)a0;
- (void)_handleLibraryContentsDidChange:(id)a0;
- (id)_normalizedPageDetailsForEventProperties:(id)a0;
- (void)_postPurchaseOrLinkingProcessing;
- (void)_showPostPurchaseOrLinkingConfirmation;
- (void)_debouncedLibraryContentsDidChange;
- (void)reportValueEventNamed:(id)a0 value:(id)a1;

@end
