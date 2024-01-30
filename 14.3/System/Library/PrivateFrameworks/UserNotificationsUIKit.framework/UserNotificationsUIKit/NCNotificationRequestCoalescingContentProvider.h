@class NSNumberFormatter, NSMutableArray, NCNotificationSummaryBuilder;

@interface NCNotificationRequestCoalescingContentProvider : NCNotificationRequestContentProvider {
    NSNumberFormatter *_decimalFormatter;
    NCNotificationSummaryBuilder *_summaryBuilder;
}

@property (retain, nonatomic) NSMutableArray *coalescedNotificationRequests;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated;
@property (retain, nonatomic) NCNotificationSummaryBuilder *overridenSummaryBuilder;

- (id)thumbnail;
- (void)_updateSummaryText;
- (id)init;
- (BOOL)_shouldShowContent;
- (void).cxx_destruct;
- (id)primaryText;
- (id)summaryText;
- (id)secondaryText;
- (id)notificationRequest;
- (id)initWithNotificationRequest:(id)a0;
- (id)primarySubtitleText;
- (unsigned long long)coalesceCount;
- (unsigned long long)_indexOfMatchingNotificationRequest:(id)a0;
- (BOOL)_shouldShowNotificationBody;
- (id)_placeholderSecondaryText;
- (id)_localizedStringWithPlaceholderFormat:(id)a0 count:(unsigned long long)a1;
- (void)coalesceNotificationRequest:(id)a0;
- (void)removeCoalescedNotificationRequest:(id)a0;
- (void)updateCoalescedNotificationRequest:(id)a0;
- (BOOL)containsMatchingCoalescedNotificationRequest:(id)a0;

@end
