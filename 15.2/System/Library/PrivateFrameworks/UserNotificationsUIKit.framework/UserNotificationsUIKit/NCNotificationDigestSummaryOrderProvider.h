@class ATXUserNotificationDigest;

@interface NCNotificationDigestSummaryOrderProvider : NCNotificationSummaryOrderProvider

@property (retain, nonatomic) ATXUserNotificationDigest *userNotificationDigest;

- (void).cxx_destruct;
- (id)atxUUID;
- (void)atxLogSummaryPlatterShownIsUpcoming:(BOOL)a0;
- (void)generateDigestForATXUserNotificationArrays:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)atxLogSummaryPlatterExpandedIsUpcoming:(BOOL)a0;

@end
