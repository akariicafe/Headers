@class AVAsset, AVWeakReference, NSString, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

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
    NSMutableArray *sampleBufferOutputs;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
}

@end
