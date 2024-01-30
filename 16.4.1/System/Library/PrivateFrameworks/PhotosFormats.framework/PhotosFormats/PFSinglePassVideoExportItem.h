@class NSURL, NSFileHandle, AVAssetReaderTrackOutput, AVAssetWriterInput, NSObject, NSProgress, PFProportionalIntegralController, AVAssetWriter, AVAsset, NSString, PFSinglePassVideoExportItemStatistics, AVAssetTrack, NSArray, PFVideoExportRangeCoordinator, AVAssetReader;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;

@interface PFSinglePassVideoExportItem : NSObject

@property (retain) NSString *identifier;
@property unsigned long long state;
@property (retain) NSObject<OS_dispatch_queue> *exportItemStateQueue;
@property (retain) AVAsset *inputAsset;
@property (retain) AVAssetTrack *videoTrack;
@property (retain) NSArray *additionalTracks;
@property (retain) NSFileHandle *conversionOutputFileHandle;
@property (retain) NSURL *destinationFileURL;
@property BOOL shouldDeleteDestinationURLOnDeallocation;
@property unsigned long long outputFileLastEndOffset;
@property (nonatomic) unsigned long long targetOutputFileSize;
@property long long targetOutputMediaDataSize;
@property (retain) PFSinglePassVideoExportItemStatistics *statistics;
@property (retain) PFProportionalIntegralController *bitRateController;
@property (retain) AVAssetReader *assetReader;
@property (retain) AVAssetReaderTrackOutput *videoReaderTrackOutput;
@property (retain) NSArray *additionalReaderTrackOutputs;
@property (retain) AVAssetWriter *assetWriter;
@property (retain) AVAssetWriterInput *videoWriterInput;
@property (retain) NSArray *additionalWriterInputs;
@property (retain) NSObject<OS_dispatch_source> *outputFileSizeChangeSource;
@property unsigned long long minimumChunkLength;
@property (retain) NSProgress *progress;
@property (retain) NSObject<OS_dispatch_group> *inputReadingCompletionGroup;
@property (retain) PFVideoExportRangeCoordinator *availableRangeCoordinator;
@property struct OpaqueVTCompressionSession { } *compressionSession;
@property long long currentEncodingBitRate;
@property BOOL needsCurrentEncodingBitRateUpdate;
@property BOOL maximizePowerEfficiency;
@property BOOL didCancel;
@property (copy, nonatomic) NSArray *additionalMetadata;

- (void)_cancel;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)preflight;
- (id)bitRateControllerForTargetEncodingBitRate:(long long)a0;
- (void)configureDroppableFrameRateForCompressionSession:(struct OpaqueVTCompressionSession { } *)a0 inputWidth:(int)a1 inputHeight:(int)a2;
- (long long)estimatedOutputBitRate;
- (double)inputAssetDuration;
- (BOOL)isAPACAudioTrack:(id)a0;
- (void)notifyDataAvailableToHandler:(id /* block */)a0 ignoreMinimumChunkLength:(BOOL)a1;
- (id)outputDataInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 waitUntilAvailableWithTimeout:(unsigned long long)a1 error:(id *)a2;
- (void)processCompressedSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 presentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)setupConversionWithError:(id *)a0;
- (void)setupOutputFileSourceWithOutputAvailableHandler:(id /* block */)a0;
- (BOOL)startConversionWithError:(id *)a0 outputAvailableHandler:(id /* block */)a1;
- (void)startReadingInputAssetWithOutputAvailableHandler:(id /* block */)a0;

@end
