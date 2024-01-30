@class NSArray, NSSet;

@interface EKREMReminderPredicate : NSPredicate {
    NSArray *_calendars;
    NSSet *_calendarIdentifierSet;
    BOOL noCalendarNoResult;
}

- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)a0;
- (void).cxx_destruct;
- (id)initWithCalendars:(id)a0;
- (id)initForCalendarStoreWithCalendars:(id)a0;
- (id)fetchMatchingRemindersInStore:(id)a0 allLists:(id)a1 error:(id *)a2;
- (id)remListIDsWithAllLists:(id)a0;

@end
