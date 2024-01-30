@class NSMutableArray, VCPVideoMetaLensSwitchAnalyzer, NSMutableData, VCPVideoMetaFocusAnalyzer, VCPVideoMetaMotionAnalyzer;

@interface VCPVideoMetaLivePhotoMetaAnalyzer : VCPVideoMetaAnalyzer {
    struct CGVector { double dx; double dy; } _prevEstimatedCenterMv;
    NSMutableData *_deSerializedMetaBuffer;
    VCPVideoMetaFocusAnalyzer *_metaFocusAnalyzer;
    VCPVideoMetaMotionAnalyzer *_metaMotionAnalyzer;
    unsigned long long _requestAnalyses;
    NSMutableArray *_metadataStabilizationArray;
    NSMutableArray *_frameTimestampArray;
    NSMutableArray *_originalFrameTimestampArray;
    NSMutableArray *_metadataItemTimestampArray;
    NSMutableArray *_adjusterArray;
    NSMutableArray *_interpolatedFrameArray;
    VCPVideoMetaLensSwitchAnalyzer *_metaLensSwitchAnalzer;
    BOOL _gyroHomographyIsValid;
    struct CGSize { double width; double height; } _gyroHomographyDimension;
}

+ (id)defaultDesiredKeys;
+ (id)referenceSoftwareStackVersion;

- (id)init;
- (void).cxx_destruct;
- (int)finalizeAnalysis;
- (float)compareNumericVersion:(id)a0 withReferenceVersion:(id)a1;
- (float)compareSoftwareStackVersion:(id)a0 withReferenceVersion:(id)a1;
- (int)convertLivePhotoBinary:(id)a0 toDictionary:(id)a1;
- (int)convertLivePhotoStruct:(struct FigLivePhotoMetadata { unsigned int x0; struct FigLivePhotoMetadataV1Struct { float x0; long long x1; float x2; float x3; float x4; float x5; float x6; float x7; char x8; char x9; unsigned short x10; unsigned int x11; struct FigLivePhotoDetectedFaceV1Struct { long long x0; float x1; float x2; float x3; float x4; int x5; short x6; unsigned short x7; } x12[0]; } x1; } *)a0 toDictionary:(id)a1;
- (struct __CFData { } *)getFirstAtomWithFourCharCode:(unsigned int)a0 fromSetupData:(struct __CFData { } *)a1;
- (struct __CFData { } *)getSetupDataFrom:(struct opaqueCMFormatDescription { } *)a0;
- (BOOL)gyroHomographyVersionIsValid:(struct opaqueCMFormatDescription { } *)a0;
- (id)initWithRequestAnalyses:(unsigned long long)a0 formatDescription:(struct opaqueCMFormatDescription { } *)a1;
- (id)privateResults;
- (int)processMetadataGroup:(id)a0 flags:(unsigned long long *)a1;
- (struct CGSize { double x0; double x1; })readGyroHomographyDimension:(struct opaqueCMFormatDescription { } *)a0;
- (id)readSoftwareStackVersion:(struct opaqueCMFormatDescription { } *)a0;

@end
