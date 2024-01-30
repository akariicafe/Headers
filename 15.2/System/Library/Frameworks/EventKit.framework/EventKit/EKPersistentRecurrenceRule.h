@interface EKPersistentRecurrenceRule : EKPersistentObject

+ (Class)meltedClass;
+ (id)relations;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;

- (int)entityType;
- (void)setOwner:(id)a0;
- (void)setEndDate:(id)a0;
- (long long)firstDayOfTheWeekRaw;
- (void)setFirstDayOfTheWeekRaw:(long long)a0;
- (id)cachedEndDate;
- (id)endDate;
- (id)specifier;
- (id)UUID;
- (void)setFrequency:(int)a0;
- (void)setSpecifier:(id)a0;
- (void)setInterval:(long long)a0;
- (id)description;
- (long long)interval;
- (id)owner;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)a0;
- (int)frequency;
- (void)setUUID:(id)a0;

@end
