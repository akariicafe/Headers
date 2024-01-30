@interface EKPersistentResourceChange : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;

- (int)entityType;
- (unsigned int)changeType;
- (id)calendar;
- (id)deleteCount;
- (id)notification;
- (id)calendarItem;
- (id)timestamp;
- (unsigned int)changedProperties;
- (id)updateCount;
- (BOOL)alerted;
- (id)changedByAddress;
- (id)changedByDisplayName;
- (id)changedByFirstName;
- (id)changedByLastName;
- (id)createCount;
- (id)deletedTitle;
- (unsigned int)publicStatus;

@end
