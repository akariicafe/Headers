@interface TIWordSearchHandwriting : TIWordSearch

- (void)acceptCandidate:(const void *)a0;
- (id)mecabraCreationOptionsDictionary;
- (void)updateMecabraState;
- (id)generatePredictionsWithCandidateContext:(id)a0 stringContext:(id)a1 option:(unsigned long long)a2;

@end
