@interface EKPersistentLocation : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (id)relations;
+ (Class)alternateUniverseClass;
+ (Class)meltedClass;

- (id)referenceFrame;
- (id)radius;
- (void)setRadius:(id)a0;
- (int)entityType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAddress:(id)a0;
- (void)setLatitude:(id)a0;
- (void)setDerivedFrom:(id)a0;
- (id)address;
- (id)latitude;
- (id)mapKitHandle;
- (id)contactLabel;
- (id)description;
- (void)setTitle:(id)a0;
- (id)routing;
- (id)semanticIdentifier;
- (id)derivedFrom;
- (void)setLongitude:(id)a0;
- (id)alarmOwner;
- (void)setContactLabel:(id)a0;
- (void)setReferenceFrame:(id)a0;
- (void)setRouting:(id)a0;
- (void)setCalendarItemOwner:(id)a0;
- (id)calendarItemOwner;
- (void)setMapKitHandle:(id)a0;
- (id)title;
- (void)setAlarmOwner:(id)a0;
- (id)longitude;

@end
