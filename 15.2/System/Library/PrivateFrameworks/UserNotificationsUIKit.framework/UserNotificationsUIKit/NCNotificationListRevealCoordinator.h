@class NSArray, UIImpactFeedbackGenerator, NSString;
@protocol NCNotificationListRevealCoordinatorDelegate;

@interface NCNotificationListRevealCoordinator : NSObject <NCNotificationListViewScrollDelegate>

@property (nonatomic) int revealState;
@property (nonatomic) double revealPercentage;
@property (nonatomic, getter=isSectionRevealed) BOOL sectionRevealed;
@property (nonatomic, getter=isSectionRevealedStateLocked) BOOL sectionRevealedStateLocked;
@property (nonatomic) BOOL shouldLimitTargetContentOffsetForNotificationListReveal;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic, getter=isHapticPrepared) BOOL hapticPrepared;
@property (weak, nonatomic) id<NCNotificationListRevealCoordinatorDelegate> delegate;
@property (nonatomic, getter=isForceRevealed) BOOL forceRevealed;
@property (nonatomic) unsigned long long indexForReveal;
@property (retain, nonatomic) NSArray *subLists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notificationListWillBeginDragging:(id)a0;
- (id)_stringForRevealState:(int)a0;
- (id)_revealListView;
- (void)_refetchSubListViews;
- (void)_performRevealForSubviewsIfNecessary;
- (void)_prepareHaptic;
- (void)notificationListViewWillEndDragging:(id)a0 withTargetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a1;
- (BOOL)_shouldAllowNotificationListReveal;
- (double)_settlingYPositionForReveal;
- (void)_releaseHaptic;
- (void).cxx_destruct;
- (BOOL)_isRevealSectionVisibleForListView:(id)a0;
- (void)_performHaptic;
- (void)notificationListDidScroll:(id)a0;
- (BOOL)_revealSectionHasContent;
- (BOOL)_isRevealed;
- (double)_updateRevealPercentageForNotificationListView:(id)a0;

@end
