@class AVAsset, AVWeakReference, NSString, NSDictionary;

@interface AVPlayerItemTrackInternal : NSObject {
    AVWeakReference *weakReferenceToPlayerItem;
    struct OpaqueFigPlaybackItem { } *figPlaybackItem;
    BOOL figPlaybackItemIsReadyForInspection;
    AVAsset *asset;
    int trackID;
    NSString *videoFieldMode;
    NSDictionary *loudnessInfo;
    NSDictionary *videoEnhancementFilterOptions;
    BOOL enabled;
    BOOL enabledWasSet;
    BOOL disableColorMatching;
    BOOL disableColorMatchingWasSet;
    long long activeHapticChannelIndex;
    BOOL activeHapticChannelIndexWasSet;
    float hapticVolume;
    BOOL hapticVolumeWasSet;
}

@end
