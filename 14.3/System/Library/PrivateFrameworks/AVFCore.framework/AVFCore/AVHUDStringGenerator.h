@class NSString, AVPlayer, NSNumber;

@interface AVHUDStringGenerator : NSObject {
    NSString *_playerItemURL;
    NSString *_assetType;
    NSString *_sessionID;
    NSString *_configurationGroup;
    NSString *_trackFormatDescriptions;
    NSNumber *_refreshRate;
    NSString *_videoRange;
    NSNumber *_videoApproximateDisplaySizeHeight;
    NSNumber *_videoApproximateDisplaySizeWidth;
    NSNumber *_presentationSizeHeight;
    NSNumber *_presentationSizeWidth;
    NSNumber *_currentFrameRate;
    NSNumber *_nominalFrameRate;
    NSNumber *_networkBandiwdth;
    NSNumber *_averageVideoBitrate;
    NSNumber *_averageAudioBitrate;
    NSString *_assetTrackInfo;
    NSNumber *_peakIndicatedBitrate;
    NSNumber *_averageIndicatedBitrate;
    NSNumber *_variantIndex;
    NSNumber *_totalFrameDrops;
    NSNumber *_decoderFrameDrops;
    NSNumber *_imageQueueFrameDrops;
    NSNumber *_bufferedVideoPlayed;
    NSNumber *_bufferedVideoRemaining;
    NSString *_customPerfInfo;
    NSNumber *_totalStalls;
}

@property (weak) AVPlayer *player;
@property (nonatomic) BOOL spatialDiagnostics;
@property (nonatomic) BOOL captureCompleteURI;
@property (nonatomic) long long prevVariantIdx;
@property (nonatomic) long long prevStallCount;
@property (nonatomic) long long totalStallCount;
@property (readonly, nonatomic) NSString *formattedDisplayString;
@property (readonly, nonatomic) NSNumber *displayResolutionHeight;
@property (readonly, nonatomic) NSNumber *displayResolutionWidth;
@property (readonly, nonatomic) NSNumber *audioSpatializationMode;

+ (id)descriptionStringForBitRate:(double)a0;
+ (id)descriptionStringForFormatOfTrack:(id)a0;
+ (id)descriptionStringForVideoRangeOfFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
+ (id)descriptionStringForTracksOfPlayerItem:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)update;
- (void)updateFromPlayer;
- (void)updateFromPlayerItem;

@end
