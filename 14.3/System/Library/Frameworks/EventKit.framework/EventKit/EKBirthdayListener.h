@class CalLimitingQueue, NSObject;
@protocol OS_dispatch_queue;

@interface EKBirthdayListener : NSObject <CalContactsProviderDelegate> {
    CalLimitingQueue *_updateQueue;
    NSObject<OS_dispatch_queue> *_updateJobQueue;
    BOOL _needsReset;
}

+ (BOOL)areBirthdaysEnabled;
+ (id)sharedListener;
+ (id)eventStoreProvider;

- (void)disableBirthdayCalendars;
- (void).cxx_destruct;
- (void)reset;
- (void)disableBirthdayCalendarsInStore:(id)a0;
- (id)allContactsWithBirthdays;
- (void)_insertEventsForContact:(id)a0 intoCalendar:(id)a1 inStore:(id)a2;
- (void)insertEventWithContact:(id)a0 forDateComponents:(id)a1 intoCalendar:(id)a2 inStore:(id)a3;
- (id)eventStore;
- (id)birthdayCalendarsInStore:(id)a0;
- (void)resetAllBirthdaysInStore:(id)a0;
- (void)addBirthdayCalendars;
- (void)_localeChanged;
- (id)initSingleton;
- (void)contactsReset;
- (void)contactsInserted:(id)a0 updated:(id)a1 deleted:(id)a2;
- (id)birthdayCalendarsCreateIfNeeded:(BOOL)a0 inStore:(id)a1 originalIdentifier:(id)a2 originalAlarms:(id)a3 ignoreAlarms:(BOOL)a4;
- (void)checkForFailures;

@end
