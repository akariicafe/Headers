@class AVAssetReaderOutputMetadataAdaptor;

@interface FRCLivePhotoMetadataReader : NSObject {
    AVAssetReaderOutputMetadataAdaptor *_metadataOutputAdaptor;
    unsigned long long _frameIndex;
    long long _previousDisplacement;
    unsigned long long _recipe;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _droppingThreshold;
    unsigned long long _totalFrames;
}

@property (readonly, nonatomic) unsigned long long numberOfDroppedFrames;
@property (readonly, nonatomic) unsigned long long numberOfInterpolatedFrames;

- (void).cxx_destruct;
- (id)init;
- (id)createMetadataAdaptorForAsset:(id)a0;
- (unsigned long long)preParseMetadata;
- (BOOL)processLivePhotoMetadataItem:(id)a0 isIDR:(BOOL)a1 recipeAvailable:(BOOL)a2;
- (void)readLivePhotoMetadataFromAsset:(id)a0;

@end
