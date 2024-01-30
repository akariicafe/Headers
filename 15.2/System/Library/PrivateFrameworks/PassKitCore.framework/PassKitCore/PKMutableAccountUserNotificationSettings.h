@class NSDecimalNumber;

@interface PKMutableAccountUserNotificationSettings : PKAccountUserNotificationSettings

@property (nonatomic) BOOL transactionNotificationsEnabled;
@property (retain, nonatomic) NSDecimalNumber *transactionNotificationThreshold;
@property (retain, nonatomic) NSDecimalNumber *monthlySpendNotificationThreshold;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
