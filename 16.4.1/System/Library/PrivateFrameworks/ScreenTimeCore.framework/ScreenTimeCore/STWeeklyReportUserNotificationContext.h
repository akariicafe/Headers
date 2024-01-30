@class NSString, NSNumber, NSData;

@interface STWeeklyReportUserNotificationContext : STUserNotificationContext

@property (retain, nonatomic) NSString *notificationBodyKey;
@property (nonatomic) double deltaScreenTimeUsage;
@property (copy, nonatomic) NSNumber *totalUsage;
@property (retain, nonatomic) NSData *weeklyReportData;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)setDeltaScreenTimeUsage:(double)a0 totalUsage:(id)a1;

@end
