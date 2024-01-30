@class NSArray, NSDictionary;
@protocol MTLTexture;

@interface SoftISPInputFrame : NSObject {
    BOOL _processed;
    int _tuningType;
    unsigned int _quadraBinningFactor;
    unsigned int _softQuadraBinningFactor;
    int _firstPixel;
    int _cfaLayout;
    int _compandingMode;
    int _sensorBitDepth;
    int _inputBitDepth;
    int _averageSensorBlackLevel;
    int _sensorHeadRoom;
    int _uncorrectedSensorBlackLevel;
    int _uncorrectedSensorHeadRoom;
    int _pipelineBlackLevel;
    int _pipelineFootRoom;
    int _pipelineHeadRoom;
    unsigned int _huemapThumbnailDownscalingFactor;
    struct opaqueCMSampleBuffer { } *_sampleBuffer;
    struct __CVBuffer { } *_pixelBuffer;
    struct __CVBuffer { } *_rawThumbnailsPixelBuffer;
    NSArray *_textures;
    NSDictionary *_rawThumbnailMetadata;
    id<MTLTexture> _rawThumbnailMainEv0;
    id<MTLTexture> _rawThumbnailSifr;
    NSDictionary *_metadata;
    NSDictionary *_processingOptions;
    NSDictionary *_registers;
    unsigned long long _uniqueID;
    union { unsigned long long frameID; struct { unsigned short captureIndex; unsigned short sensorIndex; BOOL isSIFR; BOOL isPB; char timeMachineIndex; char bracketedCaptureIndex; } ; } _frameID;
    struct { union { void /* unknown type, empty encoding */ vec; struct { int x; int y; } ; } origin; union { void /* unknown type, empty encoding */ vec; struct { unsigned int width; unsigned int height; } ; } size; } _sensorCropRect;
    struct { union { void /* unknown type, empty encoding */ vec; struct { int x; int y; } ; } origin; union { void /* unknown type, empty encoding */ vec; struct { unsigned int width; unsigned int height; } ; } size; } _sensorReadoutRect;
    struct { union { void /* unknown type, empty encoding */ vec; struct { int x; int y; } ; } origin; union { void /* unknown type, empty encoding */ vec; struct { unsigned int width; unsigned int height; } ; } size; } _validBufferRect;
    void /* unknown type, empty encoding */ _sensorBlackLevel;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _pts;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initBinnedQuadraVariantOf:(id)a0 inputTexture:(id)a1;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 uniqueID:(unsigned long long)a1 processingOptions:(id)a2;

@end
