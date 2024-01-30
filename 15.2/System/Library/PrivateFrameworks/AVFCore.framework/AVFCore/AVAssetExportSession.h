@class NSString, AVAsset, NSURL, NSError, AVAssetExportSessionInternal;

@interface AVAssetExportSession : NSObject {
    AVAssetExportSessionInternal *_exportSession;
}

@property (readonly, nonatomic) NSString *presetName;
@property (readonly, retain, nonatomic) AVAsset *asset;
@property (copy, nonatomic) NSString *outputFileType;
@property (copy, nonatomic) NSURL *outputURL;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) float progress;

+ (struct { long long x0; int x1; unsigned int x2; long long x3; })maximumDurationForPreset:(id)a0 properties:(id)a1;
+ (id)allExportPresets;
+ (id)exportPresetsCompatibleWithAsset:(id)a0;
+ (id)exportSessionWithAsset:(id)a0 presetName:(id)a1;
+ (void)determineCompatibilityOfExportPreset:(id)a0 withAsset:(id)a1 outputFileType:(id)a2 completionHandler:(id /* block */)a3;
+ (long long)estimatedOutputFileLengthForPreset:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 properties:(id)a2;
+ (id)keyPathsForValuesAffectingEstimatedOutputFileLength;

- (id)supportedFileTypes;
- (void)setMaximizePowerEfficiency:(BOOL)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })maxDuration;
- (id)audioTimePitchAlgorithm;
- (void)setMetadata:(id)a0;
- (id)metadata;
- (void)setDirectoryForTemporaryFiles:(id)a0;
- (id)description;
- (id)videoComposition;
- (BOOL)maximizePowerEfficiency;
- (id)init;
- (void)setTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)setVideoComposition:(id)a0;
- (void)setAudioMix:(id)a0;
- (id)audioMix;
- (id)customVideoCompositor;
- (void)dealloc;
- (id)directoryForTemporaryFiles;
- (void)cancelExport;
- (void)setAudioTimePitchAlgorithm:(id)a0;
- (id)metadataItemFilter;
- (id)initWithAsset:(id)a0 presetName:(id)a1;
- (void)setMinVideoFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })minVideoFrameDuration;
- (void)estimateMaximumDurationWithCompletionHandler:(id /* block */)a0;
- (void)estimateOutputFileLengthWithCompletionHandler:(id /* block */)a0;
- (void)determineCompatibleFileTypesWithCompletionHandler:(id /* block */)a0;
- (void)AVExportSessionExportAsynchronouslyCompletionHandler;
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)a0;
- (void)setVideoFrameRateConversionAlgorithm:(id)a0;
- (void)setPreserveSyncFrames:(BOOL)a0;
- (id)videoFrameRateConversionAlgorithm;
- (BOOL)preserveSyncFrames;
- (long long)estimatedOutputFileLength;
- (void)setMetadataItemFilter:(id)a0;
- (long long)fileLengthLimit;
- (void)setFileLengthLimit:(long long)a0;
- (BOOL)canPerformMultiplePassesOverSourceMediaData;
- (void)setCanPerformMultiplePassesOverSourceMediaData:(BOOL)a0;

@end
