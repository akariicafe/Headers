@interface AMSMescalFairPlay : NSObject {
    struct FPSAPContextOpaque_ { } *_context;
    struct FairPlayHWInfo_ { unsigned int IDLength; unsigned char ID[20]; } _hardwareInfo;
    long long _mescalType;
}

@property (readonly, nonatomic, getter=isComplete) BOOL complete;

- (id)signData:(id)a0 error:(id *)a1;
- (BOOL)verifyPrimeSignature:(id)a0 error:(id *)a1;
- (id)exchangeData:(id)a0 error:(id *)a1;
- (void)dealloc;
- (BOOL)verifySignature:(id)a0 forData:(id)a1 error:(id *)a2;
- (id)primingSignatureForData:(id)a0 error:(id *)a1;
- (void)_teardownSession;
- (id)initWithMescalType:(long long)a0 error:(id *)a1;
- (id)_dataWithFairPlayBytes:(const char *)a0 length:(unsigned int)a1;

@end
