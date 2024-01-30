@class REMStore;

@interface REMRemindersDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

+ (id)remindersFromAccountStorages:(id)a0 listStorages:(id)a1 reminderStorages:(id)a2 store:(id)a3;
+ (id)remindersFromAccountStorages:(id)a0 listStorages:(id)a1 reminderStorages:(id)a2 store:(id)a3 requestedReminderIDs:(id)a4;
+ (id)remindersFromAccountStorages:(id)a0 listStorages:(id)a1 reminderStorages:(id)a2 store:(id)a3 requestedStringIdentifiers:(id)a4 identifierSelector:(SEL)a5;
+ (id)remindersFromAccountStorages:(id)a0 listStorages:(id)a1 reminderStorages:(id)a2 store:(id)a3 showMarkedForDeleteObjects:(BOOL)a4;

- (id)initWithStore:(id)a0;
- (id)fetchRemindersMatchingPredicateDescriptor:(id)a0 sortDescriptors:(id)a1 options:(id)a2 error:(id *)a3;
- (id)fetchRemindersWithObjectIDs:(id)a0 error:(id *)a1;
- (id)fetchRemindersWithParentReminderID:(id)a0 includeUnsupported:(BOOL)a1 error:(id *)a2;
- (id)fetchAllRemindersWithExternalIdentifier:(id)a0 error:(id *)a1;
- (id)fetchRemindersWithObjectIDs:(id)a0 includeConcealed:(BOOL)a1 error:(id *)a2;
- (id)fetchReminderWithExternalIdentifier:(id)a0 inList:(id)a1 error:(id *)a2;
- (id)fetchReminderIncludingConcealedWithObjectID:(id)a0 error:(id *)a1;
- (id)fetchRemindersIncludingUnsupportedWithObjectIDs:(id)a0 error:(id *)a1;
- (id)fetchReminderWithDACalendarItemUniqueIdentifier:(id)a0 inList:(id)a1 error:(id *)a2;
- (id)fetchRemindersCountWithParentReminderID:(id)a0 error:(id *)a1;
- (id)fetchRemindersWithParentReminderIDs:(id)a0 error:(id *)a1;
- (id)fetchRemindersWithListID:(id)a0 includingSubtasks:(BOOL)a1 error:(id *)a2;
- (id)fetchObjectIDsOfRemindersWithParentReminderID:(id)a0 includeIncomplete:(BOOL)a1 includeCompleted:(BOOL)a2 isUnsupported:(BOOL)a3 error:(id *)a4;
- (id)fetchRemindersWithExternalIdentifiers:(id)a0 inList:(id)a1 error:(id *)a2;
- (id)fetchRemindersWithDACalendarItemUniqueIdentifiers:(id)a0 inList:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)fetchRemindersCountWithListID:(id)a0 error:(id *)a1;
- (id)fetchReminderWithObjectID:(id)a0 error:(id *)a1;

@end
