@class MTVisualStylingProvider, NSString, NSMutableDictionary, NSArray, NCNotificationAppSectionListHeaderView, NSMutableArray, NCNotificationAppSectionListSummarizedContentView;

@interface NCNotificationAppSectionList : NCNotificationStructuredSectionList <NCNotificationAppSectionListHeaderViewDelegate, NCNotificationAppSectionListSummarizedContentViewDelegate, MTVisualStylingRequiring> {
    NCNotificationAppSectionListHeaderView *_headerView;
    NCNotificationAppSectionListSummarizedContentView *_footerView;
    MTVisualStylingProvider *_strokeVisualStylingProvider;
    NSString *_preferredContentSizeCategory;
}

@property (retain, nonatomic) NSMutableArray *featuredGroupLists;
@property (retain, nonatomic) NSMutableDictionary *richContentProviders;
@property (nonatomic, getter=isMerged) BOOL merged;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (retain, nonatomic) NSArray *groupListsForSmartOrdering;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic, getter=isCombinedAppSectionList) BOOL combinedAppSectionList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

- (void)clearAllNotificationRequests;
- (id)_newGroupListForNotificationRequest:(id)a0;
- (void)removeNotificationRequest:(id)a0;
- (void)_configureSectionListView:(id)a0;
- (BOOL)notificationGroupListShouldAllowRestacking:(id)a0;
- (BOOL)isRichNotificationContentViewForNotificationGroupList:(id)a0;
- (BOOL)_shouldHideNotificationGroupList:(id)a0;
- (BOOL)isAttachmentImageFeaturedForNotificationGroupList:(id)a0;
- (void)notificationListComponentDidRemoveAllNotificationRequests:(id)a0;
- (void)setDeviceAuthenticated:(BOOL)a0;
- (void)insertNotificationRequest:(id)a0;
- (id)_notificationGroupsForInsertion;
- (void)notificationListComponent:(id)a0 didRemoveNotificationRequest:(id)a1;
- (double)footerViewHeightForNotificationList:(id)a0 withWidth:(double)a1;
- (unsigned long long)notificationListViewNumberOfItems:(id)a0;
- (id)headerViewForNotificationList:(id)a0;
- (BOOL)_shouldHideNotificationRequest:(id)a0;
- (id)initWithTitle:(id)a0 sectionType:(unsigned long long)a1;
- (double)headerViewHeightForNotificationList:(id)a0 withWidth:(double)a1;
- (unsigned long long)_insertionIndexForGroup:(id)a0;
- (void)setPreferredContentSizeCategory:(id)a0;
- (void)modifyNotificationRequest:(id)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (id)preferredContentSizeCategory;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (id)footerViewForNotificationList:(id)a0;
- (void).cxx_destruct;
- (void)unmergeNotificationGroupListsIfNecessary;
- (BOOL)isShowingFeaturedLeadingViewsForNotificationListView:(id)a0;
- (id)notificationGroupList:(id)a0 requestsContentProviderForNotificationRequest:(id)a1;
- (void)notificationGroupList:(id)a0 receivedHorizontalTranslationForItemAtIndex:(unsigned long long)a1 translation:(double)a2;
- (void)_mergeFeaturedGroupLists;
- (id)_extractFeaturedNotificationRequestsFromGroupLists:(id)a0;
- (void)_updateFeaturedGroupListsForFeaturedNotificationRequests:(id)a0;
- (id)_nonFeaturedGroupLists;
- (void)_clearContentProviderForRequest:(id)a0;
- (void)_updateSummarizedFooterViewContent;
- (BOOL)_showSummarizedFooterView;
- (void)_configureHeaderViewIfNecessary;
- (void)_configureFooterViewIfNecessary;
- (BOOL)_shouldFeatureLeadingViews;
- (BOOL)_isViewFeaturedAtIndex:(unsigned long long)a0;
- (void)_removeFeaturedGroupListIfNecessary:(id)a0;
- (unsigned long long)_summarizedCount;
- (id)_summarizedContentStrings;
- (id)_summarizedAttachmentImageViews;
- (id)_summarizedStringsForNotificationRequest:(id)a0;
- (id)_newAttachmentImageViewForImage:(id)a0;
- (id)_attachmentImageViewForSummaryForNotificationRequest:(id)a0;
- (void)appSectionListHeaderView:(id)a0 didRequestPresentingOptionsMenuFromView:(id)a1;
- (void)appSectionListSummarizedContentViewDidRecognizeTapGesture:(id)a0;
- (id)backgroundGroupNameBaseForAppSectionListSummarizedContentView:(id)a0;

@end
