@class NSObject, AVAssetReader, AVAssetReaderSampleReferenceOutput;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;

@interface VCPVideoTrackSyncDecoder : VCPVideoTrackDecoder {
    AVAssetReader *_assetReader;
    AVAssetReaderSampleReferenceOutput *_trackReader;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timerange;
    BOOL _launchOnce;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_semaphore> *_inputSemaphore;
    NSObject<OS_dispatch_semaphore> *_outputSemaphore;
    BOOL _cancelDecode;
    int _decodeError;
    BOOL _decodeFinished;
    int _decodedFrames;
    int _outputFrameIdx;
    struct opaqueCMSampleBuffer *_sampleBuffer[2];
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTrack:(id)a0 timerange:(const struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1;
- (long long)status;
- (int)findNextSample:(BOOL)a0 timerange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1;
- (int)decodeSample:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 sample:(struct opaqueCMSampleBuffer **)a1;
- (void)decodeTask;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;

@end
