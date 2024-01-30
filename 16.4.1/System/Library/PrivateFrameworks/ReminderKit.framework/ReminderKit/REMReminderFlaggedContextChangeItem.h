@class REMReminderChangeItem;

@interface REMReminderFlaggedContextChangeItem : NSObject

@property (retain, nonatomic) REMReminderChangeItem *reminderChangeItem;
@property (nonatomic) long long flagged;

- (void).cxx_destruct;
- (id)initWithReminderChangeItem:(id)a0;

@end
