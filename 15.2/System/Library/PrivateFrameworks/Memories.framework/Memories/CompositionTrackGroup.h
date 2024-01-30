@class AVMutableCompositionTrack, NSString, NSDictionary, AVMutableComposition, AVMutableAudioMixInputParameters, NSMutableArray;

@interface CompositionTrackGroup : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } m_cursorForMovieAudio;
    BOOL m_videoTrackInUse;
    BOOL m_shouldAddVolumePointsAsWorkaround;
}

@property (nonatomic) NSString *timePitchAlgorithm;
@property (retain, nonatomic) NSMutableArray *extraAudioTrackGroups;
@property (retain, nonatomic) struct opaqueCMFormatDescription { } *audioFormatDescription;
@property (nonatomic) BOOL seenSpeedClip;
@property (nonatomic) BOOL seenMoreThanOneASBD;
@property (retain, nonatomic) AVMutableAudioMixInputParameters *audioParameters;
@property (retain, nonatomic) NSDictionary *fmTrackInfoDict;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastRampToZeroEnd;
@property (nonatomic) BOOL isFlexMusic;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) AVMutableCompositionTrack *videoTrack;
@property (readonly, nonatomic) NSMutableArray *videoSegments;
@property (retain, nonatomic) AVMutableCompositionTrack *metaDataVideoTrack;
@property (readonly, nonatomic) NSMutableArray *metaDataVideoSegments;
@property (retain, nonatomic) AVMutableCompositionTrack *audioTrack;
@property (readonly, nonatomic) NSMutableArray *audioSegments;
@property (retain, nonatomic) NSString *preferredAudioTimePitchAlgorithm;
@property (readonly, nonatomic) int actualVideoTrackID;
@property (readonly, nonatomic) int usableVideoTrackID;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } cursor;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } cursorAtLastVideoInsertion;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timeOfLastVolumeChange;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timeOfLastRequest;
@property (nonatomic) float volumeAtLastVolumeChange;
@property (nonatomic) float volumeChangePending;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } fadeOutStart;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } fadeOutDuration;
@property (retain, nonatomic) AVMutableComposition *composition;
@property (nonatomic) BOOL isExporting;

+ (id)visualDescriptionForSegments:(id)a0;

- (id)initWithLabel:(id)a0;
- (void)apply:(id)a0;
- (BOOL)validate;
- (id)description;
- (void)markDirty;
- (void)dealloc;
- (BOOL)requestVolumeRampFromStartVolume:(float)a0 toEndVolume:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (BOOL)requestVolume:(float)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)applyPaddingToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)commitPendingVolumeToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)applyAudioMixParameters:(id)a0;
- (void)removeExtraAudioTrackGroups;
- (BOOL)containsVideoSegments;
- (BOOL)containsAudioSegments;
- (void)resetVolumeState;
- (float)linearFadeOutValueForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (float)setFadedVolumeRampFromStartVolume:(float)a0 toEndVolume:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (void)commitVolumeRampFromStartVolume:(float)a0 toEndVolume:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (BOOL)shouldCommitVolume:(float)a0;
- (BOOL)requestVolumeRampFromStartVolume:(float)a0 toEndVolume:(float)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 fillEmptySegment:(BOOL)a3;
- (BOOL)containsSegments;
- (void)addExtraAudioTrackGroup:(id)a0;
- (BOOL)asbd:(struct opaqueCMFormatDescription { } *)a0 isEqualTo:(struct opaqueCMFormatDescription { } *)a1;
- (void)applyCompositionItem:(id)a0;
- (void)applyCompositionItem:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)applyCompositionItemAsLoopedAudio:(id)a0 forTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (BOOL)shouldAddVolumePointsAsWorkaround;
- (void)applyCompositionItem:(id)a0 videoOnly:(BOOL)a1;
- (void)_updateIsFlexMusic:(id)a0;
- (void)applyCompositionItem:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 videoOnly:(BOOL)a2;
- (id)apply_version2_to_track:(id)a0 withSegments:(id)a1 assets:(id)a2;
- (void)apply_version2:(id)a0;
- (void)applyFlexAudioMix:(id)a0;
- (void)apply_version1;
- (void)fixAVFoundationsMistake;

@end
