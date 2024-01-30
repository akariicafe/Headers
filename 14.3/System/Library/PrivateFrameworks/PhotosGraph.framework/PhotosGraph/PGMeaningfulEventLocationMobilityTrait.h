@interface PGMeaningfulEventLocationMobilityTrait : PGMeaningfulEventTrait

@property (readonly, nonatomic) unsigned long long value;

- (id)initWithMobility:(unsigned long long)a0;
- (BOOL)isActive;
- (id)debugDescriptionWithMomentNode:(id)a0;

@end
