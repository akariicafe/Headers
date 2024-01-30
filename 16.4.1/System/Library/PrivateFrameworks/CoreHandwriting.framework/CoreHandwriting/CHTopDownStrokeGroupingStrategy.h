@class NSArray, NSString;

@interface CHTopDownStrokeGroupingStrategy : CHStrokeGroupingStrategy {
    NSString *_strategyIdentifier;
    double _minimumDrawingSize;
    double _splitCostThreshold;
    double _transitionTimeWeight;
    double _transitionTimeUpperBound;
    double _verticalDistanceWeight;
    double _leftTransitionWeight;
    double _leftTransitionUpperBound;
    double _horizontalDistanceBarrier;
    double _horizontalDistanceWeight;
    double _aspectRatioWeight;
    double _writingDirectionWeight;
    double _writingDirectionUpperBound;
    double _writingDirectionMinCoeff;
    double _minLineHeightScore;
    double _minArcLengthScore;
    double _expectedSubstrokesPerLine;
    double _minSubstrokesForSplit;
    double _targetFitnessWeight;
    BOOL _reorderStrokes;
}

@property (readonly, nonatomic) NSArray *textInputTargets;

- (void).cxx_destruct;
- (double)_accumulatedTimeDifferences:(id)a0;
- (double)_estimateSplitScore:(id)a0 withTextInputTargets:(id)a1 arcLengthsByStrokeIdentifier:(id)a2;
- (id)_findMostProbableTextInputTarget:(id)a0 forGroupBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 outOverlap:(double *)a2 outDistance:(double *)a3;
- (BOOL)_isSplitAcceptable:(id)a0 arcLengthsByStrokeIdentifier:(id)a1 outRejectionReason:(id *)a2;
- (id)_strokeGroupWithStrokes:(id)a0 orderedStrokeIdentifiers:(id)a1 previousGroups:(id)a2 shouldSearchForStableIdentifier:(BOOL)a3;
- (id)_strokeIdentifersFromStrokes:(id)a0;
- (id)initWithStrokeProvider:(id)a0 locale:(id)a1 textInputTargets:(id)a2;
- (id)recognizableDrawingForStrokeGroup:(id)a0 translationVector:(struct CGVector { double x0; double x1; })a1 originalDrawing:(id *)a2 orderedStrokesIDs:(id *)a3 rescalingFactor:(double *)a4;
- (id)strategyIdentifier;
- (id)updatedGroupingResult:(id)a0 byAddingStrokes:(id)a1 removingStrokeIdentifiers:(id)a2 stableStrokeIdentifiers:(id)a3 allSubstrokesByStrokeIdentifier:(id)a4 withCancellationBlock:(id /* block */)a5;

@end
