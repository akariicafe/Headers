@interface ICFPSAPContext : NSObject {
    struct FPSAPContextOpaque_ { } *_fairPlaySAPContext;
    struct FairPlayHWInfo_ { unsigned int IDLength; unsigned char ID[20]; } _hardwareInfo;
}

- (BOOL)processResponseWithSignatureData:(id)a0 data:(id)a1 error:(id *)a2;
- (BOOL)signData:(id)a0 returningSignatureData:(id *)a1 error:(id *)a2;
- (BOOL)exchangeWithSAPVersion:(unsigned int)a0 data:(id)a1 returningData:(id *)a2 exchangeStatus:(char *)a3 error:(id *)a4;
- (void)dealloc;
- (id)initReturningError:(id *)a0;

@end
