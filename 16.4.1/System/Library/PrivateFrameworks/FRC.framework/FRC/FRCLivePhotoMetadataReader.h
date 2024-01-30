@class AVAssetReaderOutputMetadataAdaptor;

@interface FRCLivePhotoMetadataReader : NSObject {
    AVAssetReaderOutputMetadataAdaptor *_metadataOutputAdaptor;
    unsigned long long _frameIndex;
    long long _previousDisplacement;
    unsigned long long _recipe;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _droppingThreshold;
    unsigned long long _totalFrames;
    unsigned long long _initialOriginalPTS;
}

@property (nonatomic) BOOL verbose;
@property (readonly, nonatomic) unsigned long long numberOfDroppedFrames;
@property (readonly, nonatomic) unsigned long long numberOfInterpolatedFrames;

- (id)init;
- (void).cxx_destruct;
- (void)readLivePhotoMetadataFromAsset:(id)a0;
- (id)createMetadataAdaptorForAsset:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getStillImageTime:(id)a0;
- (unsigned long long)preParseMetadata;
- (void)printV3Metadata:(struct { unsigned short x0; float x1[9]; unsigned long long x2; unsigned long long x3; unsigned char x4; char x5; unsigned char x6; char x7[13]; } *)a0 frameIndex:(unsigned long long)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 isIDR:(BOOL)a3 noRecipeGap:(BOOL)a4;
- (BOOL)processLivePhotoMetadataItem:(id)a0 isIDR:(BOOL)a1 recipeAvailable:(BOOL)a2;

@end
