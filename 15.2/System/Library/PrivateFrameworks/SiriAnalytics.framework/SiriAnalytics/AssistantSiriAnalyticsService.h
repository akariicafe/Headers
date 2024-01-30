@class SiriAnalyticsPreferences, SiriAnalyticsInternalTelemetry, SiriAnalyticsWhiteRose, SiriAnalyticsLargeMessageStorage, AssistantSiriAnalyticsMessageTailing, SiriAnalyticsTimePeriodBuffer, NSObject, SiriAnalyticsXPCServiceListener, SiriAnalyticsMessageObserverStream, SiriAnalyticsMessageResolutionPipeline, AssistantSiriAnalyticsClockWatcher;
@protocol SiriAnalyticsObservableMessages, SiriAnalyticsMessageStorage, OS_dispatch_queue, SiriAnalyticsServiceHostDelegate;

@interface AssistantSiriAnalyticsService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    SiriAnalyticsXPCServiceListener *_siriAnalyticsListener;
    SiriAnalyticsTimePeriodBuffer *_storageBuffer;
    id<SiriAnalyticsMessageStorage> _storageProvider;
    id<SiriAnalyticsMessageStorage> _localStorageProvider;
    SiriAnalyticsLargeMessageStorage *_largeMessageStorage;
    SiriAnalyticsMessageObserverStream *_postTransformStream;
    SiriAnalyticsWhiteRose *_whiteRose;
    SiriAnalyticsMessageResolutionPipeline *_messageResolutionPipeline;
    AssistantSiriAnalyticsClockWatcher *_clockWatcher;
    SiriAnalyticsPreferences *_preferences;
    AssistantSiriAnalyticsMessageTailing *_messageTailing;
    SiriAnalyticsInternalTelemetry *_internalTelemetry;
    id<SiriAnalyticsServiceHostDelegate> _delegate;
}

@property (readonly) id<SiriAnalyticsObservableMessages> postTransformationStream;

- (id)initWithQueue:(id)a0;
- (void)listener:(id)a0 largeMessageReceivedWithPath:(id)a1 messageWrapper:(id)a2 completion:(id /* block */)a3;
- (id)initWithQueue:(id)a0 storageProvider:(id)a1 localStorageProvider:(id)a2 largeMessageStorage:(id)a3 delegate:(id)a4;
- (void)registerMessageResolver:(id)a0;
- (id)_applyTransformationsToMessages:(id)a0;
- (BOOL)_analyticsEnabled;
- (void).cxx_destruct;
- (id)_applyTransformationsToMessage:(id)a0;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)listener:(id)a0 messagesReceived:(id)a1;
- (void)listener:(id)a0 unresolvedMessagesReceived:(id)a1;

@end
