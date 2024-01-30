@class NSNumberFormatter, NSMutableArray, NCNotificationSummaryBuilder;

@interface NCNotificationRequestCoalescingContentProvider : NCNotificationRequestContentProvider {
    NSNumberFormatter *_decimalFormatter;
    NCNotificationSummaryBuilder *_summaryBuilder;
}

@property (retain, nonatomic) NSMutableArray *coalescedNotificationRequests;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated;
@property (retain, nonatomic) NCNotificationSummaryBuilder *overridenSummaryBuilder;

- (unsigned long long)_indexOfMatchingNotificationRequest:(id)a0;
- (BOOL)_shouldShowNotificationBody;
- (id)notificationRequest;
- (BOOL)isHidingContent;
- (id)primaryText;
- (unsigned long long)coalesceCount;
- (BOOL)containsMatchingCoalescedNotificationRequest:(id)a0;
- (id)_placeholderSecondaryText;
- (id)importantText;
- (void)removeCoalescedNotificationRequest:(id)a0;
- (id)initWithNotificationRequest:(id)a0;
- (void)updateCoalescedNotificationRequest:(id)a0;
- (id)summaryText;
- (id)thumbnail;
- (id)secondaryText;
- (id)primarySubtitleText;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)coalesceNotificationRequest:(id)a0;
- (void)_updateSummaryText;
- (id)_localizedStringWithPlaceholderFormat:(id)a0 count:(unsigned long long)a1;

@end
