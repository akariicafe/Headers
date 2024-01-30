@class NSString, AVPortraitEffectsMatte;

@interface NUAuxiliaryImageAVPortraitEffectsMatte : NSObject <NUAuxiliaryImage>

@property (readonly) AVPortraitEffectsMatte *avPortraitEffectsMatte;
@property (readonly) long long auxiliaryImageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct __CVBuffer { } *)cvPixelBufferRef;
- (unsigned int)pixelFormatType;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)a0;
- (id)underlyingAVPortraitEffectsMatte;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)a0;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)initAuxiliaryImageFromAVPortraitEffectMatte:(id)a0;

@end
