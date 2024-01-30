@class NSString;

@interface BurstClipStylePhoto : BurstClipStyle

@property (copy, nonatomic) NSString *transitionName;
@property (nonatomic) int transitionFrameDuration;

- (BOOL)isSupported;
- (void).cxx_destruct;
- (double)maximumDuration;
- (double)minimumDuration;
- (double)idealDuration;
- (unsigned long long)numberOfAvailableClips;
- (unsigned long long)_minimumNumberOfContainedClips;
- (unsigned long long)_idealNumberOfContainedClips;
- (double)idealContainedClipDuration;
- (double)maximumContainedClipDuration;
- (id)containedClipsWithoutTransitions;
- (unsigned long long)_maximumNumberOfContainedClips;
- (double)minimumContainedClipDuration;
- (id)containedClipsWithInTransition:(id)a0 outTransition:(id)a1;
- (void)adjustDurationsOfClips:(id)a0 withInTransition:(id)a1 outTransition:(id)a2;

@end
