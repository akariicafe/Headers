@class NSString, PKDrawing, CHStrokeGroupQuery, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface PKGroupQuery : PKQuery <CHQueryDelegate> {
    NSObject<OS_dispatch_queue> *_intersectionQueue;
    NSObject<OS_dispatch_queue> *_strokeGroupComputationQueue;
    NSArray *_strokeGroups;
}

@property (retain, nonatomic) CHStrokeGroupQuery *strokeGroupQuery;
@property (retain, nonatomic) PKDrawing *drawing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_strokesInLine:(id)a0 inDrawing:(id)a1;

- (void)teardown;
- (void)start;
- (void).cxx_destruct;
- (void)pause;
- (void)dealloc;
- (id)initWithRecognitionSessionManager:(id)a0;
- (void)_precalculateStrokeGroupProperties:(id)a0;
- (void)setStrokeGroups:(id)a0;
- (BOOL)_strokes:(id)a0 containsAnyStrokes:(id)a1;
- (long long)_tokenizationLevelForSelectionType:(long long)a0;
- (id)_strokesForIdentifiers:(id)a0 inDrawing:(id)a1;
- (long long)contentTypeForIntersectedStrokes:(id)a0;
- (id)strokeGroups;
- (id)_closestLineToPoint:(struct CGPoint { double x0; double x1; })a0 isTop:(BOOL)a1;
- (id)_strokesInLine:(id)a0 leftOf:(BOOL)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)_lines:(id)a0 containingStrokes:(id)a1;
- (long long)_firstLineIndexFromInitialStrokes:(id)a0;
- (id)_strokesAtLineIndex:(long long)a0 containingStrokes:(id)a1;
- (long long)_lastLineIndexFromInitialStrokes:(id)a0;
- (void)queryDidUpdateResult:(id)a0;
- (void)q_fetchStrokesForPoint:(struct CGPoint { double x0; double x1; })a0 selectionType:(long long)a1 inputType:(long long)a2 visibleOnscreenStrokes:(id)a3 completion:(id /* block */)a4;
- (void)q_fetchStrokesBetweenTopPoint:(struct CGPoint { double x0; double x1; })a0 bottomPoint:(struct CGPoint { double x0; double x1; })a1 isRTL:(BOOL)a2 completion:(id /* block */)a3;
- (id)firstStrokesInStrokes:(id)a0 isRTL:(BOOL)a1;
- (id)lastStrokesInStrokes:(id)a0 isRTL:(BOOL)a1;
- (void)q_fetchStrokesAmbiguouslyBelowAndAboveInsertSpaceHandleWithStrokes:(id)a0 completion:(id /* block */)a1;

@end
