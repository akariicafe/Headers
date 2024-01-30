@class NSString;

@interface EKPersistentAlarm : EKPersistentObject

@property (readonly, nonatomic) NSString *oldSemanticIdentifier;

+ (id)relations;
+ (id)propertyKeyForUniqueIdentifier;
+ (Class)meltedClass;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;

- (id)emailAddress;
- (void)setEmailAddress:(id)a0;
- (int)entityType;
- (void)setAcknowledgedDate:(id)a0;
- (id)originalAlarm;
- (id)externalData;
- (id)absoluteDate;
- (void)setCalendarItemOwner:(id)a0;
- (id)calendarOwner;
- (long long)proximity;
- (void)setAbsoluteDate:(id)a0;
- (id)urlWrapper;
- (void)setProximity:(long long)a0;
- (long long)type;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setOriginalAlarm:(id)a0;
- (id)acknowledgedDate;
- (void)setStructuredLocation:(id)a0;
- (void)setUUID:(id)a0;
- (void)setType:(long long)a0;
- (void)setExternalData:(id)a0;
- (void)setIsDefaultAlarm:(BOOL)a0;
- (void)setRelativeOffset:(id)a0;
- (id)snoozedAlarmsSet;
- (id)relativeOffset;
- (void)setCalendarOwner:(id)a0;
- (id)calendarItemOwner;
- (BOOL)isDefaultAlarm;
- (id)description;
- (void)setUrlWrapper:(id)a0;
- (id)structuredLocation;
- (void)setSnoozedAlarmsSet:(id)a0;

@end
