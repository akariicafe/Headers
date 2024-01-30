@class AVPortraitEffectsMatteInternal;

@interface AVPortraitEffectsMatte : NSObject {
    AVPortraitEffectsMatteInternal *_internal;
}

@property (readonly) unsigned int pixelFormatType;
@property (readonly) struct __CVBuffer { } *mattingImage;

+ (void)initialize;
+ (id)_allSupportedPortraitEffectsMattePixelFormatTypes;
+ (id)portraitEffectsMatteFromDictionaryRepresentation:(id)a0 error:(id *)a1;

- (id)portraitEffectsMatteByApplyingExifOrientation:(unsigned int)a0;
- (id)portraitEffectsMatteByReplacingPortraitEffectsMatteWithPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (void)dealloc;
- (id)description;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 portraitEffectsMatteMetadataDictionary:(id)a1;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 auxiliaryMetadata:(struct CGImageMetadata { } *)a1;
- (const struct CGImageMetadata { } *)copyAuxiliaryMetadata;
- (const struct __CFString { } *)auxiliaryImageType;
- (id)debugDescription;
- (short)versionMajor;
- (short)versionMinor;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)a0;

@end
