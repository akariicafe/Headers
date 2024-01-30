@class NCDigestSummaryPlatterView, NCNotificationSummaryContentProvider, NSArray;

@interface NCNotificationDigestDetailedSummaryOrderProvider : NCNotificationDigestSummaryOrderProvider

@property (retain, nonatomic) NCDigestSummaryPlatterView *digestSummaryPlatterView;
@property (retain, nonatomic) NCNotificationSummaryContentProvider *communicationsSummaryContentProvider;
@property (retain, nonatomic) NCNotificationSummaryContentProvider *appsSummaryContentProvider;
@property (retain, nonatomic) NSArray *featuredNotificationContentProviders;

- (void)setDeviceAuthenticated:(BOOL)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (void)updateLeadingSummaryPlatterView;
- (id)leadingSummaryPlatterViewConfigureIfNecessary;
- (BOOL)_shouldAllowTapOnLeadingSummaryPlatterView;
- (void)_updateDigestSummaryPlatterView;
- (id)_atxHighlightedGroups;
- (void)_updateFeaturedNotificationContentProvidersWithHighlightedGroups:(id)a0;
- (void)_updateCommunicationsSummaryContentProvider;
- (void)_updateAppsSummaryContentProvidersWithRankedGroups:(id)a0;
- (unsigned long long)_totalNotificationCountForSectionIdentifier:(id)a0;
- (BOOL)_presentFeaturedNotificationsInline;

@end
