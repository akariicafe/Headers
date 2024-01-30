@class AVAssetTrack;

@interface VCPVideoTrackDecoder : NSObject {
    AVAssetTrack *_track;
}

+ (struct { int x0; int x1; })decodeDimensionsForTrack:(id)a0;

- (long long)status;
- (id)settings;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTrack:(id)a0;
- (BOOL)validateDecodedFrame:(struct __CVBuffer { } *)a0 withSettings:(id)a1;
- (struct opaqueCMSampleBuffer { } *)getNextCaptureSampleBuffer;

@end
