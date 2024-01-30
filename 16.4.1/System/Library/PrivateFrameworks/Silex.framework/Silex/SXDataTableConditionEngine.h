@interface SXDataTableConditionEngine : NSObject

@property (nonatomic) unsigned long long conditionCount;
@property (nonatomic) unsigned long long validConditionCount;

+ (id)engine;

- (BOOL)isValid;
- (id)description;
- (void)addConditionForEqualInteger:(unsigned long long)a0 withInteger:(unsigned long long)a1;
- (void)addConditionForEqualString:(id)a0 withString:(id)a1;
- (void)addConditionForEvenBoolean:(unsigned long long)a0 withInteger:(unsigned long long)a1;
- (void)addConditionForOddBoolean:(unsigned long long)a0 withInteger:(unsigned long long)a1;
- (unsigned long long)isEvenInteger:(long long)a0;
- (unsigned long long)isOddInteger:(long long)a0;

@end
