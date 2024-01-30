@class NSString, AVAudioMixInputParametersInternal;

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying> {
    AVAudioMixInputParametersInternal *_inputParameters;
}

@property (readonly, nonatomic) int trackID;
@property (readonly, copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property (readonly, retain, nonatomic) const struct opaqueMTAudioProcessingTap { } *audioTapProcessor;

- (id)_volumeCurveAsString;
- (void)_setScheduledAudioParameters:(id)a0;
- (void)setEffectParameters:(id)a0;
- (void)setVolume:(float)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setVolumeRampFromStartVolume:(float)a0 toEndVolume:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 rampMode:(long long)a3;
- (void)_setVolumeRampFromStartVolume:(float)a0 toEndVolume:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 rampMode:(long long)a3;
- (void)_setVolume:(float)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)getVolumeRampForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 startVolume:(float *)a1 endVolume:(float *)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a3 rampMode:(long long *)a4;
- (void)setVolumeRampFromStartVolume:(float)a0 toEndVolume:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (BOOL)getVolumeRampForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 startVolume:(float *)a1 endVolume:(float *)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a3;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)setTrackID:(int)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)_audioVolumeCurve;
- (id)effectParameters;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)setAudioTimePitchAlgorithm:(id)a0;

@end
