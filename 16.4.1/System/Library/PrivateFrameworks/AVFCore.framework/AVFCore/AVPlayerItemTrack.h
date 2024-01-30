@class NSArray, AVAssetTrack, AVPlayerItemTrackInternal;

@interface AVPlayerItemTrack : NSObject {
    AVPlayerItemTrackInternal *_playerItemTrack;
}

@property (readonly, nonatomic) NSArray *outputs;
@property (readonly, nonatomic) AVAssetTrack *assetTrack;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) float currentVideoFrameRate;

+ (id)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;

- (id)effectiveLoudnessInfo;
- (BOOL)_figPlaybackItemIsReadyForInspection;
- (void)setLoudnessInfo:(id)a0;
- (void)setActiveHapticChannelIndex:(long long)a0;
- (void)setVideoEnhancementFilterOptions:(id)a0;
- (void)removeOutput:(id)a0;
- (id)loudnessInfo;
- (void)_transferEnabledToFig;
- (void)_transferHapticVolumeToFig;
- (void)addOutput:(id)a0;
- (float)hapticVolume;
- (BOOL)disableColorMatching;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;
- (void)_transferActiveHapticChannelIndexToFig;
- (void)_updateTrackExtractionIDArrayProperty;
- (void)_transferDisableColorMatchingToFig;
- (void)dealloc;
- (id)_weakReferenceToPlayerItem;
- (void)_transferLoudnessInfoToFig;
- (BOOL)isEqual:(id)a0;
- (id)_playerItem;
- (int)effectiveEQPreset;
- (id)fallbackTrack;
- (void)_attachToFigPlaybackItemOfPlayerItem:(id)a0;
- (unsigned long long)hash;
- (long long)activeHapticChannelIndex;
- (id)description;
- (id)videoEnhancementFilterOptions;
- (void)setDisableColorMatching:(BOOL)a0;
- (void)_transferVideoEnhancementOptionsToFig;
- (int)trackID;
- (BOOL)willTrimShortDurationAudioSamples;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (void)setHapticVolume:(float)a0;

@end
