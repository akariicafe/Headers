@interface ATXStrictContextMatchAnchorModelCandidateClassifier : ATXNaivePositiveAnchorModelCandidateClassifier

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)classifyCandidateForAnchorOccurrence:(id)a0 trainingResult:(id)a1;
- (long long)classifierType;

@end
