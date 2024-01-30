@class NSString, AVSemanticSegmentationMatte;

@interface NUAuxiliaryImageAVSemanticSegmentationMatte : NSObject <NUAuxiliaryImage>

@property (readonly) AVSemanticSegmentationMatte *avSemanticSegmentationMatte;
@property (readonly) long long auxiliaryImageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)a0;
- (struct CGImage { } *)cgImageRef;
- (void).cxx_destruct;
- (unsigned int)pixelFormatType;
- (id)dictionaryRepresentation;
- (id)underlyingAVSemanticSegmentationMatte;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)a0;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (struct __CVBuffer { } *)cvPixelBufferRef;
- (id)initAuxiliaryImageFromAVSemanticSegmentationMatte:(id)a0;

@end
