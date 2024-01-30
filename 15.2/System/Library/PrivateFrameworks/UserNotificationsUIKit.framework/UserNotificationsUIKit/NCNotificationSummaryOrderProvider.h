@class UIView, NSArray, NSString, NSUUID, NSDate, DNDMode, UITapGestureRecognizer;
@protocol NCNotificationSummaryOrderProviderDelegate;

@interface NCNotificationSummaryOrderProvider : NSObject <PLContentSizeCategoryAdjusting>

@property (retain, nonatomic) UITapGestureRecognizer *summaryPlatterViewTapGestureRecognizer;
@property (copy, nonatomic) NSArray *cachedOrderedNotificationGroupLists;
@property (weak, nonatomic) id<NCNotificationSummaryOrderProviderDelegate> delegate;
@property (nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated;
@property (nonatomic) long long atxDigestDeliveryTime;
@property (copy, nonatomic) NSDate *summaryDate;
@property (copy, nonatomic) NSString *summaryHeading;
@property (retain, nonatomic) DNDMode *dndMode;
@property (nonatomic, getter=isOnboardingSummary) BOOL onboardingSummary;
@property (readonly, nonatomic) UIView *leadingSummaryPlatterView;
@property (readonly, copy, nonatomic) NSUUID *atxUUID;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)atxQueue;
+ (id)notificationSummaryOrderProviderOfType:(unsigned long long)a0;
+ (id)atxDigestGeneratorClient;

- (id)listComponentDelegate;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (id)init;
- (id)materialGroupNameBase;
- (void)updateLeadingSummaryPlatterView;
- (void)atxLogSummaryPlatterShownIsUpcoming:(BOOL)a0;
- (void)atxLogSummaryPlatterRemoval;
- (void)_tapOnSummaryPlatterView;
- (id)leadingSummaryPlatterViewConfigureIfNecessary;
- (id)atxUserNotificationsArrayForNotificationGroupLists:(id)a0;
- (id)orderedNotificationGroupLists:(id)a0 forATXUserNotificationDigestNotificationGroup:(id)a1 orderGroupNotifications:(BOOL)a2;
- (void)updatedOrderedGroupLists;
- (void)generateDigestForATXUserNotificationArrays:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)atxUserNotificationsForNotificationRequests:(id)a0;
- (id)representativeNotificationGroupListInGroupLists:(id)a0 forATXUserNotificationDigestNotificationGroup:(id)a1;
- (void)_updateNotificationOrderingForGroupList:(id)a0 byATXDigestNotificationGroup:(id)a1;
- (BOOL)_shouldAllowTapOnLeadingSummaryPlatterView;
- (void)updateSummaryOrderWithNotificationGroupLists:(id)a0 reloadDigest:(BOOL)a1;
- (void)atxLogSummaryPlatterExpandedIsUpcoming:(BOOL)a0;
- (id)titlesForSectionListsInSummary;
- (unsigned long long)currentNotificationCount;
- (id)clearControlViewForLeadingSummaryPlatterView;
- (id)notificationRequestsInNotificationGroupLists:(id)a0;
- (unsigned long long)notificationCountForNotificationGroupLists:(id)a0;
- (id)representativeNotificationRequestsForNotificationGroupLists:(id)a0;
- (id)filterPresentNotificationGroupsInDigestNotificationGroups:(id)a0;
- (void)configureSummaryContentDisplaying:(id)a0 withSummaryContentProviding:(id)a1;

@end
