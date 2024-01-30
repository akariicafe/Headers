@interface EKPersistentRecurrenceRule : EKPersistentObject

+ (id)relations;
+ (id)propertyKeyForUniqueIdentifier;
+ (Class)meltedClass;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;

- (int)entityType;
- (void)setSpecifier:(id)a0;
- (id)owner;
- (void)setInterval:(long long)a0;
- (void)setCount:(unsigned long long)a0;
- (long long)interval;
- (void)setOwner:(id)a0;
- (id)UUID;
- (void)setEndDate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)specifier;
- (id)endDate;
- (void)setUUID:(id)a0;
- (id)description;
- (id)cachedEndDate;
- (id)cachedEndDateTimeZone;
- (long long)firstDayOfTheWeekRaw;
- (int)frequencyRaw;
- (void)setCachedEndDate:(id)a0;
- (void)setCachedEndDateTimeZone:(id)a0;
- (void)setFirstDayOfTheWeekRaw:(long long)a0;
- (void)setFrequencyRaw:(int)a0;

@end
