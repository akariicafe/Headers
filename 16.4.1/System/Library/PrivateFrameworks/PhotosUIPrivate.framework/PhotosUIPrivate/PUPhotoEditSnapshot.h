@class NSData, PHAdjustmentData, AVURLAsset;

@interface PUPhotoEditSnapshot : NSObject

@property (nonatomic, setter=_setWorkImageVersion:) long long workImageVersion;
@property (retain, nonatomic, setter=_setAdjustmentData:) PHAdjustmentData *adjustmentData;
@property (retain, nonatomic, setter=_setImageData:) NSData *imageData;
@property (retain, nonatomic, setter=_setBaseImageData:) NSData *baseImageData;
@property (retain, nonatomic, setter=_setVideoComplement:) AVURLAsset *videoComplement;
@property (retain, nonatomic, setter=_setBaseVideoComplement:) AVURLAsset *baseVideoComplement;

+ (void)captureSnapshotForAsset:(id)a0 mediaProvider:(id)a1 completion:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (id)_copyDataAtURL:(id)a0;
- (id)_copyAsset:(id)a0;
- (id)_copyData:(id)a0;
- (void)_copySourceData:(id)a0 destinationData:(out id *)a1 destinationURL:(out id *)a2;

@end
