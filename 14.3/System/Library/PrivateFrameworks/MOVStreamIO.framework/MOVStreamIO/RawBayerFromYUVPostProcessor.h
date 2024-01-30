@interface RawBayerFromYUVPostProcessor : DefaultPostProcessor

@property (nonatomic) BOOL rawBayerMSBReplication;

- (struct __CVBuffer { } *)processedPixelBufferFrom:(struct __CVBuffer { } *)a0 metadata:(id)a1 error:(id *)a2;
- (unsigned int)processedPixelFormat;
- (id)initWithOriginalPixelFormat:(unsigned int)a0 rawBayerMSBReplication:(BOOL)a1;

@end
