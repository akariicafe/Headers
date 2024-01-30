@class NSString, NSObject, MPCPlaybackEngine;
@protocol MPCPlaybackEngineEventStreamSubscription, OS_dispatch_queue;

@interface MPCAssistantAnalyticsEventConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSString *_lastSiriReferenceIdentifierForPlaybackStart;
    struct OpaqueCMTimebase { } *_observedTimebase;
}

@property (class, readonly, copy, nonatomic) NSString *identifier;

@property (readonly, nonatomic) id<MPCPlaybackEngineEventStreamSubscription> subscription;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)unsubscribeFromEventStream:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlaybackEngine:(id)a0;
- (void)_itemTimebaseDidChangeNotification:(id)a0;
- (void)_timebaseEffectiveRateChangedNotification;
- (void)subscribeToEventStream:(id)a0;
- (void)_handleAssetLoadEnd:(id)a0 cursor:(id)a1;
- (id)_contextWithEvent:(id)a0;
- (void)_attemptPlaybackStartReportingEventWithItem:(id)a0;
- (id)_createContextDictionaryWithSiriReferenceIdentifier:(id)a0 siriWHAMetricsInfo:(id)a1 formatInfo:(id)a2;

@end
