@class NSArray;

@interface MSCMSCountersignatureAttribute : NSObject <MSCMSAttributeCoder>

@property (readonly, retain) NSArray *signerInfoSet;

- (void).cxx_destruct;
- (id)encodeAttributeWithError:(id *)a0;
- (id)initWithAttribute:(id)a0 error:(id *)a1;
- (id)initWithAttribute:(id)a0 LAContext:(id)a1 error:(id *)a2;
- (BOOL)verifyCountersignatures:(id)a0 error:(id *)a1;
- (id)initWithSignerInfo:(id)a0;
- (void)addSignerInfo:(id)a0;
- (BOOL)verifyCountersignaturesAndCountersignersWithPolicies:(id)a0 verifyTime:(id)a1 signature:(id)a2 error:(id *)a3;

@end
