@class NSDictionary, CHRecognitionSessionResult, NSArray;
@protocol CHStrokeProvider;

@interface CHStrokeGroupingManager : NSObject

@property (readonly, nonatomic) NSDictionary *groupingStrategiesByIdentifier;
@property (readonly, nonatomic) id<CHStrokeProvider> strokeProvider;
@property (readonly, nonatomic) CHRecognitionSessionResult *sessionLastResult;
@property (readonly, nonatomic) NSArray *locales;
@property (readonly, nonatomic) BOOL isInlineContinuousMode;
@property (readonly, nonatomic) NSArray *textInputTargets;

+ (BOOL)_isGroupableNonTextForStrokeClassification:(long long)a0;

- (void).cxx_destruct;
- (id)_greedyCombinationOfGroupingResults:(id)a0 stableStrokeIdentifiers:(id)a1 withCancellationBlock:(id /* block */)a2;
- (id)_groupsFromClusterResult:(id)a0 strokes:(id)a1 strokeClassificationsByStrokeIdentifier:(id)a2;
- (id)_simpleDrawingForStrokeGroup:(id)a0 originalDrawing:(id *)a1 orderedStrokeIDs:(id *)a2;
- (id)initWithStrokeProvider:(id)a0 sessionLastResult:(id)a1 locales:(id)a2 isInlineContinuousMode:(BOOL)a3 inlineContinuousModeTargets:(id)a4;
- (id)recognizableDrawingForStrokeGroup:(id)a0 translationVector:(struct CGVector { double x0; double x1; })a1 originalDrawing:(id *)a2 orderedStrokesIDs:(id *)a3 rescalingFactor:(double *)a4;
- (id)strokesForIdentifiers:(id)a0;
- (id)updatedGroupingResultByAddingStrokes:(id)a0 removingStrokeIdentifiers:(id)a1 orderedStrokeIdentifiers:(id)a2 strokeClassificationResult:(id)a3 cancellationBlock:(id /* block */)a4;

@end
