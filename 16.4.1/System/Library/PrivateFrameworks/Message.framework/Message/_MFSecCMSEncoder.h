@class NSMutableData;

@interface _MFSecCMSEncoder : MFBufferedDataConsumer {
    int _SecCMSError;
    struct SecCmsEncoderStr { } *_encoder;
    struct SecCmsMessageStr { } *_message;
    NSMutableData *_singleShot;
}

- (long long)appendData:(id)a0;
- (id)data;
- (void)done;
- (void)dealloc;
- (void).cxx_destruct;

@end
