@class NSDate;

@interface EKREMCompletionStateReminderPredicate : EKREMReminderPredicate {
    NSDate *_start;
    NSDate *_end;
    BOOL _completed;
}

- (void).cxx_destruct;
- (id)initForCompletedRemindersWithCompletionDateStarting:(id)a0 ending:(id)a1 calendars:(id)a2;
- (BOOL)evaluateWithObject:(id)a0;
- (id)initForIncompleteRemindersWithDueDateStarting:(id)a0 ending:(id)a1 calendars:(id)a2;
- (id)fetchMatchingRemindersInStore:(id)a0 allLists:(id)a1 error:(id *)a2;

@end
