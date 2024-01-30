@class AVAssetTrack, AVPlayerItemTrackInternal;

@interface AVPlayerItemTrack : NSObject {
    AVPlayerItemTrackInternal *_playerItemTrack;
}

@property (readonly, nonatomic) AVAssetTrack *assetTrack;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) float currentVideoFrameRate;

+ (id)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;

- (int)trackID;
- (void)_transferEnabledToFig;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (id)videoEnhancementFilterOptions;
- (void)_transferLoudnessInfoToFig;
- (void)dealloc;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0 readyForInspection:(BOOL)a1 trackID:(int)a2 asset:(id)a3 playerItem:(id)a4;
- (BOOL)disableColorMatching;
- (void)setLoudnessInfo:(id)a0;
- (void)setDisableColorMatching:(BOOL)a0;
- (void)setActiveHapticChannelIndex:(long long)a0;
- (unsigned long long)hash;
- (void)setVideoEnhancementFilterOptions:(id)a0;
- (id)fallbackTrack;
- (void)_transferCachedValuesToFig;
- (void)_transferVideoEnhancementOptionsToFig;
- (id)description;
- (void)setHapticVolume:(float)a0;
- (BOOL)isEqual:(id)a0;
- (id)loudnessInfo;
- (float)hapticVolume;
- (void)_transferHapticVolumeToFig;
- (void)_transferActiveHapticChannelIndexToFig;
- (id)_playerItem;
- (void)_transferDisableColorMatchingToFig;
- (id)effectiveLoudnessInfo;
- (id)_weakReferenceToPlayerItem;
- (long long)activeHapticChannelIndex;
- (void)_attachToFigPlaybackItemOfPlayerItem:(id)a0;

@end
