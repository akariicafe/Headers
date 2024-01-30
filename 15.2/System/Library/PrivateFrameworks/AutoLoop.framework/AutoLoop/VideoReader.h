@class AVAssetTrack, AVAssetReader, NSArray, NSCondition, AVAssetReaderOutput, NSError, AVAsset;

@interface VideoReader : NSObject {
    BOOL _readAheadEnable;
}

@property (readonly) AVAssetReader *assetReader;
@property (readonly) AVAssetReaderOutput *trackOutput;
@property struct opaqueCMSampleBuffer { } *readaheadBuf;
@property int readaheadState;
@property (retain) NSCondition *readaheadLock;
@property struct opaqueCMSampleBuffer { } *lastFrame;
@property (readonly) float trackStart;
@property (readonly) float trackLength;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } trackStartT;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } trackLengthT;
@property float readStart;
@property float readLength;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } readStartT;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } readLengthT;
@property (readonly) int timeScale;
@property (readonly) float fps;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } minFrameDuration;
@property (readonly) unsigned int imageWidth;
@property (readonly) unsigned int imageHeight;
@property (readonly) NSError *lastError;
@property (readonly) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } preferredTransform;
@property (readonly) NSArray *formatDescriptions;
@property (readonly) BOOL fullRangeVideo;
@property (readonly) AVAsset *asset;
@property (readonly) AVAssetTrack *videoTrack;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastPresentationTime;
@property unsigned int pixelFormatOptions;
@property (setter=setReadAheadEnable:) BOOL readAheadEnable;

- (id)initWithAsset:(id)a0;
- (id)initFromFile:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (int)reset;
- (int)getFrameAsSampleBuf:(struct opaqueCMSampleBuffer **)a0;
- (int)buildAssetReader;
- (void)fireReadahead;
- (struct opaqueCMSampleBuffer { } *)nextSampleBuf;
- (int)getFrame:(struct CGImage **)a0;
- (int)getFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 exactTime:(BOOL)a1 frame:(struct opaqueCMSampleBuffer **)a2;
- (int)skipFrames:(unsigned int)a0;

@end
