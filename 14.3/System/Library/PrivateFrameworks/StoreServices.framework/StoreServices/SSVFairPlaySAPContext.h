@interface SSVFairPlaySAPContext : NSObject {
    struct FPSAPContextOpaque_ { } *_context;
    struct FairPlayHWInfo_ { unsigned int IDLength; unsigned char ID[20]; } _hardwareInfo;
    long long _version;
}

@property (readonly, nonatomic, getter=isComplete) BOOL complete;

- (id)signData:(id)a0 error:(id *)a1;
- (void)_teardownSession;
- (void)dealloc;
- (id)initWithSAPVersion:(long long)a0;
- (BOOL)verifySignature:(id)a0 forData:(id)a1 error:(id *)a2;
- (BOOL)verifyPrimeSignature:(id)a0 error:(id *)a1;
- (id)exchangeData:(id)a0 error:(id *)a1;
- (id)primingSignatureForData:(id)a0 error:(id *)a1;

@end
