@class VNRecognizeDocumentElementsRequestElementConfiguration;

@interface VNRecognizeDocumentElementsRequestConfiguration : VNImageBasedRequestConfiguration

@property unsigned long long imageCropAndScaleOption;
@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *documentElements;
@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *textElements;
@property (readonly) VNRecognizeDocumentElementsRequestElementConfiguration *machineReadableCodeElements;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;
- (void).cxx_destruct;

@end
