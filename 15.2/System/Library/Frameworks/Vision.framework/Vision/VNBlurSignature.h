@interface VNBlurSignature : NSObject {
    void *_signatureData;
}

+ (id)computeBlurSignatureForGrayscaleImage:(struct __CVBuffer { } *)a0 error:(id *)a1;

- (void)setSignatureData:(void *)a0;
- (void)dealloc;
- (id)initWithSignatureData:(void *)a0;
- (void *)getSignatureData;

@end
