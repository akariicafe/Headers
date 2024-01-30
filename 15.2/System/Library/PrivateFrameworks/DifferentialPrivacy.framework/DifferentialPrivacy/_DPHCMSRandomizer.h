@class NSString;

@interface _DPHCMSRandomizer : NSObject <_DPStringRandomizer>

@property (readonly, nonatomic) double epsilon;
@property (readonly, nonatomic) unsigned long long m;
@property (readonly, nonatomic) unsigned long long k;
@property (readonly, nonatomic) double fragmentEpsilon;
@property (readonly, nonatomic) unsigned long long fragmentM;
@property (readonly, nonatomic) unsigned long long fragmentK;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)randomizerWithEpsilon:(double)a0 bitCount:(unsigned long long)a1 hashFunctionCount:(unsigned long long)a2;
+ (id)randomizerWithEpsilon:(double)a0 bitCount:(unsigned long long)a1 hashFunctionCount:(unsigned long long)a2 fragmentEpsilon:(double)a3 fragmentBitCount:(unsigned long long)a4 fragmentHashFunctionCount:(unsigned long long)a5;

- (id)initWithEpsilon:(double)a0 bitCount:(unsigned long long)a1 hashFunctionCount:(unsigned long long)a2 fragmentEpsilon:(double)a3 fragmentBitCount:(unsigned long long)a4 fragmentHashFunctionCount:(unsigned long long)a5;
- (id)randomizeWords:(id)a0 fragmentWidth:(unsigned long long)a1 forKey:(id)a2;
- (id)init;
- (id)randomizeStrings:(id)a0 forKey:(id)a1;
- (id)initWithEpsilon:(double)a0 bitCount:(unsigned long long)a1 hashFunctionCount:(unsigned long long)a2;
- (id)randomizeBitValues:(id)a0 forKey:(id)a1;
- (id)hcmsSampleForString:(id)a0;
- (id)hcmsSampleForFragment:(id)a0;

@end
