@class NSArray, NSSet;

@interface EKREMReminderPredicate : NSPredicate {
    NSArray *_calendars;
    NSSet *_calendarIdentifierSet;
}

- (id)predicateFormat;
- (void).cxx_destruct;
- (id)remListIDsWithAllLists:(id)a0;
- (BOOL)evaluateWithObject:(id)a0;
- (id)initWithCalendars:(id)a0;
- (id)fetchMatchingRemindersInStore:(id)a0 allLists:(id)a1 error:(id *)a2;

@end
