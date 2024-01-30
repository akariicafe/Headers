@interface EKPersistentAlarm : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (id)relations;
+ (Class)alternateUniverseClass;
+ (Class)meltedClass;

- (void)setUUID:(id)a0;
- (long long)proximity;
- (void)setStructuredLocation:(id)a0;
- (id)snoozedAlarms;
- (id)externalData;
- (void)setProximity:(long long)a0;
- (id)originalAlarm;
- (void)setAcknowledgedDate:(id)a0;
- (void)setOriginalAlarm:(id)a0;
- (id)acknowledgedDate;
- (int)entityType;
- (void)setExternalData:(id)a0;
- (void)setExternalID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)UUID;
- (long long)alarmType;
- (id)absoluteDate;
- (void)setAbsoluteDate:(id)a0;
- (id)relativeOffset;
- (void)setRelativeOffset:(id)a0;
- (void)setAlarmType:(long long)a0;
- (BOOL)isDefaultAlarm;
- (id)calendarOwner;
- (void)setCalendarOwner:(id)a0;
- (void)setIsDefaultAlarm:(BOOL)a0;
- (void)setSnoozedAlarms:(id)a0;
- (id)description;
- (id)semanticIdentifier;
- (id)externalID;
- (id)structuredLocation;
- (void)setCalendarItemOwner:(id)a0;
- (id)calendarItemOwner;

@end
