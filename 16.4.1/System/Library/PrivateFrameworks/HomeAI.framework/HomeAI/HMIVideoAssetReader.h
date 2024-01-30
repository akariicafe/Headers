@class NSString, AVAsset, AVAssetReader, NSMutableArray;

@interface HMIVideoAssetReader : HMIVideoNode <HMFLogging> {
    AVAsset *_asset;
    AVAssetReader *_assetReader;
    struct __CFArray { } *_trackSamples;
    NSMutableArray *_trackOutputs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithAsset:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (struct opaqueCMSampleBuffer { } *)_copyNextSampleBufferFromTrackOutput:(id)a0;
- (BOOL)_createOutputsForAsset:(id)a0 readVideo:(BOOL)a1 readAudio:(BOOL)a2;
- (BOOL)checkAndSaveCrashReportWithData:(id)a0;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBufferWithTrackIndexOutput:(unsigned long long *)a0;
- (id)initWithAsset:(id)a0 readVideoTrack:(BOOL)a1 readAudioTrack:(BOOL)a2;

@end
