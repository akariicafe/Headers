@class MiroAutoEditLogger, NSArray, NSDictionary, Project, MiroBlueprint;

@interface MiroAutoEditAudioLayoutController : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastBeatTime;
@property (retain, nonatomic) MiroBlueprint *blueprint;
@property (retain, nonatomic) NSDictionary *freezeRanges;
@property (nonatomic) BOOL isFirstAutoEdit;
@property (retain, nonatomic) Project *project;
@property (retain, nonatomic) NSArray *layoutClips;
@property (retain, nonatomic) MiroAutoEditLogger *logger;

- (void).cxx_destruct;
- (void)applyJAndLCuts;
- (void)rollCutsToBeats;
- (void)applyClipVolumes;
- (void)applyBackgroundAudioVolume;
- (id)_applyFrozenVolumeAndReturnRemainingItems;
- (void)_applyComputedVolumesForClips:(id)a0;
- (void)_enumerateClipsWithAudio:(id)a0 usingBlock:(id /* block */)a1;
- (void)analyzeLoudness:(id)a0;
- (BOOL)_hasVoiceAndFacesForClip:(id)a0 gatherLoudness:(id *)a1 peak:(id *)a2 voiceRanges:(id *)a3;
- (BOOL)_hasMusic:(id)a0;
- (unsigned long long)_computeMuteStateForClip:(id)a0 hasAnalysis:(BOOL)a1 hasVoice:(BOOL)a2 hasVoiceAndFaces:(BOOL)a3 hasMusic:(BOOL)a4;
- (void)_computeVolumesForClip:(id)a0 loudnessValues:(id)a1 peakValues:(id)a2 returnNormalVolume:(float *)a3 returnDimmedVolume:(float *)a4;
- (BOOL)_clipLimitsRoll:(id)a0;
- (id)_onsetDrivenInterestingBeatsForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 metadataDict:(id)a1;
- (id)_segmentAndBeatsBasedInterestingBeatsForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 metadataDict:(id)a1;
- (id)_rollCutsToBeatsWithGranularity:(id)a0 excludingTimes:(id)a1;
- (id)_interestingBeatTimedMetaItemsForFlexAudioClip:(id)a0 forFrameTime:(int)a1 withGranularity:(id)a2;
- (BOOL)_attemptToRollEditFromTime:(int)a0 toTime:(int)a1 firstClip:(id)a2 secondClip:(id)a3 failureReasons:(id)a4 allowSlack:(BOOL)a5;
- (unsigned long long)indexOfClipInLayoutClips:(id)a0;
- (id)applyAudioPolishToProject:(id)a0 blueprint:(id)a1 freezeRanges:(id)a2 isFirstAutoEdit:(BOOL)a3 layoutClips:(id)a4;
- (id)_timedMetadataItemAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forFlexAudioClip:(id)a1 withIdentifier:(id)a2;

@end
