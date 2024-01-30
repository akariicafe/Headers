@class REMReminder;

@interface REMReminderSubtaskContext : NSObject

@property (retain, nonatomic) REMReminder *reminder;
@property (readonly, nonatomic) REMReminder *parentReminder;

- (id)fetchRemindersWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithReminder:(id)a0;

@end
