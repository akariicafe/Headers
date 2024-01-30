@interface PGMeaningfulEventNumberTrait : PGMeaningfulEventTrait

@property (readonly, nonatomic) double value;

- (BOOL)isActive;
- (id)debugDescriptionWithMomentNode:(id)a0;
- (id)initWithNumberValue:(double)a0;

@end
