@class SPAKE2Common;

@interface SPAKE2Prover : NSObject <SPAKE2Protocol>

@property (retain) SPAKE2Common *common;

- (id)decryptMessage:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isVerified;
- (id)encryptMessage:(id)a0 error:(id *)a1;
- (id)getKey;
- (id)getMsg1WithError:(id *)a0;
- (id)getMsg2WithError:(id *)a0;
- (id)initWithSalt:(id)a0 code:(id)a1 error:(id *)a2;
- (BOOL)processMsg1:(id)a0 error:(id *)a1;
- (BOOL)processMsg2:(id)a0 error:(id *)a1;

@end
