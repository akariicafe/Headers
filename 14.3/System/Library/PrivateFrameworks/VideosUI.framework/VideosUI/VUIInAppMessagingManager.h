@class VUIInAppMessagesConfig, VUIInAppMessagingContextProvider, NSString, NSMutableDictionary, IAMMessageCoordinator;

@interface VUIInAppMessagingManager : NSObject <IAMMessageMetricsDelegate> {
    NSMutableDictionary *messageRegistry;
}

@property (retain, nonatomic) VUIInAppMessagingContextProvider *context;
@property (retain, nonatomic) IAMMessageCoordinator *coordinator;
@property (retain, nonatomic) VUIInAppMessagesConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)reportMessageWithIdentifier:(id)a0 actionWasPerformedWithIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)registerMessageTarget:(id)a0;
- (void)dealloc;
- (void)reportMessageDidAppearWithIdentifier:(id)a0 fromTargetWithIdentifier:(id)a1;
- (void)reportMetricsEvent:(id)a0;
- (void)unregisterMessageTarget:(id)a0;
- (void)reportMessageDidDisappearWithIdentifier:(id)a0 fromTargetWithIdentifier:(id)a1;
- (void)messageDidReportMetricsEvent:(id)a0 eventProperties:(id)a1;
- (void)addMessage:(id)a0 forTargetID:(id)a1;
- (void)removeMessageForTargetID:(id)a0;
- (id)messageForTargetID:(id)a0;
- (id)messageJSONForTargetID:(id)a0;
- (void)reportCountableEventNamed:(id)a0;
- (void)reportDocumentAppearance:(id)a0;
- (void)reportApplicationDidBecomeActiveEvent;
- (id)_getMessageGroups;
- (void)_handleSubscriptionDataDidChangeNotification:(id)a0;
- (void)_handleIsPlaybackUIBeingShownDidChange:(id)a0;
- (void)_handleActiveDownloadButtonsDidChange:(id)a0;
- (void)_handleHasFavoriteTeamsDidChange:(id)a0;
- (void)_handleLocationStatusDidChange:(id)a0;
- (void)_handleNetworkStatusDidChange:(id)a0;
- (void)_handleLibraryContentsDidChange:(id)a0;
- (id)_normalizedPageDetailsForEventProperties:(id)a0;
- (void)_debouncedLibraryContentsDidChange;
- (void)reportValueEventNamed:(id)a0 value:(id)a1;

@end
