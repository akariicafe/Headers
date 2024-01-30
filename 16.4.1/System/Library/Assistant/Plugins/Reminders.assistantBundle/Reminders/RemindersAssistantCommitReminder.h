@class NSString;

@interface RemindersAssistantCommitReminder : SADomainObjectCommit <AFServiceCommand>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performWithCompletion:(id /* block */)a0;
- (id)commitReminder:(id)a0;
- (id)_validateReminder:(id)a0;
- (id)updateReminderFromSAReminder:(id)a0 withSaveRequest:(id)a1 fromStore:(id)a2 failure:(id *)a3;
- (id)createReminderFromSAReminder:(id)a0 withSaveRequest:(id)a1 fromStore:(id)a2 failure:(id *)a3;
- (id)_validateList:(id)a0;
- (id)commitList:(id)a0;
- (id)listForSAReminder:(id)a0 fromStore:(id)a1;
- (id)locationAlarmForSAReminderLocationTrigger:(id)a0 forAccountCapabilities:(id)a1 failure:(id *)a2;
- (void)setActionFromFromSAPayload:(id)a0 onChangeItem:(id)a1;
- (void)setAlarmsForSAReminder:(id)a0 onChangeItem:(id)a1 failure:(id *)a2;
- (void)setDateTimeAlarmForSAReminderDateTimeTrigger:(id)a0 onChangeItem:(id)a1;
- (void)setDueDateComponentForSAReminder:(id)a0 onChangeItem:(id)a1;
- (void)setLocationAlarmForSAReminderLocationTrigger:(id)a0 onChangeItem:(id)a1 failure:(id *)a2;
- (void)setRecurrenceRuleForSAReminder:(id)a0 onChangeItem:(id)a1 failure:(id *)a2;
- (void)setUserActivityFromFromSAPayload:(id)a0 onChangeItem:(id)a1 failure:(id *)a2;

@end
