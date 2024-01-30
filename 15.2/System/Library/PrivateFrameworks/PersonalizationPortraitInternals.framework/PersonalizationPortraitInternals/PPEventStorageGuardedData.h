@class EKTimedEventStorePurger, NSSet;

@interface PPEventStorageGuardedData : NSObject {
    EKTimedEventStorePurger *_ekStorePurger;
    NSSet *_calendarIdentifiers;
    NSSet *_invisibleCalendarIdentifiers;
}

- (id)ekStore;
- (void).cxx_destruct;

@end
