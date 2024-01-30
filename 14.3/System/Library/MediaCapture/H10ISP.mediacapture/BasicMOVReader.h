@class AVAssetReaderTrackOutput, AVAssetReader;

@interface BasicMOVReader : NSObject {
    AVAssetReader *_reader;
    AVAssetReaderTrackOutput *_output;
}

@property (readonly) BOOL hasReachedEndOfStream;

- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (struct __CVBuffer { } *)getNextFrameTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0 error:(id *)a1;

@end
