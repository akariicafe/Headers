@class NSString, AVSemanticSegmentationMatte;

@interface NUAuxiliaryImageAVSemanticSegmentationMatte : NSObject <NUAuxiliaryImage>

@property (readonly) AVSemanticSegmentationMatte *avSemanticSegmentationMatte;
@property (readonly) long long auxiliaryImageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct __CVBuffer { } *)cvPixelBufferRef;
- (unsigned int)pixelFormatType;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)a0;
- (id)underlyingAVSemanticSegmentationMatte;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)a0;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)initAuxiliaryImageFromAVSemanticSegmentationMatte:(id)a0;

@end
