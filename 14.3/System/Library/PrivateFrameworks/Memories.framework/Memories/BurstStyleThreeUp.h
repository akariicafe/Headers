@class UIColor;

@interface BurstStyleThreeUp : BurstClipStylePhoto

@property (retain, nonatomic) UIColor *gapColor;
@property (retain, nonatomic) UIColor *popBackgroundColor;
@property (nonatomic) int transitionFrameDuration;

- (BOOL)isSupported;
- (void).cxx_destruct;
- (double)maximumDuration;
- (id)transitionName;
- (double)idealDuration;
- (unsigned long long)numberOfAvailableClips;
- (unsigned long long)_minimumNumberOfContainedClips;
- (unsigned long long)_idealNumberOfContainedClips;
- (double)idealContainedClipDuration;
- (double)maximumContainedClipDuration;
- (unsigned long long)numberOfPossibleClips;
- (id)containedClipsWithoutTransitions;
- (unsigned long long)_maximumNumberOfContainedClips;
- (double)minimumContainedClipDuration;
- (id)containedClipsWithInTransition:(id)a0 outTransition:(id)a1;

@end
