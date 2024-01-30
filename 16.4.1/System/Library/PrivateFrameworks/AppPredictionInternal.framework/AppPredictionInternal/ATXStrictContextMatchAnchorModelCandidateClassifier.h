@interface ATXStrictContextMatchAnchorModelCandidateClassifier : ATXNaivePositiveAnchorModelCandidateClassifier

- (BOOL)isEqual:(id)a0;
- (id)description;
- (long long)classifierType;
- (id)classifyCandidateForAnchorOccurrence:(id)a0 trainingResult:(id)a1;

@end
