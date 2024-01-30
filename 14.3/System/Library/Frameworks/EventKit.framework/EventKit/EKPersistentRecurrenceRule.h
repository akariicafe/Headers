@interface EKPersistentRecurrenceRule : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (id)relations;
+ (Class)alternateUniverseClass;
+ (Class)meltedClass;

- (void)setSpecifier:(id)a0;
- (void)setUUID:(id)a0;
- (id)cachedEndDate;
- (void)setFirstDayOfTheWeekRaw:(long long)a0;
- (int)entityType;
- (void)setCount:(unsigned long long)a0;
- (id)specifier;
- (id)owner;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)interval;
- (void)setInterval:(long long)a0;
- (id)UUID;
- (int)frequency;
- (void)setFrequency:(int)a0;
- (void)setOwner:(id)a0;
- (id)description;
- (void)setEndDate:(id)a0;
- (long long)firstDayOfTheWeekRaw;
- (unsigned long long)count;
- (id)endDate;

@end
