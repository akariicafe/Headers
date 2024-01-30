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
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, retain, nonatomic) NSString *debugName;
@property (nonatomic) BOOL _queryActive;
@property (copy) id<CHStrokeProviderVersion> lastProcessedStrokeProviderVersion;
@property (nonatomic) id<CHQueryDelegate> delegate;
@property (readonly, retain, nonatomic) CHRecognitionSession *recognitionSession;
@property (nonatomic) double preferredUpdatesInterval;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)start;
- (id)initWithRecognitionSession:(id)a0;
- (void)waitForPendingUpdates;
- (void)recognitionSessionDidUpdateRecognitionResult:(id)a0;
- (double)preferredRecognitionResultUpdatesInterval;
- (void)q_updateQueryResult;
- (id)q_sessionResult;
- (id)strokeIdentifiersForData:(id)a0 withStrokeProvider:(id)a1;
- (id)encodedStrokeIdentifiers:(id)a0 withStrokeProvider:(id)a1;
- (void)q_queryResultDidChange;
- (void)q_setNeedsQueryResultUpdating;
- (void)_updateForRecognitionSessionResultChangeIfNeeded;

@end
