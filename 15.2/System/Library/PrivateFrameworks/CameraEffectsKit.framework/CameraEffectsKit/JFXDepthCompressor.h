@class JFXVideoEncoderInterface;

@interface JFXDepthCompressor : NSObject {
    JFXVideoEncoderInterface *_videoEncoderInterface;
    struct opaqueCMFormatDescription { } *_previousFormatDescription;
}

@property (readonly, nonatomic) int depthCodecType;

+ (id)decapsulatePayload:(id)a0;
+ (id)encapsulatePayload:(id)a0;
+ (id)NSDataFromFloatDepth32:(struct __CVBuffer { } *)a0;
+ (id)NSDataFromDepthMapInsideAVDepthData:(id)a0;
+ (id)fakeXMPDataIfNotFound;
+ (id)fakeAuxDepthInfoDictionaryForCVPixelBuffer:(struct __CVBuffer { } *)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDepthCodecType:(int)a0;
- (id)depthOutputSettingsForDepthDimensions:(struct { int x0; int x1; })a0;
- (const struct opaqueCMFormatDescription { } *)depthFormatDescriptionForDepthDimensions:(struct { int x0; int x1; })a0;
- (id)compressAVDepthData:(id)a0 timingInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })a1 error:(id *)a2;
- (id)compressDepthMapCVPixelBuffer:(struct __CVBuffer { } *)a0 timingInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })a1 error:(id *)a2;
- (id)compressAVDepthData_Photo:(id)a0 timingInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })a1 error:(id *)a2;
- (id)compressAVDepthData_LZ:(id)a0 timingInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })a1 error:(id *)a2;
- (id)compressAVDepthData_BGRA:(id)a0 timingInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })a1 error:(id *)a2;
- (id)compressAVDepthData_HEVC10:(id)a0 timingInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })a1 error:(id *)a2;
- (unsigned int)getPayloadTypeOrSize:(id)a0 offsetPointer:(unsigned long long *)a1;
- (id)hevcSEIPayloadHeaderForPayloadType:(int)a0 payloadSize:(unsigned long long)a1;
- (id)mutableCopyExtensionsDictionaryCopyFromAVDepthData:(id)a0;
- (id)hevcSEIMessageDataWithDepthXMPMetadata:(id)a0 isPrefixSEI:(BOOL)a1 nuh_layer_id:(int)a2 nuh_temporal_id_plus1:(int)a3;
- (id)depthSampleBufferAppendingDepthMetadata:(id)a0 depthSampleBufferFromCodec:(struct opaqueCMSampleBuffer { } *)a1;
- (struct __CVBuffer { } *)copyDepthBufferAsBGRA:(struct __CVBuffer { } *)a0;
- (id)hevcSEIPayload:(id)a0;
- (id)depthSampleBufferWithNewHVCCWithDepthMetadata:(id)a0 depthSampleBufferFromCodec:(struct opaqueCMSampleBuffer { } *)a1;

@end
