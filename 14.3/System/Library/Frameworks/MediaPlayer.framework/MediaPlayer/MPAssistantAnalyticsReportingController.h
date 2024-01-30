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

@property (class, readonly) MPAssistantAnalyticsReportingController *sharedController;

- (void)unregisterPlayer:(id)a0;
- (void)_itemDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)logAssistantEvent:(id)a0 withTimestamp:(unsigned long long)a1;
- (void)_willReloadWithPlaybackContextNotification:(id)a0;
- (id)_init;
- (void)_attemptPlaybackStartReportingEventWithPlayer:(id)a0;
- (void)_bufferingStateDidChangeNotification:(id)a0;
- (void)registerPlayer:(id)a0;
- (id)_createContextDictionaryWithSiriReferenceIdentifier:(id)a0 siriWHAMetricsInfo:(id)a1;
- (void)_timebaseEffectiveRateChangedNotification;
- (void)_attemptLikelyToKeepUpReportingEventWithPlayer:(id)a0;
- (void)_itemTimebaseDidChangeNotification:(id)a0;

@end
