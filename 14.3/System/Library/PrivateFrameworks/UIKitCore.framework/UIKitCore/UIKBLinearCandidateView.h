@interface UIKBLinearCandidateView : UIKBHandwritingCandidateView

- (void)updateCandidateKey;
- (void)refreshSelectedCandidate;
- (unsigned long long)focusableVariantCount;

@end
