@interface UIKBLinearCandidateView : UIKBHandwritingCandidateView

- (unsigned long long)focusableVariantCount;
- (id)getConfiguration;
- (void)refreshSelectedCandidate;
- (void)refreshSelectedCandidateAnimated:(BOOL)a0;
- (void)updateCandidateKey;

@end
