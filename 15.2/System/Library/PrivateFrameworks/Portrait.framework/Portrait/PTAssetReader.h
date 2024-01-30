@class PTGlobalStabilizationMetadata, NSString, PTGlobalRenderingMetadata, AVAssetReader, PTGlobalCinematographyMetadata, PTGlobalVideoHeaderMetadata, AVAssetReaderOutputMetadataAdaptor, AVMutableVideoComposition, AVAssetReaderVideoCompositionOutput, NSMutableArray, AVAsset;

@interface PTAssetReader : NSObject {
    AVAssetReader *assetReader;
    AVAssetReaderOutputMetadataAdaptor *metadataAdaptor;
    AVMutableVideoComposition *videoComposition;
    AVAssetReaderVideoCompositionOutput *videoCompositionOutput;
    NSMutableArray *composedFrames;
    long long lastDecodedFrameIndex;
    unsigned long long _cachedAccurateFrameCount;
    PTGlobalCinematographyMetadata *_globalCinematographyMetadata;
    PTGlobalRenderingMetadata *_globalRenderingMetadata;
    PTGlobalStabilizationMetadata *_globalStabilizationMetadata;
    PTGlobalVideoHeaderMetadata *_globalVideoHeaderMetadata;
}

@property (readonly, nonatomic) AVAsset *asset;
@property (readonly, nonatomic) BOOL isReadyForReading;
@property (readonly, nonatomic) unsigned long long estimatedFrameCount;
@property (readonly, nonatomic) unsigned long long frameCount;
@property (readonly, nonatomic) unsigned long long estimatedDataRate;
@property (readonly, nonatomic) const struct opaqueCMFormatDescription { } *formatDescription;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } frameDuration;
@property (readonly, nonatomic) PTGlobalCinematographyMetadata *globalCinematographyMetadata;
@property (readonly, nonatomic) PTGlobalRenderingMetadata *globalRenderingMetadata;
@property (readonly, nonatomic) PTGlobalStabilizationMetadata *globalStabilizationMetadata;
@property (readonly, nonatomic) PTGlobalVideoHeaderMetadata *globalVideoHeaderMetadata;
@property (retain, nonatomic) NSString *colorPrimaries;
@property (retain, nonatomic) NSString *transferFunction;
@property (retain, nonatomic) NSString *YCbCrMatrix;
@property (nonatomic) BOOL is420YUV10Bit;

+ (void)initialize;

- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;
- (void)stopReadingFrames;
- (id)nextFrame;
- (BOOL)startReadingFrames:(unsigned long long)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(id *)a2;
- (void)pushComposedFrame:(id)a0;
- (BOOL)updateFormatPropertiesFromAsset:(id)a0;
- (BOOL)startReadingFrames:(unsigned long long)a0 error:(id *)a1;
- (void)startReadingFrames:(unsigned long long)a0;
- (void)_decodeGlobalMetadata;
- (void)_decodeMetadata:(id)a0;
- (id)popComposedFrame;

@end
