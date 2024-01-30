@class EKReminderStore;

@interface EKReminderFetchRequestToken : NSObject <EKFetchRequestToken, NSCopying>

@property (readonly, weak, nonatomic) EKReminderStore *reminderStore;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReminderStore:(id)a0;
- (void)cancel;

@end
