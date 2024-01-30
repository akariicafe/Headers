@class AVAssetTrack;

@interface VCPVideoTrackDecoder : NSObject {
    AVAssetTrack *_track;
}

+ (struct { int x0; int x1; })decodeDimensionsForTrack:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTrack:(id)a0;
- (struct opaqueCMSampleBuffer { } *)getNextCaptureSampleBuffer;
- (id)settings;
- (long long)status;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;

@end
