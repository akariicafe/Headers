@interface EKPersistentLocation : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;

- (int)entityType;
- (id)radius;
- (id)referenceFrame;
- (void)setRadius:(id)a0;
- (void)setAddress:(id)a0;
- (void)setReferenceFrame:(id)a0;
- (void)setCalendarItemOwner:(id)a0;
- (void)setLatitude:(id)a0;
- (id)longitude;
- (id)latitude;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLongitude:(id)a0;
- (id)address;
- (id)calendarItemOwner;
- (id)title;
- (void)setRouting:(id)a0;
- (id)description;
- (void)setTitle:(id)a0;
- (id)mapKitHandle;
- (void)setMapKitHandle:(id)a0;
- (id)contactLabel;
- (void)setContactLabel:(id)a0;
- (void)setDerivedFrom:(id)a0;
- (id)routing;
- (id)alarmOwner;
- (id)derivedFrom;
- (void)setAlarmOwner:(id)a0;

@end
