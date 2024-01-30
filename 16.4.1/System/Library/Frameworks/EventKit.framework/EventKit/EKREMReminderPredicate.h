@class NSArray, NSSet;

@interface EKREMReminderPredicate : NSPredicate {
    NSArray *_calendars;
    NSSet *_calendarIdentifierSet;
    BOOL noCalendarNoResult;
}

- (BOOL)evaluateWithObject:(id)a0;
- (id)predicateFormat;
- (void).cxx_destruct;
- (id)fetchMatchingRemindersInStore:(id)a0 allLists:(id)a1 error:(id *)a2;
- (id)initForCalendarStoreWithCalendars:(id)a0;
- (id)initWithCalendars:(id)a0;
- (id)remListIDsWithAllLists:(id)a0;

@end
