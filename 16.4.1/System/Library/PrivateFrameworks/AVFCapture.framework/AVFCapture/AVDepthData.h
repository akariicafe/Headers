@class NSArray, AVDepthDataInternal, AVCameraCalibrationData;

@interface AVDepthData : NSObject {
    AVDepthDataInternal *_internal;
}

@property (readonly) NSArray *availableDepthDataTypes;
@property (readonly) unsigned int depthDataType;
@property (readonly) struct __CVBuffer { } *depthDataMap;
@property (readonly) long long depthDataQuality;
@property (readonly, getter=isDepthDataFiltered) BOOL depthDataFiltered;
@property (readonly) long long depthDataAccuracy;
@property (readonly) AVCameraCalibrationData *cameraCalibrationData;

+ (void)initialize;
+ (id)depthDataFromDictionaryRepresentation:(id)a0 error:(id *)a1;
+ (id)_allSupportedDepthDataPixelFormatTypes;

- (float)portraitLightingEffectStrength;
- (id)debugDescription;
- (void)dealloc;
- (id)description;
- (id)depthDataByConvertingToDepthDataType:(unsigned int)a0;
- (id)depthDataByReplacingDepthDataMapWithPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)a0;
- (struct __CVBuffer { } *)_copyPixelBufferRepresentationWithPixelFormatType:(unsigned int)a0;
- (struct __CFString { } *)auxiliaryImageType;
- (struct CGImageMetadata { } *)copyAuxiliaryMetadata;
- (id)depthBlurEffectRenderingParameters;
- (float)depthBlurEffectSimulatedAperture;
- (id)depthDataByApplyingExifOrientation:(unsigned int)a0;
- (short)depthDataVersionMajor;
- (short)depthDataVersionMinor;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 auxiliaryMetadata:(struct CGImageMetadata { } *)a1;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 depthMetadataDictionary:(id)a1;
- (float)portraitScore;
- (BOOL)portraitScoreIsHigh;

@end
