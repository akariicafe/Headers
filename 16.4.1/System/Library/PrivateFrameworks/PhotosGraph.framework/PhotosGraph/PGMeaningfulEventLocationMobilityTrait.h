@interface PGMeaningfulEventLocationMobilityTrait : PGMeaningfulEventTrait

@property (readonly, nonatomic) unsigned long long value;

- (BOOL)isActive;
- (id)debugDescriptionWithMomentNode:(id)a0;
- (id)initWithMobility:(unsigned long long)a0;

@end
