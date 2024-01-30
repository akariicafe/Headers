@interface PGMeaningfulEventPartOfDayTrait : PGMeaningfulEventTrait

@property (readonly, nonatomic) unsigned long long value;
@property (readonly, nonatomic) unsigned long long forbiddenValue;

- (id)initWithPartOfDay:(unsigned long long)a0;
- (BOOL)isActive;
- (id)debugDescriptionWithMomentNode:(id)a0;
- (id)initWithPartOfDay:(unsigned long long)a0 forbiddenPartOfDay:(unsigned long long)a1;

@end
