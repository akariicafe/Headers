@class NSString;

@interface AVSemanticSegmentationMatte : NSObject {
    NSString *_matteType;
    struct __CVBuffer { } *_pixelBuffer;
    int _version;
}

@property (readonly) NSString *matteType;
@property (readonly) unsigned int pixelFormatType;
@property (readonly) struct __CVBuffer { } *mattingImage;

+ (void)initialize;
+ (id)_allSupportedSemanticSegmentationMattePixelFormatTypes;
+ (id)_allSupportedSemanticSegmentationMatteTypes;
+ (id)semanticSegmentationMatteFromImageSourceAuxiliaryDataType:(struct __CFString { } *)a0 dictionaryRepresentation:(id)a1 error:(id *)a2;

- (void)dealloc;
- (id)description;
- (id)initWithType:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 semanticSegmentationMatteMetadataDictionary:(id)a2;
- (id)initWithType:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 auxiliaryMetadata:(const struct CGImageMetadata { } *)a2;
- (const struct CGImageMetadata { } *)copyAuxiliaryMetadata;
- (const struct __CFString { } *)auxiliaryImageType;
- (id)semanticSegmentationMatteByApplyingExifOrientation:(unsigned int)a0;
- (id)debugDescription;
- (short)versionMajor;
- (short)versionMinor;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)a0;
- (id)semanticSegmentationMatteByReplacingSemanticSegmentationMatteWithPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;

@end
