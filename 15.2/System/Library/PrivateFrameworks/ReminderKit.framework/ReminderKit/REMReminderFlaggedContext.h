@class REMReminder;

@interface REMReminderFlaggedContext : NSObject

@property (retain, nonatomic) REMReminder *reminder;
@property (readonly, nonatomic) long long flagged;

- (void).cxx_destruct;
- (id)initWithReminder:(id)a0;

@end
