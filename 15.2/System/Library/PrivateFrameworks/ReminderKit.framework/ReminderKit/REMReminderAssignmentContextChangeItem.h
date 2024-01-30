@class REMReminderChangeItem, NSSet, REMAssignment, NSMutableSet;

@interface REMReminderAssignmentContextChangeItem : NSObject

@property (retain, nonatomic) REMReminderChangeItem *reminderChangeItem;
@property (retain, nonatomic) NSMutableSet *mutableAssignments;
@property (readonly, nonatomic) REMAssignment *currentAssignment;
@property (readonly, nonatomic) NSSet *assignments;

- (void).cxx_destruct;
- (void)addAssignment:(id)a0;
- (id)addAssignmentWithAssigneeID:(id)a0 originatorID:(id)a1 status:(long long)a2;
- (void)removeAllAssignments;
- (id)initWithReminderChangeItem:(id)a0;
- (id)addAssignmentWithAssignee:(id)a0 originator:(id)a1 status:(long long)a2;
- (void)removeAssignment:(id)a0;

@end
