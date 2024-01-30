@class NSString;

@interface _DPPTValueRandomizer : NSObject <_DPStringRandomizer>

@property (nonatomic) double epsilon;
@property (nonatomic) unsigned int numGroups;
@property (nonatomic) unsigned long long mask;
@property (nonatomic) unsigned int bucketCount;
@property (nonatomic) double chancePMinusQ;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)randomizerWithEpsilon:(double)a0 numberOfGroups:(unsigned int)a1;

- (id)randomizeStrings:(id)a0 forKey:(id)a1;
- (id)init;
- (id)randomizeWords:(id)a0 fragmentWidth:(unsigned long long)a1 forKey:(id)a2;
- (id)randomizeBitValues:(id)a0 forKey:(id)a1;
- (id)initWithEpsilon:(double)a0 numberOfGroups:(unsigned int)a1;
- (id)randomize:(id)a0;

@end
