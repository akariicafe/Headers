@interface EKPersistentLocation : EKPersistentObject

+ (Class)meltedClass;
+ (id)relations;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;

- (int)entityType;
- (id)longitude;
- (void)setLongitude:(id)a0;
- (id)latitude;
- (id)address;
- (id)radius;
- (id)alarmOwner;
- (void)setReferenceFrame:(id)a0;
- (id)title;
- (id)mapKitHandle;
- (void)setMapKitHandle:(id)a0;
- (id)routing;
- (id)referenceFrame;
- (id)calendarItemOwner;
- (id)description;
- (id)derivedFrom;
- (void)setAddress:(id)a0;
- (void)setLatitude:(id)a0;
- (id)contactLabel;
- (void)setContactLabel:(id)a0;
- (void)setDerivedFrom:(id)a0;
- (void)setCalendarItemOwner:(id)a0;
- (void)setAlarmOwner:(id)a0;
- (void)setRouting:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRadius:(id)a0;
- (void)setTitle:(id)a0;

@end
