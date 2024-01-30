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
@property (nonatomic) double interactionTranslation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_refetchSubListViews;
- (id)_revealListView;
- (BOOL)_isRevealSectionVisibleForListView:(id)a0;
- (BOOL)_isRevealed;
- (double)_updateRevealPercentageForNotificationListView:(id)a0;
- (double)_settlingYPositionForReveal;
- (void)_performHaptic;
- (void)_releaseHaptic;
- (void)notificationListViewDidEndDecelerating:(id)a0;
- (void)notificationListDidScroll:(id)a0;
- (void)_prepareHaptic;
- (id)_stringForRevealState:(int)a0;
- (void)notificationListWillBeginDragging:(id)a0;
- (BOOL)_shouldAllowNotificationListReveal;
- (BOOL)_shouldAllowNotificationListRevealTransition;
- (void)notificationListViewWillEndDragging:(id)a0 withTargetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a1;
- (void)notificationListViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)_performRevealForSubviewsIfNecessary;
- (BOOL)_revealSectionHasContent;

@end
