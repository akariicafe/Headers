@class NSArray, EKCalendarVisibilityManager, EKEventStore;

@interface PPEventStorageGuardedData : NSObject {
    EKEventStore *_store;
    NSArray *_calendars;
    EKCalendarVisibilityManager *_calendarVisibilityManager;
}

- (void).cxx_destruct;

@end
