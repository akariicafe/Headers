@class NCDigestSummaryPlatterView, NCNotificationSummaryContentProvider, NSArray;

@interface NCNotificationDigestDetailedSummaryOrderProvider : NCNotificationDigestSummaryOrderProvider

@property (retain, nonatomic) NCDigestSummaryPlatterView *digestSummaryPlatterView;
@property (retain, nonatomic) NCNotificationSummaryContentProvider *communicationsSummaryContentProvider;
@property (retain, nonatomic) NCNotificationSummaryContentProvider *appsSummaryContentProvider;
@property (retain, nonatomic) NSArray *featuredNotificationContentProviders;

- (void)setDeviceAuthenticated:(BOOL)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (void)_updateDigestSummaryPlatterView;
- (void)updateLeadingSummaryPlatterView;
- (id)_atxHighlightedGroups;
- (BOOL)_presentFeaturedNotificationsInline;
- (BOOL)_shouldAllowTapOnLeadingSummaryPlatterView;
- (unsigned long long)_totalNotificationCountForSectionIdentifier:(id)a0;
- (void)_updateAppsSummaryContentProvidersWithRankedGroups:(id)a0;
- (void)_updateCommunicationsSummaryContentProvider;
- (void)_updateFeaturedNotificationContentProvidersWithHighlightedGroups:(id)a0;
- (id)leadingSummaryPlatterViewConfigureIfNecessary;

@end
