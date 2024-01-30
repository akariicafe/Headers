@class BurstClip;

@interface BurstClipStyle : NSObject

@property (weak, nonatomic) BurstClip *burstClip;
@property (readonly, nonatomic) double minimumPhotoDuration;
@property (readonly, nonatomic) double idealPhotoDuration;
@property (readonly, nonatomic) double maximumPhotoDuration;
@property (readonly, nonatomic) double minimumVideoDuration;
@property (readonly, nonatomic) double idealVideoDuration;

- (double)maximumDuration;
- (BOOL)isSupported;
- (void).cxx_destruct;
- (int)duration;
- (double)minimumDuration;
- (double)idealDuration;
- (int)projectFrameRate;
- (id)sourceClips;
- (void)turnOffKenBurnsForClips:(id)a0;
- (id)containedClipsWithoutTransitions;
- (id)containedClipsWithInTransition:(id)a0 outTransition:(id)a1;
- (void)adjustDurationsOfClips:(id)a0 withInTransition:(id)a1 outTransition:(id)a2;
- (double)projectAspectRatio;

@end
