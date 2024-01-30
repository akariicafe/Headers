@class NSString, MPCPlaybackEngineEvent, NSObject;
@protocol OS_dispatch_group, MPCPlaybackEngineEventStreamSubscription, MPCRTCEventConsumerTestingDelegate, OS_dispatch_queue;

@interface MPCRTCEventConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    NSObject<OS_dispatch_group> *_rtcGroup;
    NSObject<OS_dispatch_queue> *_rtcQueue;
    MPCPlaybackEngineEvent *_cachedFirstItemAssetLoadEvent;
}

@property (class, readonly, copy, nonatomic) NSString *identifier;

@property (readonly, nonatomic) id<MPCPlaybackEngineEventStreamSubscription> subscription;
@property (weak, nonatomic) id<MPCRTCEventConsumerTestingDelegate> testingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierStringFromItemIdentifiers:(id)a0 radioIdentifiers:(id)a1;
+ (id)NSStringFromMPCRTCReportingEventCategory:(long long)a0;
+ (id)rtcIdentifiersFromUniversalIdentifiers:(id)a0;
+ (id)rtcIdentifiersFromRadioIdentifiers:(id)a0;
+ (id)playerServiceNameWithPlayerID:(id)a0;
+ (id)dateFormatter;

- (void)unsubscribeFromEventStream:(id)a0;
- (void)subscribeToEventStream:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_accountSnapshotWithCursor:(id)a0;
- (void)_generateConfiguredReportingSessionWithSamplingUUID:(id)a0 serviceName:(id)a1 completion:(id /* block */)a2;
- (void)_handleReportingForItemStartEvent:(id)a0 event:(id)a1;
- (id)_itemAssetTypeFromItemAssetLoadEvent:(id)a0 cursor:(id)a1;
- (id)_itemStartIncitingEvent:(id)a0 fromItemStartEvent:(id)a1;
- (BOOL)_itemWasPreviouslyLoaded:(id)a0 cursor:(id)a1;
- (id)_mediaIdentifierFromItemAssetLoadEndEvent:(id)a0 cursor:(id)a1;
- (id)_payloadForItemAssetLoad:(id)a0 fromItemEvent:(id)a1;
- (id)_payloadForItemSummary:(id)a0 fromEvent:(id)a1;
- (id)_payloadForItemSummary:(id)a0 fromItemEvent:(id)a1;
- (id)_payloadForQueueLoad:(id)a0 fromQueueLoadEndEvent:(id)a1;
- (id)_payloadForSessionStart:(id)a0 fromEvent:(id)a1;
- (id)_payloadForSessionSummary:(id)a0 fromEvent:(id)a1;
- (void)_performABCSnapshotWithPayloadIfNecessary:(id)a0;
- (id)_reasonForEndEvent:(id)a0 cursor:(id)a1;
- (id)_rtcSessionInfoWithSamplingUUID:(id)a0;
- (id)_rtcUserInfoWithServiceName:(id)a0;
- (void)_sendOneMessageWithCategory:(long long)a0 type:(long long)a1 payload:(id)a2;
- (void)_sendQueueLoadEventIfNeeded:(id)a0 forItemEvent:(id)a1;
- (void)_sendReportForItemAssetLoad:(id)a0 event:(id)a1;
- (void)_sendReportForItemSummary:(id)a0 event:(id)a1;
- (void)_sendReportForItemSummaryWithEndReason:(id)a0 cursor:(id)a1 event:(id)a2;
- (void)_sendReportForSessionStart:(id)a0 event:(id)a1 withType:(long long)a2;
- (void)_sendReportForSessionSummary:(id)a0 event:(id)a1 withType:(long long)a2;
- (void)_sendReportWithSession:(id)a0 category:(long long)a1 type:(long long)a2 payload:(id)a3;
- (void)_sendSessionStartIfNeeded:(id)a0 forItemEvent:(id)a1;
- (id)_tapToPlayMetrics:(id)a0 fromItemStartEvent:(id)a1;
- (id)_underlyingErrorFromPayload:(id)a0;
- (void)_updateAssetLoadInfoEvent:(id)a0 fromAssetLoadEndEvent:(id)a1 untilAssetLoadBeginEvent:(id)a2 cursor:(id)a3;

@end
