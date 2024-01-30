@interface TIWordSearchShapeBased : TIWordSearch

- (BOOL)canHandleKeyHitTest;
- (void)updateMecabraState;
- (BOOL)addTopCandidateForCode:(id)a0 option:(unsigned long long)a1 autoconvertedCandidates:(id)a2 candidateRefsDictionary:(id)a3;
- (id)autoconvertLongestValidPrefixes:(id)a0 option:(unsigned long long)a1 candidateResultSet:(id)a2 autoconvertedCandidateArray:(id *)a3;
- (BOOL)validateCode:(id)a0 withOption:(unsigned long long)a1;

@end
