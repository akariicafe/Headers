@class NCNotificationSummaryContentProvider, NCNotificationSummaryPlatterView, ATXMissedNotificationRanking;

@interface NCNotificationMissedSummaryOrderProvider : NCNotificationSummaryOrderProvider

@property (retain, nonatomic) NCNotificationSummaryPlatterView *summaryPlatterView;
@property (retain, nonatomic) NCNotificationSummaryContentProvider *summaryContentProvider;
@property (retain, nonatomic) ATXMissedNotificationRanking *missedNotificationRanking;

- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (id)atxUUID;
- (void)updateLeadingSummaryPlatterView;
- (void)atxLogSummaryPlatterShownIsUpcoming:(BOOL)a0;
- (id)leadingSummaryPlatterViewConfigureIfNecessary;
- (void)generateDigestForATXUserNotificationArrays:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)atxLogSummaryPlatterExpandedIsUpcoming:(BOOL)a0;
- (void)_updateSummaryPlatterView;
- (void)_updateSummaryContentProvider;
- (void)atxLogRemoval;

@end
