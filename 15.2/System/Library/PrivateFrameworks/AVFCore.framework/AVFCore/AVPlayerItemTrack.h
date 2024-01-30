@class NSArray, AVAssetTrack, AVPlayerItemTrackInternal;

@interface AVPlayerItemTrack : NSObject {
    AVPlayerItemTrackInternal *_playerItemTrack;
}

@property (readonly, nonatomic) NSArray *outputs;
@property (readonly, nonatomic) AVAssetTrack *assetTrack;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) float currentVideoFrameRate;

+ (id)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;

- (int)trackID;
- (id)videoEnhancementFilterOptions;
- (void)_transferDisableColorMatchingToFig;
- (void)removeOutput:(id)a0;
- (void)setActiveHapticChannelIndex:(long long)a0;
- (void)_transferLoudnessInfoToFig;
- (BOOL)willTrimShortDurationAudioSamples;
- (long long)activeHapticChannelIndex;
- (void)_updateTrackExtractionIDArrayProperty;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (void)setLoudnessInfo:(id)a0;
- (void)addOutput:(id)a0;
- (void)setDisableColorMatching:(BOOL)a0;
- (void)setVideoEnhancementFilterOptions:(id)a0;
- (void)setHapticVolume:(float)a0;
- (void)_transferHapticVolumeToFig;
- (void)_transferVideoEnhancementOptionsToFig;
- (void)_transferActiveHapticChannelIndexToFig;
- (id)description;
- (id)loudnessInfo;
- (id)_playerItem;
- (BOOL)isEqual:(id)a0;
- (id)effectiveLoudnessInfo;
- (void)_transferEnabledToFig;
- (id)_weakReferenceToPlayerItem;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;
- (float)hapticVolume;
- (BOOL)disableColorMatching;
- (void)_attachToFigPlaybackItemOfPlayerItem:(id)a0;
- (int)effectiveEQPreset;
- (unsigned long long)hash;
- (id)fallbackTrack;
- (void)dealloc;
- (void)_transferCachedValuesToFig;

@end
