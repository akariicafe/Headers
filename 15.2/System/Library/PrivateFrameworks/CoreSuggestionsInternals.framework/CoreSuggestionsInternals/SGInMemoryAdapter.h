@class NSArray, NSString, NSMutableDictionary, NSMutableArray;

@interface SGInMemoryAdapter : NSObject <SGJournalCalendarObserver, SGJournalContactsObserver, SGJournalRemindersObserver> {
    NSMutableArray *_events;
    NSMutableDictionary *_contacts;
}

@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) NSMutableArray *reminders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addContact:(id)a0;
- (void)rejectContact:(id)a0;
- (void)orphanReminder:(id)a0;
- (void)calendarDeleted;
- (void)addEvents:(id)a0;
- (void)orphanEvent:(id)a0;
- (void)confirmOrRejectContact:(id)a0;
- (void)rejectEventFromOtherDevice:(id)a0;
- (void)confirmContact:(id)a0;
- (void)cancelEvents:(id)a0;
- (void)removeAllStoredPseudoContacts;
- (void)addEvent:(id)a0;
- (void)rejectEventFromThisDevice:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addReminder:(id)a0;
- (void)rejectReminderFromOtherDevice:(id)a0;
- (void)reminderAlarmTriggeredFromThisDevice:(id)a0;
- (void)rejectReminderFromThisDevice:(id)a0;
- (void)confirmReminderFromThisDevice:(id)a0;
- (void)cancelEvent:(id)a0;
- (void)confirmReminderFromOtherDevice:(id)a0;
- (void)confirmEventFromThisDevice:(id)a0;
- (void)confirmEventFromOtherDevice:(id)a0;
- (void)overwriteEvent:(id)a0;

@end
