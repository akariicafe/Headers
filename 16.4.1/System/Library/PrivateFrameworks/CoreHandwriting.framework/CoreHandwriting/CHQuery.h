@class NSString, CHRecognitionSession, CHRecognitionSessionResult, NSObject;
@protocol OS_dispatch_queue, CHStrokeProviderVersion, CHQueryDelegate;

@interface CHQuery : NSObject <CHRecognitionSessionObserver> {
    NSObject<OS_dispatch_queue> *_processingQueue;
    CHRecognitionSessionResult *_currentProcessingSessionResult;
    double _lastProcessedTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, nonatomic) NSString *debugName;
@property (nonatomic) BOOL _queryActive;
@property (copy) id<CHStrokeProviderVersion> lastProcessedStrokeProviderVersion;
@property (weak, nonatomic) id<CHQueryDelegate> delegate;
@property (readonly, nonatomic) CHRecognitionSession *recognitionSession;
@property (nonatomic) double preferredUpdatesInterval;

- (void)pause;
- (void)dealloc;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (id)initWithRecognitionSession:(id)a0;
- (double)preferredRecognitionResultUpdatesInterval;
- (void)recognitionSessionDidUpdateRecognitionResult:(id)a0;
- (void)waitForPendingUpdates;
- (id)q_sessionResult;
- (void)_updateForRecognitionSessionResultChangeIfNeeded;
- (void)q_queryResultDidChange;
- (void)q_setNeedsQueryResultUpdating;
- (void)q_updateQueryResult;

@end
