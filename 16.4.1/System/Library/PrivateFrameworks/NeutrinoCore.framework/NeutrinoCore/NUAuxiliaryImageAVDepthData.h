@class NSString, AVDepthData;

@interface NUAuxiliaryImageAVDepthData : NSObject <NUAuxiliaryImage>

@property (readonly) AVDepthData *avDepthData;
@property (readonly) long long auxiliaryImageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned int)pixelFormatType;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)a0;
- (struct CGImage { } *)cgImageRef;
- (id)underlyingAVDepthData;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)a0;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (struct __CVBuffer { } *)cvPixelBufferRef;
- (id)initAuxiliaryImageFromAVDepthData:(id)a0;

@end
