@class NSMutableDictionary, NSMutableSet;

@interface CHMutableStrokeClassificationResult : CHStrokeClassificationResult {
    NSMutableDictionary *_strokeClassificationsByStrokeIdentifier;
    NSMutableDictionary *_substrokesByStrokeIdentifier;
    NSMutableSet *_nontextCandidates;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStrokeClassificationsByStrokeIdentifier:(id)a0 substrokesByStrokeIdentifier:(id)a1 nontextCandidates:(id)a2;
- (id)nontextCandidates;
- (id)strokeClassificationsByStrokeIdentifier;
- (id)substrokesByStrokeIdentifier;
- (void)updateByAddingClutterStroke:(id)a0;
- (void)updateByAddingNonClutterStroke:(id)a0 withAllStrokes:(id)a1 forceText:(BOOL)a2;
- (void)updateByAddingNonClutterStroke:(id)a0 withClassification:(long long)a1;
- (void)updateByRemovingStrokeIdentifier:(id)a0 withRemovedAndClutterStrokeIDs:(id)a1;
- (void)updateByTransitionedClutterStrokeIdentifier:(id)a0 withRemovedAndClutterStrokeIDs:(id)a1;
- (void)updateNonTextCandidatesByRemovingSupportFromStrokeIdentifier:(id)a0 skippingCandidatesWithStrokeIdentifier:(id)a1;

@end
