@class NSArray, AVAsset, AVAssetTrack;

@interface PIVideoReframeMetadataExtractor : NSObject {
    AVAsset *_asset;
    AVAssetTrack *_videoTrack;
    AVAssetTrack *_mdataTrack;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } ndcMetadataTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } pxlMetadataTransform;
}

@property (readonly, nonatomic) NSArray *timedMetadataArray;

+ (BOOL)canProvideMetadataForAVAsset:(id)a0;

- (id)extractMetadata;
- (id)init;
- (void).cxx_destruct;
- (struct CGVector { double x0; double x1; })centerMotionVectorFromMetadata:(const struct FigLivePhotoMetadata { unsigned int x0; struct FigLivePhotoMetadataV1Struct { float x0; long long x1; float x2; float x3; float x4; float x5; float x6; float x7; char x8; char x9; unsigned short x10; unsigned int x11; struct FigLivePhotoDetectedFaceV1Struct { long long x0; float x1; float x2; float x3; float x4; int x5; short x6; unsigned short x7; } x12[0]; } x1; } *)a0;
- (id)initWithAVAsset:(id)a0;
- (struct CGVector { double x0; double x1; })motionBlurVectorFromMetadata:(const struct FigLivePhotoMetadata { unsigned int x0; struct FigLivePhotoMetadataV1Struct { float x0; long long x1; float x2; float x3; float x4; float x5; float x6; float x7; char x8; char x9; unsigned short x10; unsigned int x11; struct FigLivePhotoDetectedFaceV1Struct { long long x0; float x1; float x2; float x3; float x4; int x5; short x6; unsigned short x7; } x12[0]; } x1; } *)a0;
- (void)overwriteTrackingMetadataWithPlist:(id)a0;
- (id)subjectsFromMetadata:(const struct FigLivePhotoMetadata { unsigned int x0; struct FigLivePhotoMetadataV1Struct { float x0; long long x1; float x2; float x3; float x4; float x5; float x6; float x7; char x8; char x9; unsigned short x10; unsigned int x11; struct FigLivePhotoDetectedFaceV1Struct { long long x0; float x1; float x2; float x3; float x4; int x5; short x6; unsigned short x7; } x12[0]; } x1; } *)a0;
- (struct { void /* unknown type, empty encoding */ x0[3]; })trajectoryeHomographyFromMetadata:(const struct FigLivePhotoMetadata { unsigned int x0; struct FigLivePhotoMetadataV1Struct { float x0; long long x1; float x2; float x3; float x4; float x5; float x6; float x7; char x8; char x9; unsigned short x10; unsigned int x11; struct FigLivePhotoDetectedFaceV1Struct { long long x0; float x1; float x2; float x3; float x4; int x5; short x6; unsigned short x7; } x12[0]; } x1; } *)a0 containsV3Metadata:(BOOL *)a1;

@end
