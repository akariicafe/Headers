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

- (BOOL)_shouldHideNotificationRequest:(id)a0;
- (void)_configureFooterViewIfNecessary;
- (void)removeNotificationRequest:(id)a0;
- (id)initWithTitle:(id)a0 sectionType:(unsigned long long)a1;
- (void)notificationListBaseComponentDidRemoveAll:(id)a0;
- (BOOL)isAttachmentImageFeaturedForNotificationGroupList:(id)a0;
- (id)headerViewForNotificationList:(id)a0;
- (id)_summarizedAttachmentImageViews;
- (id)footerViewForNotificationList:(id)a0;
- (BOOL)isRichNotificationContentViewForNotificationGroupList:(id)a0;
- (id)_newGroupListForNotificationRequest:(id)a0;
- (void)insertNotificationRequest:(id)a0;
- (void)modifyNotificationRequest:(id)a0;
- (id)_attachmentImageViewForSummaryForNotificationRequest:(id)a0;
- (void)_removeFeaturedGroupListIfNecessary:(id)a0;
- (BOOL)_shouldHideNotificationGroupList:(id)a0;
- (double)footerViewHeightForNotificationList:(id)a0 withWidth:(double)a1;
- (void)notificationListComponent:(id)a0 didRemoveNotificationRequest:(id)a1;
- (id)_summarizedContentStrings;
- (id)_extractFeaturedNotificationRequestsFromGroupLists:(id)a0;
- (unsigned long long)_summarizedCount;
- (id)preferredContentSizeCategory;
- (id)_summarizedStringsForNotificationRequest:(id)a0;
- (void)_updateFeaturedGroupListsForFeaturedNotificationRequests:(id)a0;
- (void)_updateSummarizedFooterViewContent;
- (void)_configureHeaderViewIfNecessary;
- (void)_clearContentProviderForRequest:(id)a0;
- (unsigned long long)notificationListViewNumberOfItems:(id)a0;
- (void)appSectionListSummarizedContentViewDidRecognizeTapGesture:(id)a0;
- (id)backgroundGroupNameBaseForAppSectionListSummarizedContentView:(id)a0;
- (void)setDeviceAuthenticated:(BOOL)a0;
- (BOOL)isShowingFeaturedLeadingViewsForNotificationListView:(id)a0;
- (void)_mergeFeaturedGroupLists;
- (void)setPreferredContentSizeCategory:(id)a0;
- (BOOL)_shouldFeatureLeadingViews;
- (unsigned long long)_insertionIndexForGroup:(id)a0;
- (id)_nonFeaturedGroupLists;
- (BOOL)_isViewFeaturedAtIndex:(unsigned long long)a0;
- (void)notificationListPresentableGroup:(id)a0 didReceivedHorizontalTranslation:(double)a1;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)clearAll;
- (void)unmergeNotificationGroupListsIfNecessary;
- (BOOL)adjustForContentSizeCategoryChange;
- (double)headerViewHeightForNotificationList:(id)a0 withWidth:(double)a1;
- (BOOL)_showSummarizedFooterView;
- (id)_newAttachmentImageViewForImage:(id)a0;
- (id)_notificationGroupsForInsertion;
- (id)notificationGroupList:(id)a0 requestsContentProviderForNotificationRequest:(id)a1;
- (void).cxx_destruct;
- (void)appSectionListHeaderView:(id)a0 didRequestPresentingOptionsMenuFromView:(id)a1;
- (void)_configureSectionListView:(id)a0;
- (BOOL)shouldAllowRestackingForNotificationListPresentableGroup:(id)a0;

@end
