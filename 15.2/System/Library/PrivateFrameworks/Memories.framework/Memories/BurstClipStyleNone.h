@interface BurstClipStyleNone : BurstClipStyle

- (double)maximumDuration;
- (BOOL)isSupported;
- (double)minimumDuration;
- (double)idealDuration;
- (id)containedClipsWithoutTransitions;
- (id)containedClipsWithInTransition:(id)a0 outTransition:(id)a1;
- (void)adjustDurationsOfClips:(id)a0 withInTransition:(id)a1 outTransition:(id)a2;

@end
