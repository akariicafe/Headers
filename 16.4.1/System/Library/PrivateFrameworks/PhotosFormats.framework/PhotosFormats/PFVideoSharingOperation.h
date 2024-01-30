@class NSDate, NSString, NSURL, NSError, PFAssetAdjustments, NSArray, AVAssetExportSession, AVAudioMix, NSObject, CLLocation, AVVideoComposition, AVAsset;
@protocol OS_dispatch_queue;

@interface PFVideoSharingOperation : NSOperation {
    AVAsset *_videoAsset;
    AVAudioMix *_audioMix;
    AVVideoComposition *_videoComposition;
    NSArray *_videoMetadata;
    NSObject<OS_dispatch_queue> *_externalIsolation;
    AVAssetExportSession *_exportSession;
    BOOL _beganExport;
    BOOL _operationSuccess;
    NSError *_operationError;
}

@property (copy, nonatomic, setter=_setVideoURL:) NSURL *videoURL;
@property (retain, nonatomic, setter=_setAdjustments:) PFAssetAdjustments *_adjustments;
@property (nonatomic, setter=_setSuccess:) BOOL success;
@property (retain, nonatomic, setter=_setOperationError:) NSError *operationError;
@property (copy, nonatomic) NSURL *outputDirectoryURL;
@property (copy, nonatomic) NSString *outputFilename;
@property (nonatomic) BOOL shouldStripMetadata;
@property (nonatomic) BOOL shouldStripLocation;
@property (copy, nonatomic) CLLocation *customLocation;
@property (copy, nonatomic) NSDate *customDate;
@property (nonatomic) BOOL shouldStripCaption;
@property (copy, nonatomic) NSString *customCaption;
@property (nonatomic) BOOL shouldStripAccessibilityDescription;
@property (copy, nonatomic) NSString *customAccessibilityLabel;
@property (copy, nonatomic) NSString *exportPreset;
@property (copy, nonatomic) NSString *exportFileType;
@property (readonly, nonatomic) float progress;
@property (readonly, copy, nonatomic) NSURL *resultingFileURL;

+ (id)operationErrorWithCode:(long long)a0 underlyingError:(id)a1 withDescription:(id)a2;

- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)_ensureVideoProperties;
- (BOOL)_runExport;
- (void)_validateMetadata;
- (id)initWithVideoURL:(id)a0 adjustmentData:(id)a1;

@end
