@class SPAKE2Common;

@interface SPAKE2Prover : NSObject <SPAKE2Protocol>

@property (retain) SPAKE2Common *common;

- (id)getKey;
- (void).cxx_destruct;
- (BOOL)isVerified;
- (id)decryptMessage:(id)a0 error:(id *)a1;
- (id)getMsg1WithError:(id *)a0;
- (BOOL)processMsg1:(id)a0 error:(id *)a1;
- (id)getMsg2WithError:(id *)a0;
- (BOOL)processMsg2:(id)a0 error:(id *)a1;
- (id)encryptMessage:(id)a0 error:(id *)a1;
- (id)initWithSalt:(id)a0 code:(id)a1 error:(id *)a2;

@end
