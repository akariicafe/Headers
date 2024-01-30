@interface EKPersistentResourceChange : EKPersistentObject

+ (Class)meltedClass;
+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (int)entityType;
- (id)calendar;
- (id)calendarItem;
- (id)changedByAddress;
- (id)changedByFirstName;
- (id)changedByLastName;
- (unsigned int)changedProperties;
- (unsigned int)publicStatus;
- (BOOL)alerted;
- (id)deletedTitle;
- (id)changedByDisplayName;
- (id)createCount;
- (id)timestamp;
- (id)notification;
- (unsigned int)changeType;
- (id)deleteCount;
- (id)updateCount;

@end
