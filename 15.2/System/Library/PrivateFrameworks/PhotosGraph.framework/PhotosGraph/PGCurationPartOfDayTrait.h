@interface PGCurationPartOfDayTrait : PGCurationTrait

@property (readonly, nonatomic) unsigned long long value;

- (BOOL)isActive;
- (id)debugDescription;
- (id)initWithPartOfDay:(unsigned long long)a0;
- (id)niceDescription;

@end
