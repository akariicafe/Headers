@class NSString, NSArray, NSDictionary, NSObject;
@protocol FlexSongAssetProviderProtocol;

@interface FlexSong : FlexSongBackend {
    NSDictionary *_analysisData;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _cachedNaturalDuration;
    NSArray *_unloadedMainSegments;
}

@property (readonly, nonatomic) NSString *audioFileExtension;
@property (readonly, nonatomic) NSObject<FlexSongAssetProviderProtocol> *assetProvider;
@property (readonly, nonatomic) NSArray *mainSegments;
@property (readonly, nonatomic) NSArray *crossFadeSegments;
@property (readonly, nonatomic) NSArray *introSegments;
@property (readonly, nonatomic) NSArray *bodySegments;
@property (readonly, nonatomic) NSArray *outroSegments;
@property (readonly, nonatomic) NSArray *transSegments;

+ (id)loadSongInFolderWithPath:(id)a0;
+ (id)numberToString:(long long)a0;
+ (long long)_findMaxLengthInSamplesToReserveForOutroSegment:(id)a0 withOptions:(id)a1;
+ (long long)_findEarlyFadeStartOffsetInSamplesForOutroSegment:(id)a0 withOptions:(id)a1;
+ (long long)_findMinLengthInSamplesForEarlyFadeOutForOutroSegment:(id)a0 withOptions:(id)a1;
+ (long long)_durationInSamplesToReserveForOutroSegment:(id)a0 withOptions:(id)a1;
+ (id)outroInfoForClipPlaylist:(id)a0;
+ (BOOL)_transitionIsPossibleFromSegment:(id)a0 toSegment:(id)a1 forBodyClipPlaylist:(id)a2;

- (BOOL)isLoaded;
- (id)analysisData;
- (BOOL)canPlay;
- (id)description;
- (void).cxx_destruct;
- (id)idealDurations;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })naturalDuration;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minimumDuration;
- (id)encodeAsDictionary;
- (void)_setupInitialAssets:(id)a0;
- (BOOL)verifyRendition:(id)a0 forDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 failureReason:(id *)a2;
- (id)renditionForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1 testingContext:(id)a2;
- (id)timedMetadataItemsWithIdentifier:(id)a0 forRendition:(id)a1;
- (id)initWithDictionary:(id)a0 assets:(id)a1;
- (void)_cacheSegmentsByType;
- (id)initCommonWithUID:(id)a0 songName:(id)a1 artistName:(id)a2 tagIDs:(id)a3 keywords:(id)a4 hidden:(BOOL)a5 sampleRate:(long long)a6 mainSegments:(id)a7 crossFadeSegments:(id)a8 audioFileExtension:(id)a9 audioEncoderPresetName:(id)a10 metadataVersion:(long long)a11 customOptions:(id)a12;
- (void)_loadAnalysisData;
- (id)_naturalDurationAssemblyList;
- (long long)_sampleDurationOfClipPlaylist:(id)a0;
- (void)_loadSegments;
- (id)_segmentsforType:(unsigned long long)a0;
- (unsigned long long)_highestIndexForSegmentType:(unsigned long long)a0;
- (id)_segmentsForIndex:(unsigned long long)a0 andType:(unsigned long long)a1;
- (id)_sortFlexSegmentsShortestToLongest:(id)a0;
- (id)_shortestSegmentsForType:(unsigned long long)a0;
- (id)_transitionSegmentForSegmentInfo:(id)a0 toSegmentInfo:(id)a1 fromBarIndex:(long long)a2 inSegmentList:(id)a3;
- (id)_shortestSegmentForType:(unsigned long long)a0;
- (id)_longestSegmentForType:(unsigned long long)a0;
- (BOOL)_updateTransitionBodySegmentsForAssemblyList:(id)a0 usingNewSegment:(id)a1 indexOfNewTransitionSegment:(id)a2;
- (BOOL)_addOutroSegmentsToAssemblyList:(id)a0 forDuration:(long long)a1 allowTrim:(BOOL)a2 testingContext:(id)a3;
- (BOOL)_addIntroSegmentsToAssemblyList:(id)a0 forDuration:(long long)a1 testingContext:(id)a2;
- (BOOL)_addSegment:(id)a0 withDuration:(long long)a1 toAssemblyList:(id)a2 timeRemaining:(long long)a3 reusedSegment:(id *)a4 indexofNewSegment:(long long *)a5;
- (void)_sequenceBodySegmentList:(id)a0 forIndexes:(id)a1;
- (BOOL)_addSegment:(id)a0 withDuration:(long long)a1 toAssemblyList:(id)a2 indexOfNewSegment:(long long *)a3;
- (void)_removeSegmentInfo:(id)a0 fromAssemblyList:(id)a1;
- (BOOL)_removeUnpermittedTransitionsInAssemblyList:(id)a0 final:(BOOL)a1 testingContext:(id)a2 removedIndexes:(id)a3 conflictList:(id)a4;
- (BOOL)_removeUnpermittedTransitionsInAssemblyList:(id)a0 final:(BOOL)a1 testingContext:(id)a2 removedIndexes:(id)a3;
- (BOOL)_addBodySegmentsForAssemblyList:(id)a0 forDuration:(long long)a1 unusedDuration:(long long *)a2 testingContext:(id)a3 timedOut:(BOOL *)a4;
- (long long)_minOutroDuration;
- (long long)_maxOutroDuration;
- (BOOL)_buildIntroAndOutroOnlySegmentAssemblyList:(id)a0 forDuration:(long long)a1 testingContext:(id)a2;
- (id)_clipPlaylistForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1 testingContext:(id)a2;
- (id)_fullSongLoopedClipPlaylistForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withOptions:(id)a1 testingContext:(id)a2;
- (BOOL)_buildSegmentAssemblyList:(id)a0 forDuration:(long long)a1 withOptions:(id)a2 testingContext:(id)a3;
- (long long)_samplesForDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)_validateAuthoringIssuesInRendition:(id)a0 failureReason:(id *)a1;
- (BOOL)_validateStructureForRendition:(id)a0 failureReason:(id *)a1;
- (BOOL)_validateTransitionsInRendition:(id)a0 failureReason:(id *)a1;
- (BOOL)_verifyAssetsForSegment:(id)a0 withFailureReason:(id *)a1;
- (id)initWithUID:(id)a0 songName:(id)a1 artistName:(id)a2 tagIDs:(id)a3 keywords:(id)a4 hidden:(BOOL)a5 sampleRate:(long long)a6 mainSegments:(id)a7 crossFadeSegments:(id)a8 assets:(id)a9 audioFileExtension:(id)a10 audioEncoderPresetName:(id)a11 metadataVersion:(long long)a12 customOptions:(id)a13;
- (id)_longestSegmentsForType:(unsigned long long)a0;
- (id)_transitionSegmentForSegmentInfo:(id)a0 fromBarIndex:(long long)a1 inSegmentList:(id)a2;
- (long long)_minBodySegmentDuration;
- (long long)_maxIntroDuration;
- (long long)_minIntroDuration;
- (long long)_actualOutroDurationForAssemblyList:(id)a0 currentDuration:(long long)a1;
- (long long)_minimumPermittedIntroAndOutroDuration;
- (BOOL)_rebuildBodySegmentsInAssemblyList:(id)a0 forDuration:(long long)a1 unusedDuration:(long long *)a2 testingContext:(id)a3;
- (BOOL)verifyAssetsWithFailureReason:(id *)a0;

@end
