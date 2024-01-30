@class AVAssetReaderTrackOutput, AVAssetReader, NSDictionary;

@interface VCPVideoTrackStandardDecoder : VCPVideoTrackDecoder {
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_trackOutput;
    struct opaqueCMSampleBuffer { } *_nextSample;
    long long _status;
    NSDictionary *_decoderSettings;
}

- (long long)status;
- (struct opaqueCMSampleBuffer { } *)copyNextSampleBuffer;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTrack:(id)a0 timerange:(const struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1 withSettings:(id)a2 applyTransform:(BOOL)a3;
- (id)initWithTrack:(id)a0 timerange:(const struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1;

@end
