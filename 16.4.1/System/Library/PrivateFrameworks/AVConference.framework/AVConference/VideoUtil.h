@interface VideoUtil : NSObject

+ (long long)videoResolutionForWidth:(int)a0 height:(int)a1;
+ (void)attachMetadata:(id)a0 toCVPixelBuffer:(struct __CVBuffer { } *)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustFaceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromOriginalBufferSize:(struct CGSize { double x0; double x1; })a1 toCroppedBufferSize:(struct CGSize { double x0; double x1; })a2;
+ (void)adjustFaceMetadataForPixelBuffer:(struct __CVBuffer { } *)a0 originalWidth:(unsigned long long)a1 originalHeight:(unsigned long long)a2;
+ (long long)compareVideoAspectRatioSizeA:(struct CGSize { double x0; double x1; })a0 toSizeB:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })computeResolutionForMainDisplayWithMaxScreenPixelCount:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })computeVisibleAspectRatioWithRemoteScreenAspectRatio:(struct CGSize { double x0; double x1; })a0 remoteExpectedAspectRatio:(struct CGSize { double x0; double x1; })a1 encodeWidth:(int)a2 encodeHeight:(int)a3;
+ (id)convertPixelBuffer:(struct __CVBuffer { } *)a0 toImageType:(int)a1 withAssetIdentifier:(id)a2 cameraStatusBits:(unsigned char)a3 allowTimeMetaData:(BOOL)a4;
+ (struct CGSize { double x0; double x1; })getBestCaptureSizeForEncodingSize:(struct CGSize { double x0; double x1; })a0;
+ (int)setupBufferPool:(struct __CVPixelBufferPool **)a0 width:(double)a1 height:(double)a2;
+ (struct CGSize { double x0; double x1; })sizeForVideoResolution:(long long)a0;
+ (struct __CFString { } *)typeIdentifierForImageType:(int)a0;
+ (unsigned int)videoCodecForPayload:(int)a0;

@end
