@class NSString, SiriAnalyticsClientMessageStream, SiriAnalyticsInternalTelemetry;

@interface AssistantSiriAnalyticsClockWatcher : NSObject <SiriAnalyticsWhiteRoseDelegate> {
    SiriAnalyticsInternalTelemetry *_internalTelemetry;
    SiriAnalyticsClientMessageStream *_clientMessageStream;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)whiteRose:(id)a0 derivativeClockCreated:(id)a1 rootClock:(id)a2;
- (void)whiteRose:(id)a0 rootClockDestroyed:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_triggerDeviceFixedContextOnStreamUUID:(id)a0;
- (void)_triggerSiriAccountInformation;
- (id)initWithInternalTelemetry:(id)a0 clientMessageStream:(id)a1;
- (void)whiteRose:(id)a0 rootClockCreated:(id)a1 trailingRootClock:(id)a2;

@end
