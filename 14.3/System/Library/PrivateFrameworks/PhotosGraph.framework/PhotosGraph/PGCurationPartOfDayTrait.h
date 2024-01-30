@interface PGCurationPartOfDayTrait : PGCurationTrait

@property (readonly, nonatomic) unsigned long long value;

- (id)initWithPartOfDay:(unsigned long long)a0;
- (BOOL)isActive;
- (id)debugDescription;
- (id)niceDescription;

@end
