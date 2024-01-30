@class AVPortraitEffectsMatteInternal;

@interface AVPortraitEffectsMatte : NSObject {
    AVPortraitEffectsMatteInternal *_internal;
}

@property (readonly) unsigned int pixelFormatType;
@property (readonly) struct __CVBuffer { } *mattingImage;

+ (void)initialize;
+ (id)portraitEffectsMatteFromDictionaryRepresentation:(id)a0 error:(id *)a1;
+ (id)_allSupportedPortraitEffectsMattePixelFormatTypes;

- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)a0;
- (id)description;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 portraitEffectsMatteMetadataDictionary:(id)a1;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 auxiliaryMetadata:(struct CGImageMetadata { } *)a1;
- (const struct CGImageMetadata { } *)copyAuxiliaryMetadata;
- (const struct __CFString { } *)auxiliaryImageType;
- (short)versionMajor;
- (short)versionMinor;
- (id)portraitEffectsMatteByApplyingExifOrientation:(unsigned int)a0;
- (id)portraitEffectsMatteByReplacingPortraitEffectsMatteWithPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;

@end
