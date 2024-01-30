@interface MiroSmartMusicUtilities : NSObject

+ (double)normalizeGainForRendition:(id)a0;
+ (id)metadataItemAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 fromMetadataItems:(id)a1 findNearest:(BOOL)a2;
+ (id)beatMetadataItemForBeatIndex:(long long)a0 andBarIndex:(long long)a1 nearBeatMetadataItem:(id)a2 fromBeatMetadataItems:(id)a3;
+ (double)averageBarDurationForFlexAudioClipInSeconds:(id)a0;
+ (id)_peakAndLoudnessForRendition:(id)a0;
+ (id)metadataItemAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 fromMetadataItems:(id)a1;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })averageBarDurationForFlexAudioClip:(id)a0;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })durationOfOutroForFlexAudioClip:(id)a0;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })durationOfIntroForFlexAudioClip:(id)a0;

@end
