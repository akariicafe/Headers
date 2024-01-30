@class NSString, NSMutableDictionary, NSMutableSet;

@interface NCNotificationListCache : NSObject <PLContentSizeCategoryAdjusting>

@property (retain, nonatomic) NSMutableDictionary *contentRevealedCellHeightCache;
@property (retain, nonatomic) NSMutableDictionary *contentRevealedWithSummaryCellHeightCache;
@property (retain, nonatomic) NSMutableDictionary *contentHiddenCellHeightCache;
@property (retain, nonatomic) NSMutableSet *notificationListCellCache;
@property (retain, nonatomic) NSMutableSet *notificationListCoalescingHeaderCache;
@property (retain, nonatomic) NSMutableSet *notificationListCoalescingControlsCache;
@property (retain, nonatomic) NSMutableDictionary *notificationListCellsForRequests;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateNotificationRequest:(id)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (id)init;
- (void).cxx_destruct;
- (void)removeNotificationRequest:(id)a0;
- (void)clearCachedHeightsForNotificationRequest:(id)a0;
- (void)clearCacheForNotificationRequest:(id)a0;
- (id)coalescingHeaderCellWithTitle:(id)a0 width:(double)a1;
- (id)coalescingControlsCellWithWidth:(double)a0;
- (BOOL)recycleNotificationListCell:(id)a0;
- (void)recycleNotificationListCoalescingHeaderCell:(id)a0;
- (void)recycleNotificationListCoalescingControlsCell:(id)a0;
- (id)listCellForNotificationRequest:(id)a0 viewControllerDelegate:(id)a1 createNewIfNecessary:(BOOL)a2 shouldConfigure:(BOOL)a3;
- (double)heightForNotificationRequest:(id)a0 withFrameWidth:(double)a1 isContentRevealed:(BOOL)a2 isShowingSummaryText:(BOOL)a3 shouldCalculateHeight:(BOOL)a4;
- (id)_cachedNotificationListCellForRequest:(id)a0 viewControllerDelegate:(id)a1 shouldConfigure:(BOOL)a2;
- (id)_newCellForNotificationRequest:(id)a0 viewControllerDelegate:(id)a1;
- (id)_cachedHeaderCellWithTitle:(id)a0;
- (void)_clearAllHeightCaches;

@end
