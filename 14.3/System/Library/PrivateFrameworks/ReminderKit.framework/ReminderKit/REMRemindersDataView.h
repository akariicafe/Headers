@class REMStore;

@interface REMRemindersDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

+ (id)remindersFromAccountStorages:(id)a0 listStorages:(id)a1 reminderStorages:(id)a2 store:(id)a3 requestedReminderIDs:(id)a4 showMarkedForDeleteObjects:(BOOL)a5;
+ (id)remindersFromAccountStorages:(id)a0 listStorages:(id)a1 reminderStorages:(id)a2 store:(id)a3 requestedStringIdentifiers:(id)a4 identifierSelector:(SEL)a5;
+ (id)remindersFromAccountStorages:(id)a0 listStorages:(id)a1 reminderStorages:(id)a2 store:(id)a3 showMarkedForDeleteObjects:(BOOL)a4;

- (id)initWithStore:(id)a0;
- (id)fetchRemindersWithDACalendarItemUniqueIdentifiers:(id)a0 inList:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)fetchRemindersWithExternalIdentifiers:(id)a0 inList:(id)a1 error:(id *)a2;
- (id)fetchRemindersWithParentReminderIDs:(id)a0 error:(id *)a1;
- (id)fetchRemindersMatchingPredicateDescriptor:(id)a0 sortDescriptors:(id)a1 options:(id)a2 error:(id *)a3;
- (id)fetchRemindersWithParentReminderID:(id)a0 error:(id *)a1;
- (id)fetchReminderWithDACalendarItemUniqueIdentifier:(id)a0 inList:(id)a1 error:(id *)a2;
- (id)fetchAllRemindersWithExternalIdentifier:(id)a0 error:(id *)a1;
- (id)fetchRemindersWithObjectIDs:(id)a0 error:(id *)a1;
- (id)fetchReminderWithObjectID:(id)a0 error:(id *)a1;
- (id)fetchReminderIncludingMarkedForDeleteWithObjectID:(id)a0 error:(id *)a1;
- (id)fetchReminderWithExternalIdentifier:(id)a0 inList:(id)a1 error:(id *)a2;
- (id)fetchRemindersWithListID:(id)a0 includingSubtasks:(BOOL)a1 error:(id *)a2;
- (id)fetchRemindersWithObjectIDs:(id)a0 includeMarkedForDelete:(BOOL)a1 error:(id *)a2;
- (id)fetchRemindersCountWithListID:(id)a0 error:(id *)a1;

@end
