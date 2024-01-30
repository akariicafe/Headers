@interface PGCurationPartOfDayTrait : PGCurationTrait

@property (readonly, nonatomic) unsigned long long value;

- (id)debugDescription;
- (BOOL)isActive;
- (id)niceDescription;
- (id)initWithPartOfDay:(unsigned long long)a0;

@end
