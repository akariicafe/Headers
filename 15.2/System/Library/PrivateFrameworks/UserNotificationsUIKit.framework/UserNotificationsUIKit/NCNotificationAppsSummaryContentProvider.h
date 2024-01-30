@interface NCNotificationAppsSummaryContentProvider : NCNotificationSummaryContentProvider

- (id)summaryTitle;
- (BOOL)isIconViewLeading;
- (unsigned long long)maxNumberOfSummaryItems;
- (id)_summaryStringForNotificationRequest:(id)a0;
- (BOOL)hideSummaryIconViews;
- (id)_summaryIconViewForNotificationRequest:(id)a0;

@end
