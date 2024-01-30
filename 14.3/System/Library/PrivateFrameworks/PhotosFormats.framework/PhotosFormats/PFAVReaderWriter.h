@class NSString, NSURL, AVAssetWriter, AVAssetReader, NSArray, NSObject, AVAssetWriterInput, AVAsset;
@protocol OS_dispatch_queue, PFAVReaderWriterAdjustDelegate;

@interface PFAVReaderWriter : NSObject <PFRWSampleBufferChannelDelegate> {
    NSObject<OS_dispatch_queue> *_serializationQueue;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    AVAssetReader *assetReader;
    AVAssetWriter *assetWriter;
    NSArray *videoChannels;
    NSArray *passthroughChannels;
    BOOL cancelled;
    id /* block */ _progressBlock;
    id /* block */ _completionBlock;
    BOOL _writeInProgress;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _stillImagetime;
}

@property (copy, nonatomic) AVAsset *asset;
@property (retain, nonatomic) AVAssetWriterInput *metadataInput;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (copy, nonatomic) NSURL *outputURL;
@property (weak, nonatomic) id<PFAVReaderWriterAdjustDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)writeToURL:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (id)initWithAsset:(id)a0 stillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithAsset:(id)a0;
- (void)sampleBufferChannel:(id)a0 didReadSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)sampleBufferChannel:(id)a0 didReadSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 andMadeWriteSampleBuffer:(struct __CVBuffer { } *)a2;
- (void)_didLoadAVAssetValues;
- (BOOL)setUpReaderAndWriterReturningError:(id *)a0;
- (BOOL)startReadingAndWritingReturningError:(id *)a0;
- (void)readingAndWritingDidFinishSuccessfully:(BOOL)a0 withError:(id)a1;

@end
