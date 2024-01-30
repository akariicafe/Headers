@class NSString, NSHashTable, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface MPAssistantAnalyticsReportingController : NSObject {
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSString *_lastSiriReferenceIdentifierForPlaybackStart;
    NSString *_lastSiriReferenceIdentifierForWillReload;
    NSString *_lastSiriReferenceIdentifierWithLikelyToKeepUp;
    NSHashTable *_players;
    NSMapTable *_playerToObservedTimebase;
}

@property (class, readonly, nonatomic) MPAssistantAnalyticsReportingController *sharedController;

- (void).cxx_destruct;
- (id)_init;
- (void)registerPlayer:(id)a0;
- (void)unregisterPlayer:(id)a0;
- (void)logAssistantEvent:(id)a0 withTimestamp:(unsigned long long)a1;
- (void)_bufferingStateDidChangeNotification:(id)a0;
- (void)_itemDidChangeNotification:(id)a0;
- (void)_itemTimebaseDidChangeNotification:(id)a0;
- (void)_willReloadWithPlaybackContextNotification:(id)a0;
- (void)_attemptLikelyToKeepUpReportingEventWithPlayer:(id)a0;
- (void)_attemptPlaybackStartReportingEventWithPlayer:(id)a0;
- (void)_timebaseEffectiveRateChangedNotification;
- (id)_createContextDictionaryWithSiriReferenceIdentifier:(id)a0 siriWHAMetricsInfo:(id)a1;

@end
