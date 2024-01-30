@interface UIKBLinearCandidateView : UIKBHandwritingCandidateView

- (void)updateCandidateKey;
- (unsigned long long)focusableVariantCount;
- (void)refreshSelectedCandidate;

@end
