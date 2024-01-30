@class NSMutableData;

@interface _MFSecCMSEncoder : MFBufferedDataConsumer {
    struct SecCmsEncoderStr { } *_encoder;
    struct SecCmsMessageStr { } *_message;
    NSMutableData *_singleShot;
}

@property (readonly, nonatomic) int lastSecCMSError;

- (id)data;
- (void)dealloc;
- (long long)appendData:(id)a0;
- (id)initForSigningWithSender:(id)a0 compositionSpecification:(id)a1 error:(id *)a2;
- (id)initForEncryptionWithCompositionSpecification:(id)a0 error:(id *)a1;
- (void)_appendBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)done;

@end
