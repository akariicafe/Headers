@class ATXUserNotificationDigest;

@interface NCNotificationDigestSummaryOrderProvider : NCNotificationSummaryOrderProvider

@property (retain, nonatomic) ATXUserNotificationDigest *userNotificationDigest;

- (id)atxUUID;
- (void).cxx_destruct;
- (void)generateDigestForATXUserNotificationArrays:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)atxLogSummaryPlatterExpandedIsUpcoming:(BOOL)a0;
- (void)atxLogSummaryPlatterShownIsUpcoming:(BOOL)a0;

@end
