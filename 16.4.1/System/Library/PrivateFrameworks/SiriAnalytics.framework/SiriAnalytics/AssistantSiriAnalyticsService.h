@class SiriAnalyticsWhiteRose, SiriAnalyticsFeatureFlags, NSObject, AssistantSiriAnalyticsClockWatcher, AssistantSiriAnalyticsMessageTailing, SiriAnalyticsPreferences, SiriAnalyticsPreprocessor, SiriAnalyticsMessageObserverStream, SiriAnalyticsLargeMessageStorage, SiriAnalyticsSensitiveConditionsObservers, SiriAnalyticsMessageProcessingStrategy, SiriAnalyticsFBFStorage, SiriAnalyticsInternalTelemetry, SiriAnalyticsMetastore, SiriAnalyticsXPCServiceListener, SiriAnalyticsMessageResolutionPipeline;
@protocol SiriAnalyticsObservableMessages, OS_dispatch_queue, SiriAnalyticsServiceHostDelegate;

@interface AssistantSiriAnalyticsService : NSObject <SiriAnalyticsSensitiveConditionsObserverDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    SiriAnalyticsXPCServiceListener *_siriAnalyticsListener;
    SiriAnalyticsMessageProcessingStrategy *_messageProcessingStrategy;
    SiriAnalyticsLargeMessageStorage *_largeMessageStorage;
    SiriAnalyticsMessageObserverStream *_postTransformStream;
    SiriAnalyticsWhiteRose *_whiteRose;
    SiriAnalyticsMessageResolutionPipeline *_messageResolutionPipeline;
    AssistantSiriAnalyticsClockWatcher *_clockWatcher;
    SiriAnalyticsPreferences *_preferences;
    AssistantSiriAnalyticsMessageTailing *_messageTailing;
    SiriAnalyticsInternalTelemetry *_internalTelemetry;
    id<SiriAnalyticsServiceHostDelegate> _delegate;
    SiriAnalyticsSensitiveConditionsObservers *_sensitiveConditionsObservers;
    SiriAnalyticsMetastore *_metastore;
    SiriAnalyticsPreprocessor *_preprocessor;
    SiriAnalyticsFeatureFlags *_featureFlags;
    SiriAnalyticsFBFStorage *_fbf;
}

@property (readonly) id<SiriAnalyticsObservableMessages> postTransformationStream;

- (void)registerMessageResolver:(id)a0;
- (void)handler:(id)a0 messagesReceived:(id)a1;
- (void)handler:(id)a0 fetchLogicalClocks:(id /* block */)a1;
- (void)handler:(id)a0 largeMessageReceivedWithPath:(id)a1 messageWrapper:(id)a2 completion:(id /* block */)a3;
- (id)_applyTransformationsToMessage:(id)a0;
- (BOOL)_analyticsEnabled;
- (void)handler:(id)a0 unresolvedMessagesReceived:(id)a1;
- (id)initWithQueue:(id)a0 prefs:(id)a1 localStorageProvider:(id)a2 largeMessageStorage:(id)a3 messageStore:(id)a4 delegate:(id)a5;
- (void)sensitiveCondition:(int)a0 startedAt:(unsigned long long)a1;
- (void)sensitiveCondition:(int)a0 endedAt:(unsigned long long)a1;
- (void)handler:(id)a0 vendSandboxExtensionWithResource:(long long)a1 readonly:(BOOL)a2 completion:(id /* block */)a3;
- (void)handler:(id)a0 fetchStateForPluginName:(id)a1 completion:(id /* block */)a2;
- (id)_applyTransformationsToMessages:(id)a0;
- (void)registerSensitiveConditionsObserver:(id)a0;
- (void)sensitiveConditionRangesForBootSessionUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)handler:(id)a0 resetLogicalClockWithCompletion:(id /* block */)a1;
- (void)handler:(id)a0 unorderedMessagesReceived:(id)a1;
- (void)handler:(id)a0 sensitiveCondition:(int)a1 startedAt:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)handler:(id)a0 saveState:(id)a1 forPluginName:(id)a2 completion:(id /* block */)a3;
- (id)_getPreprocessor;
- (void)handler:(id)a0 sensitiveCondition:(int)a1 endedAt:(unsigned long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (id)initWithQueue:(id)a0;

@end
