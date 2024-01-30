@interface HMIDESResultPackager : HMFObject

+ (id)logCategory;
+ (id)packageTrainingResult:(id)a0 privatize:(BOOL)a1 maxNorm:(double)a2 normBinCount:(unsigned long long)a3 encryptionKey:(id)a4 error:(id *)a5;

@end
