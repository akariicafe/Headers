@class TransparencyVRFVerifier, NSData;

@interface VRFWitness : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyVRFVerifier *verifier;
@property (retain) NSData *message;
@property (retain) NSData *salt;
@property (nonatomic) int type;
@property (copy, nonatomic) NSData *output;
@property (copy, nonatomic) NSData *proof;

+ (id)descriptor;

- (unsigned long long)verifyWithError:(id *)a0;

@end
