@class NSString, NSNumberFormatter, NCNotificationSummaryBuilder, NSMutableArray;

@interface NCNotificationRequestCoalescingContentProvider : NCNotificationRequestContentProvider {
    NSNumberFormatter *_decimalFormatter;
    NCNotificationSummaryBuilder *_summaryBuilder;
}

@property (retain, nonatomic) NSMutableArray *coalescedNotificationRequests;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated;
@property (retain, nonatomic) NCNotificationSummaryBuilder *overridenSummaryBuilder;
@property (copy, nonatomic) NSString *collapsedSectionSummaryString;
@property (nonatomic) BOOL showSummaryFooterText;
@property (nonatomic) BOOL showSummaryTextAsContent;

- (id)communicationAvatar;
- (id)importantText;
- (BOOL)isHidingContent;
- (id)footerText;
- (id)notificationRequest;
- (id)thumbnail;
- (id)initWithNotificationRequest:(id)a0;
- (unsigned long long)coalesceCount;
- (id)inlineAction;
- (BOOL)_shouldShowNotificationBody;
- (id)summaryText;
- (id)secondaryText;
- (void)updateCoalescedNotificationRequest:(id)a0;
- (void)_updateSummaryText;
- (void)coalesceNotificationRequest:(id)a0;
- (id)primaryText;
- (id)icons;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_localizedStringWithPlaceholderFormat:(id)a0 count:(unsigned long long)a1;
- (id)primarySubtitleText;
- (id)date;
- (unsigned long long)_notificationCount;
- (id)init;
- (void)removeCoalescedNotificationRequest:(id)a0;
- (id)_activeSummaryBuilder;
- (unsigned long long)_indexOfMatchingNotificationRequest:(id)a0;
- (BOOL)containsMatchingCoalescedNotificationRequest:(id)a0;
- (void).cxx_destruct;
- (id)_placeholderSecondaryText;

@end
