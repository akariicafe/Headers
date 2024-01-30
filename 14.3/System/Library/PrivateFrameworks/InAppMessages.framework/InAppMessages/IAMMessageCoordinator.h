@class NSDate, NSString, IAMMessageEntryManager, IAMModalTarget, IAMStorageCoordinator, NSMutableDictionary, NSDictionary, IAMImpressionManager, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, IAMMessageMetricsDelegate, IAMApplicationContextProvider;

@interface IAMMessageCoordinator : NSObject <IAMImpressionManagerDelegate, IAMStorageCoordinatorDelegate, IAMEventReceiver> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_messageTargetsByTargetIdentifier;
    NSMutableDictionary *_messageTargetsRequiringNilPriorityMessageNotificationAfterRegistrationByTargetIdentifier;
    NSMutableDictionary *_priorityMessageEntryByTargetIdentifier;
    IAMImpressionManager *_impressionManager;
    NSMutableArray *_pendingTriggerContexts;
    IAMStorageCoordinator *_storageCoordinator;
    NSDictionary *_metadataEntryByMessageIdentifier;
    NSDate *_lastDisplayTimeGlobalPresentationPolicyGroupNormal;
    NSDate *_lastDisplayTimeGlobalPresentationPolicyGroupRestricted;
    IAMMessageEntryManager *_messageEntryManager;
    BOOL _isReadyToEvaluateMessages;
    NSString *_modalTargetIdentifier;
    IAMModalTarget *_modalTarget;
    NSDictionary *_messageGroupsByGroupIdentifier;
}

@property (weak, nonatomic) id<IAMMessageMetricsDelegate> metricsDelegate;
@property (weak, nonatomic) id<IAMApplicationContextProvider> applicationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_createMessageFromMessageEntry:(id)a0 replacingResourcePathsWithCachedResourceLocations:(BOOL)a1;

- (void)reportMessageDidDisappearWithIdentifier:(id)a0;
- (void)_updateMetadata:(id)a0 forMessageEntry:(id)a1 completion:(id /* block */)a2;
- (void)reportMessageWithIdentifier:(id)a0 actionWasPerformedWithIdentifier:(id)a1 fromTargetWithIdentifier:(id)a2;
- (void)_reportMessageAction:(id)a0 wasPerformedInMessageEntry:(id)a1 fromTargetWithIdentifier:(id)a2;
- (id)init;
- (id)_dequeuePendingTriggerContexts;
- (void)reportMessageWithIdentifier:(id)a0 actionWasPerformedWithIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)reportChangedContextPropertiesContext:(id)a0;
- (void)impressionManager:(id)a0 shouldReportImpressionEventWithDictionary:(id)a1;
- (void)receiveEvent:(id)a0;
- (void)_handleMessageReachedMaximumDisplayCount:(id)a0;
- (void)registerMessageTarget:(id)a0;
- (void)dealloc;
- (void)impressionManager:(id)a0 impressionDidEndForMessageEntry:(id)a1;
- (void)_setMessageGroups:(id)a0;
- (void)_incrementNumberOfDisplaysForMessageEntry:(id)a0;
- (id)_metadataEntryForMessageIdentifier:(id)a0;
- (void)_updateMetadataOfMessageEntriesByTrigger:(id)a0 forReceivedEvent:(id)a1;
- (void)receiveTriggerEventContext:(id)a0;
- (void)_updatePriorityMessageEntry:(id)a0 forTargetIdentifier:(id)a1 shouldNotifyTargetsIfNonNil:(BOOL)a2;
- (void)reportMessageDidAppearWithIdentifier:(id)a0 fromTargetWithIdentifier:(id)a1;
- (void)_reevaluateTargetsWithIdentifiers:(id)a0 forTriggerContext:(id)a1 shouldNotifyTargetsIfPriorityMessageNonNil:(BOOL)a2;
- (void)startWithApplicationContext:(id)a0 messageGroups:(id)a1;
- (id)_filterActiveTargetIdentifiers:(id)a0;
- (void)reportMetricsEvent:(id)a0;
- (void)_fetchMessagesAndMetadataFromStorageCoordinator:(id /* block */)a0;
- (void)_handleUpdatedMessageEntries:(id)a0 andMetadata:(id)a1;
- (void)reportMessageDidAppearWithIdentifier:(id)a0;
- (void)startWithApplicationContext:(id)a0 messageGroups:(id)a1 messageEntryProvider:(id)a2 messageMetadataStorage:(id)a3 propertyStorage:(id)a4;
- (void)start;
- (void)_reportHoldoutMessageWouldAppear:(id)a0;
- (void)_updateLastDisplayTime:(id)a0 forMessageEntry:(id)a1;
- (void)_reevaluateMessageEntries:(id)a0 forTargetIdentifier:(id)a1 shouldNotifyTargetsIfPriorityMessageNonNil:(BOOL)a2;
- (void)_calculateMessagesProximityAndDownloadResourcesIfNeeded:(id)a0;
- (id)_messageBundleIdentifiers;
- (void)_startStorageCoordinatorWithMessageEntryProvider:(id)a0 messageMetadataStorage:(id)a1 propertyStorage:(id)a2;
- (void)unregisterMessageTarget:(id)a0;
- (void)startWithApplicationContext:(id)a0;
- (void)reportMessageDidDisappearWithIdentifier:(id)a0 fromTargetWithIdentifier:(id)a1;
- (void)storageCoordinatorMessageEntriesChanged:(id)a0;
- (void)reportApplicationContextPropertiesDidChange:(id)a0;
- (void)_enqueuePendingTriggerContext:(id)a0;
- (void)_evaluateMessagesForAllActiveTargets;
- (void)_notifyMessageTargets:(id)a0 withTargetIdentifier:(id)a1 didUpdatePriorityMessageFromEntry:(id)a2;
- (void)_removeUserNotificationRemovalForMessageWithIdentifier:(id)a0;

@end
