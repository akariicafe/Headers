@interface OspreyMescalSession : NSObject {
    struct FPSAPContextOpaque_ { } *_fairplayContext;
    struct FairPlayHWInfo_ { unsigned int IDLength; unsigned char ID[20]; } _hardwareInfo;
    unsigned long long _state;
}

- (id)signData:(id)a0 error:(id *)a1;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (id)_exchangeData:(id)a0 error:(id *)a1;
- (id)handshakeRequestWithCertificateData:(id)a0 error:(id *)a1;
- (BOOL)completeWithHandshakeResponse:(id)a0 error:(id *)a1;

@end
