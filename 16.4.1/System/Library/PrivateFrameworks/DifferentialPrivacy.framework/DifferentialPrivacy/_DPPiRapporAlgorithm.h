@class _DPBiasedCoin;

@interface _DPPiRapporAlgorithm : NSObject

@property (readonly, nonatomic) unsigned int threshold;
@property (readonly, nonatomic) _DPBiasedCoin *coin;
@property (readonly, nonatomic) unsigned long long numberOfClasses;
@property (readonly, nonatomic) unsigned int prime;
@property (readonly, nonatomic) double alpha0;
@property (readonly, nonatomic) double alpha1;
@property (readonly, nonatomic) unsigned long long numberOfOtherPhi;

+ (id)piRapporWithNumberOfClasses:(unsigned long long)a0 prime:(unsigned int)a1 alpha0:(double)a2 alpha1:(double)a3;

- (id)init;
- (void).cxx_destruct;
- (id)decode:(id)a0;
- (id)encodeClassIndex:(unsigned long long)a0;
- (BOOL)encodeClassIndex:(unsigned long long)a0 coeffs:(unsigned int *)a1 phi0Buf:(unsigned int *)a2 otherPhiBuf:(unsigned int *)a3;
- (id)encodeClassIndices:(id)a0;
- (id)initWithNumberOfClasses:(unsigned long long)a0 prime:(unsigned int)a1 alpha0:(double)a2 alpha1:(double)a3;

@end
