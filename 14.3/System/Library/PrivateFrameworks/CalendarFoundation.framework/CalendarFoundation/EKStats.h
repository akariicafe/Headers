@interface EKStats : NSObject

+ (BOOL)enabled;
+ (void)clearScalar:(id)a0 domain:(int)a1;
+ (void)setScalar:(id)a0 value:(long long)a1 domain:(int)a2;
+ (void)addToScalar:(id)a0 value:(long long)a1 domain:(int)a2;
+ (void)clearDistribution:(id)a0 domain:(int)a1;
+ (void)setDistribution:(id)a0 value:(double)a1 domain:(int)a2;
+ (void)pushToDistribution:(id)a0 value:(double)a1 domain:(int)a2;
+ (void)setDistribution:(id)a0 value:(double)a1 domain:(int)a2 significantDigits:(unsigned int)a3;
+ (void)pushToDistribution:(id)a0 value:(double)a1 domain:(int)a2 significantDigits:(unsigned int)a3;

- (void)commit;
- (id)initWithDomain:(int)a0;
- (id)initWithDomain:(int)a0 significantDigits:(unsigned int)a1;
- (void)clearScalar:(id)a0;
- (void)setScalar:(id)a0 value:(long long)a1;
- (void)addToScalar:(id)a0 value:(long long)a1;
- (void)clearDistribution:(id)a0;
- (void)setDistribution:(id)a0 value:(double)a1;
- (void)pushToDistribution:(id)a0 value:(double)a1;
- (void)setDistribution:(id)a0 value:(double)a1 significantDigits:(unsigned int)a2;
- (void)pushToDistribution:(id)a0 value:(double)a1 significantDigits:(unsigned int)a2;

@end
