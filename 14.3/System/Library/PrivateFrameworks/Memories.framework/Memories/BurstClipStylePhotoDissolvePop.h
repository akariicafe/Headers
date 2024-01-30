@interface BurstClipStylePhotoDissolvePop : BurstClipStylePhoto

- (double)maximumDuration;
- (double)minimumDuration;
- (double)idealDuration;
- (unsigned long long)_minimumNumberOfContainedClips;
- (unsigned long long)_idealNumberOfContainedClips;
- (id)containedClipsWithoutTransitions;
- (unsigned long long)_maximumNumberOfContainedClips;
- (id)containedClipsWithInTransition:(id)a0 outTransition:(id)a1;
- (void)adjustDurationsOfClips:(id)a0 withInTransition:(id)a1 outTransition:(id)a2;
- (double)minimumRegularClipDuration;
- (double)minimumLastClipDuration;
- (double)idealRegularClipDuration;
- (double)idealLastClipDuration;
- (double)maximumRegularClipDuration;
- (double)maximumLastClipDuration;
- (double)clipLastClipRatio;

@end
