@interface PGMeaningfulEventNumberTrait : PGMeaningfulEventTrait

@property (readonly, nonatomic) double value;

- (BOOL)isActive;
- (id)initWithNumberValue:(double)a0;
- (id)debugDescriptionWithMomentNode:(id)a0;

@end
