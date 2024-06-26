@class NSURL, NSMutableDictionary, NSDate, NSDictionary, NSObject, AVAudioMix, AVAsset, NSMutableArray, AVCustomVideoCompositorSession, AVPlayerConnection, NSString, AVPlayerItem, AVVideoComposition, AVMediaSelection, NSArray, AVWeakReference, NSError;
@protocol AVLoggingIdentifier, AVPlayerItemDelegate, NSCopying, OS_dispatch_queue, NSObject;

@interface AVPlayerItemInternal : NSObject {
    NSURL *URL;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVWeakReference *weakReference;
    NSObject<OS_dispatch_queue> *figConfigurationQueue;
    NSObject<OS_dispatch_queue> *figPlaybackItemAccessorQueue;
    NSObject<OS_dispatch_queue> *figPlaybackItemSetterQueue;
    NSObject<OS_dispatch_queue> *seekQueue;
    struct OpaqueFigSimpleMutex { } *seekIDMutex;
    struct OpaqueVTPixelBufferAttributesMediator { } *pixelBufferAttributeMediator;
    struct OpaqueCMTimebase { } *proxyUnfoldedTimebase;
    struct OpaqueCMTimebase { } *proxyFoldedTimebase;
    NSArray *automaticallyLoadedAssetKeys;
    BOOL wasInitializedWithURL;
    AVAsset *asset;
    struct OpaqueFigPlaybackItem { } *figPlaybackItem;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    NSArray *cachedTracks;
    NSArray *tracks;
    NSMutableArray *syncLayers;
    NSArray *itemOutputs;
    NSMutableArray *itemVideoOutputs;
    NSMutableDictionary *itemLegibleOutputsForKeys;
    NSMutableDictionary *itemMetadataOutputsForKeys;
    BOOL suppressesVideoLayers;
    struct OpaqueCMTimebase { } *foldedTimebase;
    struct OpaqueCMTimebase { } *unfoldedFigTimebase;
    BOOL didBecomeReadyForInspectionOfTracks;
    BOOL didBecomeReadyForInspectionOfPresentationSize;
    BOOL didBecomeReadyForInspectionOfDuration;
    BOOL figAssetDidBecomeReadyForInspectionOfMediaSelectionOptions;
    BOOL didBecomeReadyForInspectionOfRecommendedTimeOffsetFromLive;
    AVAsset *assetWithFigPlaybackItem;
    NSArray *trackIDsForAssetWithFigPlaybackItem;
    BOOL needTimedMetadataNotification;
    BOOL didBecomeReadyForBasicInspection;
    id<AVPlayerItemDelegate> delegate;
    AVAudioMix *audioMix;
    long long status;
    NSError *error;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } forwardPlaybackEndTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } reversePlaybackEndTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } advanceTimeForOverlappedPlayback;
    BOOL advanceTimeForOverlappedPlaybackWasSet;
    BOOL preservesTimeOffsetFromLive;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } configuredTimeOffsetFromLive;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } recommendedTimeOffsetFromLive;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
    BOOL seekingWaitsForVideoCompositionRendering;
    NSArray *textStyleRules;
    NSArray *textHighlightArray;
    struct __CFString { } *initialFigTimePitchAlgorithm;
    BOOL canUseNetworkResourcesForLiveStreamingWhilePaused;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumForwardBufferDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } maximumTrailingBufferDuration;
    double preferredPeakBitRate;
    int startsOnFirstEligibleVariant;
    NSArray *itemCollectors;
    NSMutableArray *itemMetadataCollectors;
    unsigned int RTCReportingFlags;
    NSDictionary *gaplessInfo;
    float soundCheckVolumeNormalization;
    float volumeAdjustment;
    NSDictionary *loudnessInfo;
    struct opaqueMTAudioProcessingTap { } *audioProcessingTap;
    BOOL initialLimitReadAhead;
    unsigned long long restrictions;
    NSString *mediaKind;
    BOOL reversesMoreVideoFramesInMemory;
    BOOL reversesMoreVideoFramesInMemoryWasSet;
    BOOL aggressivelyCachesVideoFrames;
    BOOL aggressivelyCachesVideoFramesWasSet;
    BOOL decodesAllFramesDuringOrdinaryPlayback;
    BOOL decodesAllFramesDuringOrdinaryPlaybackWasSet;
    BOOL initialContinuesPlayingDuringPrerollForSeek;
    BOOL initialContinuesPlayingDuringPrerollForRateChange;
    BOOL usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
    BOOL usesIFrameOnlyPlaybackForHighRateScaledEdits;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumIntervalForIFrameOnlyPlayback;
    BOOL minimumIntervalForIFrameOnlyPlaybackWasSet;
    float speedThresholdForIFrameOnlyPlayback;
    BOOL speedThresholdForIFrameOnlyPlaybackWasSet;
    NSDate *initialDate;
    NSDate *initialEstimatedDate;
    BOOL requiresAccessLog;
    BOOL suppressesAudioOnlyVariants;
    NSArray *imageQueueInterpolationCurve;
    BOOL imageQueueInterpolationCurveWasSet;
    BOOL blendsVideoFrames;
    BOOL blendsVideoFramesWasSet;
    BOOL appliesPerFrameHDRDisplayMetadata;
    BOOL appliesPerFrameHDRDisplayMetadataWasSet;
    NSString *videoApertureMode;
    BOOL usesMinimalLatencyForVideoCompositionRendering;
    BOOL initialAlwaysMonitorsPlayability;
    long long initialPlaybackLikelyToKeepUpTrigger;
    BOOL savesDownloadedDataToDiskWhenDone;
    BOOL networkUsuallyExceedsMaxBitRate;
    BOOL allowProgressiveSwitchUp;
    BOOL allowProgressiveStartup;
    BOOL allowProgressiveResume;
    struct CGSize { double width; double height; } IFramePrefetchTargetDimensions;
    id<NSObject, NSCopying> AVKitData;
    BOOL playHapticTracks;
    struct CGSize { double width; double height; } preferredMaximumResolution;
    struct CGSize { double width; double height; } preferredMinimumResolution;
    BOOL canPlayFastForward;
    BOOL canPlayFastReverse;
    BOOL canPlayReverse;
    BOOL canPlaySlowReverse;
    BOOL canPlaySlowForward;
    BOOL canStepForward;
    BOOL canStepBackward;
    struct CGSize { double width; double height; } presentationSize;
    BOOL playbackBufferEmpty;
    BOOL playbackBufferFull;
    BOOL playbackLikelyToKeepUp;
    BOOL restrictsAutomaticMediaSelectionToAvailableOfflineOptions;
    BOOL nonForcedSubtitlesEnabled;
    BOOL hasEnabledVideo;
    BOOL hasVideo;
    BOOL hasEnabledAudio;
    BOOL hasEnqueuedVideoFrame;
    BOOL externalProtectionRequested;
    NSArray *seekableTimeRanges;
    double seekableTimeRangesLastModifiedTime;
    NSArray *loadedTimeRanges;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } loopTimeRange;
    id<AVLoggingIdentifier> loggingIdentifier;
    AVMediaSelection *currentMediaSelection;
    BOOL needToSeekAfterCreatingFigPlaybackItem;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } initialTime;
    unsigned int initialSetTimeFlags;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } initialMinSnapTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } initialMaxSnapTime;
    unsigned int nextSeekIDToGenerate;
    int pendingSeekID;
    id /* block */ seekCompletionHandler;
    AVPlayerItem *previousItem;
    AVPlayerItem *nextItem;
    AVPlayerConnection *playerConnection;
    BOOL initialWillNeverSeekBackwardsHint;
    AVVideoComposition *videoComposition;
    AVWeakReference *clientsOriginalVideoComposition;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    void *figVideoCompositor;
    int eqPreset;
    NSDictionary *rampInOutInfo;
    NSDictionary *audibleDRMInfo;
    long long initialVariantIndex;
    NSMutableDictionary *mediaOptionsSelectedByClient;
    NSString *serviceIdentifier;
    NSArray *timedMetadata;
    NSMutableArray *handlersToCallWhenReadyForEnqueueing;
    BOOL haveInitialSamples;
    BOOL haveCPEProtector;
    BOOL didInformObserversAboutAvailabilityOfTracks;
    BOOL didFireKVOForAssetForNonStreamingItem;
    AVAudioMix *mostRecentlyAppliedAudioMix;
    BOOL audioSpatializationAllowed;
    BOOL audioSpatializationAllowedWasSet;
    unsigned long long allowedAudioSpatializationFormats;
    BOOL allowedAudioSpatializationFormatsWasSet;
    AVWeakReference *playerReference;
    BOOL didSetAssetToAssetWithFigPlaybackItem;
    struct OpaqueFigCPEProtector { } *figCPEProtector;
    NSString *videoEnhancementMode;
}

@end
