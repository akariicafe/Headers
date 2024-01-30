@class SGSqlEntityStore, NSString, REMStore;

@interface SGRemindersAdapter : NSObject <SGJournalRemindersObserver> {
    REMStore *_reminderStore;
}

@property (weak, nonatomic) SGSqlEntityStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_remindersFoundInAppsListInREMStore:(id)a0;
+ (id)constructNotesForReminder:(id)a0;
+ (BOOL)reminderHasDuplicate:(id)a0 usingStore:(id)a1;
+ (id)reminderPredicateForReminder:(id)a0;
+ (unsigned long long)remindersCreatedBetweenStartDate:(id)a0 endDate:(id)a1;

- (void).cxx_destruct;
- (void)addReminder:(id)a0;
- (void)confirmReminderFromOtherDevice:(id)a0;
- (void)orphanReminder:(id)a0;
- (void)rejectReminder:(id)a0;
- (BOOL)_deleteReminder:(id)a0 usingReminderStore:(id)a1;
- (id)_remRemindersAssociatedWithStorageReminder:(id)a0 remStore:(id)a1;
- (id)_remRemindersAssociatedWithTitle:(id)a0 sourceUniqueIdentifier:(id)a1 usingStore:(id)a2;
- (BOOL)_saveReminder:(id)a0 usingReminderStore:(id)a1;
- (void)confirmReminderFromThisDevice:(id)a0;
- (id)initWithSGSqlEntityStore:(id)a0;
- (id)initWithSGSqlEntityStore:(id)a0 andREMStore:(id)a1;
- (void)rejectReminderFromOtherDevice:(id)a0;
- (void)rejectReminderFromThisDevice:(id)a0;
- (void)reminderAlarmTriggeredFromThisDevice:(id)a0;
- (id)sourceUniqueIdentifierForStorageReminder:(id)a0;

@end
