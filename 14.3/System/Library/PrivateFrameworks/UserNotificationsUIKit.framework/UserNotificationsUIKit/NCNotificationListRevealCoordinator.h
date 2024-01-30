@class NSArray, UIImpactFeedbackGenerator, NSString;
@protocol NCNotificationListRevealCoordinatorDelegate;

@interface NCNotificationListRevealCoordinator : NSObject <NCNotificationListViewScrollDelegate>

@property (nonatomic) int revealState;
@property (nonatomic) double revealPercentage;
@property (retain, nonatomic) NSArray *subLists;
@property (nonatomic, getter=isSectionRevealed) BOOL sectionRevealed;
@property (nonatomic, getter=isSectionRevealedStateLocked) BOOL sectionRevealedStateLocked;
@property (nonatomic) BOOL shouldLimitTargetContentOffsetForNotificationListReveal;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic, getter=isHapticPrepared) BOOL hapticPrepared;
@property (weak, nonatomic) id<NCNotificationListRevealCoordinatorDelegate> delegate;
@property (nonatomic, getter=isForceRevealed) BOOL forceRevealed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_revealSectionHasContent;
- (void).cxx_destruct;
- (void)_performHaptic;
- (void)notificationListViewWillEndDragging:(id)a0 withTargetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a1;
- (void)notificationListWillBeginDragging:(id)a0;
- (BOOL)_isRevealSectionVisibleForListView:(id)a0;
- (void)_performRevealForSubviewsIfNecessary;
- (void)_prepareHaptic;
- (id)_topView;
- (double)_updateRevealPercentageForNotificationListView:(id)a0;
- (BOOL)_shouldAllowNotificationListReveal;
- (void)notificationListDidScroll:(id)a0;
- (BOOL)_isRevealed;
- (id)_stringForRevealState:(int)a0;
- (double)_settlingYPositionForReveal;
- (id)_revealListView;
- (void)_releaseHaptic;

@end
