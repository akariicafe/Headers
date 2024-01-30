@class NCNotificationSummaryContentProvider, NCNotificationSummaryPlatterView;

@interface NCNotificationDigestConciseSummaryOrderProvider : NCNotificationDigestSummaryOrderProvider

@property (retain, nonatomic) NCNotificationSummaryPlatterView *summaryPlatterView;
@property (retain, nonatomic) NCNotificationSummaryContentProvider *summaryContentProvider;

- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (void)updateLeadingSummaryPlatterView;
- (id)leadingSummaryPlatterViewConfigureIfNecessary;
- (void)_updateSummaryPlatterView;
- (void)_updateSummaryContentProvider;

@end
