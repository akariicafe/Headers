@class SiriAnalyticsClockInactivityScheduler, NSString, SiriAnalyticsPreprocessor, SiriAnalyticsClientMessageStream, SiriAnalyticsMetastore, SiriAnalyticsSensitiveConditionsObservers, SiriAnalyticsInternalTelemetry;

@interface AssistantSiriAnalyticsClockWatcher : NSObject <SiriAnalyticsWhiteRoseDelegate> {
    SiriAnalyticsInternalTelemetry *_internalTelemetry;
    SiriAnalyticsSensitiveConditionsObservers *_sensitiveConditionsObservers;
    SiriAnalyticsClientMessageStream *_clientMessageStream;
    SiriAnalyticsPreprocessor *_preprocessor;
    SiriAnalyticsMetastore *_metastore;
    SiriAnalyticsClockInactivityScheduler *_inactivityScheduler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)whiteRose:(id)a0 willCreateRootClock:(id)a1 completion:(id /* block */)a2;
- (id)initWithInternalTelemetry:(id)a0 sensitiveConditionsObservers:(id)a1 clientMessageStream:(id)a2 preprocessor:(id)a3 metastore:(id)a4 scheduler:(id)a5;
- (void)whiteRose:(id)a0 rootClockCreated:(id)a1 trailingRootClock:(id)a2;
- (void)_triggerSiriAccountInformation;
- (void)whiteRose:(id)a0 derivativeClockCreated:(id)a1 rootClock:(id)a2;
- (id)init;
- (void)whiteRose:(id)a0 rootClockDestroyed:(id)a1 reason:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)_triggerDeviceFixedContextOnStreamUUID:(id)a0;
- (void).cxx_destruct;

@end
