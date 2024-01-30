@interface EKPersistentResourceChange : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (id)relations;
+ (Class)meltedClass;

- (id)notification;
- (id)timestamp;
- (int)entityType;
- (id)deleteCount;
- (unsigned int)changeType;
- (BOOL)alerted;
- (id)calendarItem;
- (id)changedByAddress;
- (id)changedByFirstName;
- (id)changedByLastName;
- (unsigned int)changedProperties;
- (unsigned int)publicStatus;
- (id)calendar;
- (id)deletedTitle;
- (id)changedByDisplayName;
- (id)createCount;
- (id)updateCount;

@end
