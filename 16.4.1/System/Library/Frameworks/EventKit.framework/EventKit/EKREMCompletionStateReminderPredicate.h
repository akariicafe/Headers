@class NSDate;

@interface EKREMCompletionStateReminderPredicate : EKREMReminderPredicate {
    NSDate *_start;
    NSDate *_end;
    BOOL _completed;
}

- (BOOL)evaluateWithObject:(id)a0;
- (void).cxx_destruct;
- (id)initForIncompleteRemindersWithDueDateStarting:(id)a0 ending:(id)a1 calendars:(id)a2;
- (id)fetchMatchingRemindersInStore:(id)a0 allLists:(id)a1 error:(id *)a2;
- (id)initForCompletedRemindersWithCompletionDateStarting:(id)a0 ending:(id)a1 calendars:(id)a2;

@end
