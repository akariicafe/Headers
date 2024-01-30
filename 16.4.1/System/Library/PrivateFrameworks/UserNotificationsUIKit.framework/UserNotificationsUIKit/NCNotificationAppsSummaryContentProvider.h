@interface NCNotificationAppsSummaryContentProvider : NCNotificationSummaryContentProvider

- (id)summaryTitle;
- (BOOL)isIconViewLeading;
- (id)_summaryIconViewForNotificationRequest:(id)a0;
- (id)_summaryStringForNotificationRequest:(id)a0;
- (BOOL)hideSummaryIconViews;
- (unsigned long long)maxNumberOfSummaryItems;

@end
