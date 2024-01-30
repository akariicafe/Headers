@interface SARDAsrOutcomeCandidate : SASResultCandidate

+ (id)asrOutcomeCandidate;
+ (id)asrOutcomeCandidateWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
