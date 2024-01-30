@class NSString;

@interface _DPPrioPiRapporValueRandomizer : NSObject <_DPStringRandomizer>

@property (readonly, nonatomic) double epsilon;
@property (readonly, nonatomic) unsigned long long p;
@property (readonly, nonatomic) BOOL dynamicVectorSize;
@property (readonly, nonatomic) unsigned int piRapporPrime;
@property (readonly, nonatomic) double piRapporAlpha0;
@property (readonly, nonatomic) double piRapporAlpha1;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)randomizerWithEpsilon:(double)a0 dimensionality:(unsigned long long)a1 dynamicVectorSize:(BOOL)a2 piRapporPrime:(unsigned int)a3 piRapporAlpha0:(double)a4 piRapporAlpha1:(double)a5;

- (id)randomizeStrings:(id)a0 forKey:(id)a1;
- (id)init;
- (id)randomizeWords:(id)a0 fragmentWidth:(unsigned long long)a1 forKey:(id)a2;
- (id)randomizeBitValues:(id)a0 forKey:(id)a1;
- (id)createDPPrioRecordFromPrivatizedShares:(id)a0 forKey:(id)a1 withMetadata:(id)a2 withCreationDate:(double)a3;
- (id)encodeClassIndices:(id)a0 withDimensionality:(unsigned long long)a1;
- (unsigned long long)getAllocationSizeWithPiRapporAlgorithm:(id)a0 numberOfEncodedIndices:(unsigned long long)a1;
- (id)initWithEpsilon:(double)a0 dimensionality:(unsigned long long)a1 dynamicVectorSize:(BOOL)a2 piRapporPrime:(unsigned int)a3 piRapporAlpha0:(double)a4 piRapporAlpha1:(double)a5;
- (id)randomize:(id)a0 metadata:(id)a1;
- (id)randomizeBitValues:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (id)randomizeBitVectors:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (id)randomizeVector:(id)a0 metadata:(id)a1;

@end
