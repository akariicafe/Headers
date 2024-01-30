@class PKRecognitionQueryController, NSString, CHRecognitionSession, NSDate, PKDrawing, NSArray, NSHashTable, NSObject;
@protocol OS_dispatch_queue, PKRecognitionSessionManagerDelegate;

@interface PKRecognitionSessionManager : NSObject <CHRecognitionSessionDataSource, CHRecognitionSessionObserver, PKDataDetectorQueryDelegate> {
    _Atomic long long _stateAtomic;
    NSObject<OS_dispatch_queue> *_recognitionSessionQueue;
    PKDrawing *_drawingForGetter;
    PKDrawing *q_drawing;
    CHRecognitionSession *q_session;
    NSDate *q_previousTime;
    NSArray *q_visibleOnscreenStrokes;
    BOOL q_wantsGrouping;
    BOOL q_wantsDataDetection;
    BOOL q_wantsTranscription;
    PKRecognitionQueryController *q_queryController;
    NSHashTable *q_listeners;
}

@property (nonatomic) long long state;
@property (readonly, nonatomic) CHRecognitionSession *session;
@property (copy, nonatomic) PKDrawing *drawing;
@property (weak, nonatomic) id<PKRecognitionSessionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)enabledLocales;

- (id)listeners;
- (id)init;
- (void)_teardownSession;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (void)textInputDidChange:(id)a0;
- (long long)contentTypeForIntersectedStrokes:(id)a0;
- (void)setWantsDataDetection:(BOOL)a0;
- (void)setDrawing:(id)a0 withVisibleOnscreenStrokes:(id)a1;
- (void)fetchIntersectedStrokesAtPoint:(struct CGPoint { double x0; double x1; })a0 selectionType:(long long)a1 inputType:(long long)a2 visibleOnscreenStrokes:(id)a3 completion:(id /* block */)a4;
- (void)fetchIntersectedStrokesBetweenTopPoint:(struct CGPoint { double x0; double x1; })a0 bottomPoint:(struct CGPoint { double x0; double x1; })a1 liveScrollOffset:(struct CGPoint { double x0; double x1; })a2 isRTL:(BOOL)a3 completion:(id /* block */)a4;
- (id)_firstStrokesInSelectedStrokes:(id)a0 isRTL:(BOOL)a1;
- (id)_lastStrokesInSelectedStrokes:(id)a0 isRTL:(BOOL)a1;
- (void)fetchStrokesAmbiguouslyBelowAndAboveInsertSpaceHandleWithStrokes:(id)a0 completion:(id /* block */)a1;
- (void)cleanupSessionIfNecessary;
- (void)dataDetectorQuery:(id)a0 foundItems:(id)a1;
- (void)setVisibleOnscreenStrokes:(id)a0;
- (id)fetchTranscriptionForStrokes:(id)a0 cancelBlock:(id /* block */)a1 withCompletion:(id /* block */)a2;
- (id)strokeProviderSnapshot;
- (id)transcriptionQuery;
- (void)q_teardownSession;
- (void)_dispatchSyncToRecognitionThreadIfNecessary:(id /* block */)a0;
- (void)q_createRecognitionSessionIfNecessary;
- (void)q_needRecognitionUpdateWithCancel:(BOOL)a0;
- (void)q_flushQueries;
- (void)q_updateRecognitionStateWithFinishedResult:(BOOL)a0;
- (long long)q_nextRecognitionStateForRecognitionUpdate:(BOOL)a0;
- (void)q_setupDrawingQueriesAndClearVisibleQueries;
- (id)q_groupQuery;
- (id)groupQuery;
- (void)setWantsTranscription:(BOOL)a0;
- (void)recognitionSessionDidUpdateRecognitionResult:(id)a0;
- (void)setWantsGrouping:(BOOL)a0;

@end
