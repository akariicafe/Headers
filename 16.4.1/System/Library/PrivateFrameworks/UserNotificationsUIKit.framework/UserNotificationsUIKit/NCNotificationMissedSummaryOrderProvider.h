@class NCNotificationSummaryContentProvider, NCNotificationSummaryPlatterView, ATXMissedNotificationRanking;

@interface NCNotificationMissedSummaryOrderProvider : NCNotificationSummaryOrderProvider

@property (retain, nonatomic) NCNotificationSummaryPlatterView *summaryPlatterView;
@property (retain, nonatomic) NCNotificationSummaryContentProvider *summaryContentProvider;
@property (retain, nonatomic) ATXMissedNotificationRanking *missedNotificationRanking;

- (id)atxUUID;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (void)updateLeadingSummaryPlatterView;
- (void)generateDigestForATXUserNotificationArrays:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_updateSummaryContentProvider;
- (void)_updateSummaryPlatterView;
- (void)atxLogRemoval;
- (void)atxLogSummaryPlatterExpandedIsUpcoming:(BOOL)a0;
- (void)atxLogSummaryPlatterShownIsUpcoming:(BOOL)a0;
- (id)leadingSummaryPlatterViewConfigureIfNecessary;

@end
