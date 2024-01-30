@interface EKPersistentAlarm : EKPersistentObject

+ (Class)meltedClass;
+ (id)relations;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;

- (int)entityType;
- (void)setExternalID:(id)a0;
- (id)emailAddress;
- (id)externalData;
- (id)urlWrapper;
- (id)structuredLocation;
- (id)UUID;
- (void)setAbsoluteDate:(id)a0;
- (void)setRelativeOffset:(id)a0;
- (id)calendarOwner;
- (void)setCalendarOwner:(id)a0;
- (void)setIsDefaultAlarm:(BOOL)a0;
- (void)setSnoozedAlarmsSet:(id)a0;
- (id)snoozedAlarmsSet;
- (id)calendarItemOwner;
- (id)originalAlarm;
- (void)setAcknowledgedDate:(id)a0;
- (void)setOriginalAlarm:(id)a0;
- (id)acknowledgedDate;
- (id)description;
- (void)setExternalData:(id)a0;
- (void)setEmailAddress:(id)a0;
- (void)setUrlWrapper:(id)a0;
- (void)setCalendarItemOwner:(id)a0;
- (void)setProximity:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (id)propertyKeyForUniqueIdentifier;
- (id)externalID;
- (void)setStructuredLocation:(id)a0;
- (void)setType:(long long)a0;
- (BOOL)isDefaultAlarm;
- (id)absoluteDate;
- (id)relativeOffset;
- (long long)proximity;
- (void)setUUID:(id)a0;

@end
