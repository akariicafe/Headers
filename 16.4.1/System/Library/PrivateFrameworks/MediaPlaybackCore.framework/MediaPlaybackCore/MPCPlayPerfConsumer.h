@class NSString, MPCPlaybackEngine;
@protocol MPCPlaybackEngineEventStreamSubscription;

@interface MPCPlayPerfConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    NSString *_lastSiriReferenceIdentifier;
}

@property (class, readonly, copy, nonatomic) NSString *identifier;

@property (readonly, nonatomic) id<MPCPlaybackEngineEventStreamSubscription> subscription;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coreAnalyticsEventNameWithEventType:(id)a0;
+ (id)analyticsContentType:(long long)a0;
+ (id)analyticsFormat:(id)a0;

- (id)initWithPlaybackEngine:(id)a0;
- (void)unsubscribeFromEventStream:(id)a0;
- (void)subscribeToEventStream:(id)a0;
- (void).cxx_destruct;
- (void)generatePlayPerfSignposts:(id)a0;
- (void)handleMetrics:(id)a0;
- (void)sendMetricsToCoreAnalytics:(id)a0;
- (void)sendMetricsToSiriSelfLogger:(id)a0;
- (void)setupErrorHandlerForEventType:(id)a0 errorKey:(id)a1 prefix:(id)a2;

@end
