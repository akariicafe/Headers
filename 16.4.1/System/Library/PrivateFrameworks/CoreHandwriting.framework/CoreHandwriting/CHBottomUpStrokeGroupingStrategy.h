@class NSArray, NSString;

@interface CHBottomUpStrokeGroupingStrategy : CHStrokeGroupingStrategy {
    struct CGVector { double dx; double dy; } _defaultOrientationVector;
    struct CGVector { double dx; double dy; } _defaultDeviationVector;
    NSString *_strategyIdentifier;
    double _strokeDeviationCapCoeff;
    double _groupingMergingCostThresh;
    double _groupingMergingEndCostLowThresh;
    double _groupingSimilarCostThresh;
    long long _groupingContextSize;
    double _mergeEndDxCostCoeff;
    double _mergeEndDyCostCoeff;
    double _mergeEndBelowModifier;
    double _mergeEndLeftModifier;
    double _mergeMiddleDxCostCoeff;
    double _mergeMiddleDyCostCoeff;
    double _mergeMiddleBelowModifier;
    long long _splitMinimumStrokeCount;
    long long _splitMaxNaturalIndexDiffThreshold;
    BOOL _shouldLimitDefaultWritingOrientationDeviation;
    BOOL _shouldAdjustDeviationOfSmallGroups;
    BOOL _shouldCoalesceLastSubstrokes;
}

@property (readonly, nonatomic) BOOL isInlineContinuousMode;
@property (readonly, nonatomic) NSArray *textInputTargets;

+ (struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *x0; struct CGRect *x1; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *x0; } x2; })_boundingBoxesOfStrokesInGroup:(id)a0 rotatedAroundPoint:(struct CGPoint { double x0; double x1; })a1 byAngle:(double)a2;

- (void).cxx_destruct;
- (void)_applyDefaultGroupingParameters;
- (void)refineLocalWritingOrientationsForSubstrokes:(id)a0 useCoalescedCenter:(BOOL)a1;
- (void)updateLocalWritingOrientationsForSubstrokes:(id)a0 useCoalescedCenter:(BOOL)a1;
- (void)smoothLocalWritingOrientations:(void *)a0;
- (void)_applyStrictGroupingParameters;
- (id)_averageAngleAndReliabilityForStrokeGroup:(id)a0;
- (struct CGVector { double x0; double x1; })_averageVectorFromCoalescedSubstrokes:(id)a0 toSubstroke:(id)a1 withOrientation:(struct CGVector { double x0; double x1; })a2 strokeRef:(id)a3 strokeDest:(id)a4;
- (void)_getMergingEndOfLineCost:(double *)a0 mergingEndOfLineStroke:(id *)a1 forStroke:(id)a2 consistingOfSubstrokes:(id)a3 toLineGroup:(id)a4 refSubstrokeIndex:(long long)a5;
- (void)_getMergingLowerBoundCost:(double *)a0 withStrokeBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toLineGroup:(id)a2;
- (id)_lastSubstrokeCoalescedWithOverlappingSubstrokes:(id)a0 strokeDeviation:(struct CGVector { double x0; double x1; })a1;
- (id)_newTextLineStrokeGroupWithStroke:(id)a0 withSubstrokePlacements:(id)a1 reusableIDRemovedGroups:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_normalizedBoundsForWritingDirectionSortedStrokes:(id)a0 strokeWritingOrientations:(const void *)a1 firstStrokeDeviation:(struct CGVector { double x0; double x1; })a2 originalDrawing:(id *)a3 rotatedSortedStrokes:(void *)a4;
- (double)_scaleFactorForBoundsHeight:(double)a0;
- (double)_strokeGroupConfidenceForSortedSubstrokes:(id)a0 writingDirectionSortedStrokeIdentifiers:(id)a1 localStrokeWritingOrientations:(const void *)a2 averageWritingOrientation:(struct CGVector { double x0; double x1; })a3 averageStrokeDeviation:(struct CGVector { double x0; double x1; })a4;
- (id)_textLineStrokeGroupByAddingStroke:(id)a0 withSubstrokePlacements:(id)a1 intoStrokeGroup:(id)a2 mergingEndSubgroup:(BOOL)a3 bestStrokeMergeEnd:(id)a4;
- (void)_updateGroups:(id)a0 createdGroups:(id)a1 deletedGroups:(id)a2 forAddedStroke:(id)a3 substrokePlacementsByStrokeIdentifier:(id)a4 reusableIDRemovedGroups:(id)a5 trySplit:(BOOL)a6 cancellationBlock:(id /* block */)a7;
- (double)_verticalOffsetForBoundsHeight:(double)a0 andScaleFactor:(double)a1;
- (id)_writingDirectionSortedStrokeIdentifiersFromSubstrokes:(id)a0 localWritingOrientations:(void *)a1;
- (struct CGVector { double x0; double x1; })clippedWritingOrientation:(struct CGVector { double x0; double x1; })a0;
- (long long)compareDistanceInWritingSequenceOfStroke:(id)a0 andStroke:(id)a1 toReferenceStroke:(id)a2;
- (void)estimateWritingDirectionAndSortSubstrokesAccordingly:(id *)a0 averageWritingOrientation:(struct CGVector { double x0; double x1; } *)a1 averageStrokeDeviation:(struct CGVector { double x0; double x1; } *)a2;
- (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { struct CGPoint *x0; } x2; })flippedCenters:(const void *)a0 ofSubstrokes:(id)a1 maxStrokesGap:(long long)a2 begnning:(BOOL)a3;
- (void)getMergingEndOfLineCost:(double *)a0 mergingEndOfLineStroke:(id *)a1 forStroke:(id)a2 consistingOfSubstrokes:(id)a3 toLineGroup:(id)a4;
- (void)getMergingMiddleOfLineCost:(double *)a0 mergingMiddleOfLineStroke:(id *)a1 forStroke:(id)a2 consistingOfSubstrokes:(id)a3 toLineGroup:(id)a4;
- (id)initWithStrokeProvider:(id)a0 defaultWritingOrientation:(long long)a1 locales:(id)a2 isInlineContinuousMode:(BOOL)a3 inlineContinuousModeTargets:(id)a4;
- (void)mergeGroupsPostProcessing:(id)a0 createdGroups:(id)a1 deletedGroups:(id)a2;
- (id)recognizableDrawingForStrokeGroup:(id)a0 translationVector:(struct CGVector { double x0; double x1; })a1 originalDrawing:(id *)a2 orderedStrokesIDs:(id *)a3 rescalingFactor:(double *)a4;
- (BOOL)refineWritingOrientationAndResortSubstrokes:(id)a0 averageWritingOrientation:(struct CGVector { double x0; double x1; } *)a1;
- (void)sortSubstrokesByWritingDirection:(id)a0 averageWritingOrientation:(struct CGVector { double x0; double x1; } *)a1;
- (id)strategyIdentifier;
- (id)tryRegroupingStrokesInGroup:(id)a0 substrokePlacementsByStrokeIdentifier:(id)a1 cancellationBlock:(id /* block */)a2;
- (void)updateLocalStrokeDeviationsForSubstrokes:(id)a0 averageStrokeDeviation:(struct CGVector { double x0; double x1; } *)a1;
- (id)updatedGroupingResult:(id)a0 byAddingStrokes:(id)a1 removingStrokeIdentifiers:(id)a2 stableStrokeIdentifiers:(id)a3 allSubstrokesByStrokeIdentifier:(id)a4 withCancellationBlock:(id /* block */)a5;

@end
