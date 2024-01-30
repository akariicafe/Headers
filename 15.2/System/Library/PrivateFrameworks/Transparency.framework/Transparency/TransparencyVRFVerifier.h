@class VRFPublicKey;

@interface TransparencyVRFVerifier : NSObject

@property (retain) VRFPublicKey *key;
@property (readonly) int vrfType;

+ (BOOL)verifyMessage:(id)a0 output:(id)a1 proof:(id)a2 key:(id)a3 error:(id *)a4;
+ (BOOL)verifyMessage:(id)a0 salt:(id)a1 output:(id)a2 proof:(id)a3 key:(id)a4 error:(id *)a5;
+ (id)verifierOfType:(int)a0 key:(id)a1;
+ (id)saltMessage:(id)a0 salt:(id)a1;

- (id)initWithKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)verifyMessage:(id)a0 output:(id)a1 proof:(id)a2 error:(id *)a3;
- (BOOL)verifyMessage:(id)a0 salt:(id)a1 output:(id)a2 proof:(id)a3 error:(id *)a4;

@end
