@class NSString;

@interface NUAuxiliaryImageRawBuffer : NSObject <NUAuxiliaryImage>

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (retain, nonatomic) struct CGImageMetadata { } *metadata;
@property (readonly) long long auxiliaryImageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct __CVBuffer { } *)cvPixelBufferRef;
- (void)dealloc;
- (unsigned int)pixelFormatType;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)a0;
- (id)auxiliaryImageByApplyingExifOrientation:(unsigned int)a0;
- (id)auxiliaryImageByReplacingAuxiliaryImageWithPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 auxiliaryImageType:(long long)a1;

@end
