@class AVMutableScheduledAudioParametersInternal;

@interface AVMutableScheduledAudioParameters : AVScheduledAudioParameters {
    AVMutableScheduledAudioParametersInternal *_mutableScheduledParametersInternal;
}

+ (id)scheduledAudioParameters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setVolume:(float)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setVolumeRampFromStartVolume:(float)a0 toEndVolume:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (void)setVolumeRampFromStartVolume:(float)a0 toEndVolume:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 rampMode:(long long)a3;

@end
