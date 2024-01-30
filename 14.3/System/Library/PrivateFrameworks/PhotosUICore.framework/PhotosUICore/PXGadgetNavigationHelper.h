@class PXGadgetNavigationItem, NSTimer;
@protocol PXGadgetNavigationHelperDelegate;

@interface PXGadgetNavigationHelper : NSObject

@property (retain, nonatomic) PXGadgetNavigationItem *pendingNavigationItem;
@property (weak, nonatomic) NSTimer *navigationInvalidationTimer;
@property (weak, nonatomic) id<PXGadgetNavigationHelperDelegate> delegate;
@property (readonly, nonatomic) BOOL hasPendingNavigation;

- (void)navigateToSuggestedCMMWithUUID:(id)a0 animated:(BOOL)a1;
- (void)navigateToGadgetForCMMInvitationWithIdentifier:(id)a0;
- (void)invalidateAnyPendingNavigation;
- (void).cxx_destruct;
- (void)navigateToGadgetWithTypeSurveyCongratulations;
- (void)navigateToFeaturedPhotoWithSuggestionIdentifier:(id)a0 animated:(BOOL)a1;
- (void)navigateToSharedAlbumInviteWithUUID:(id)a0 animated:(BOOL)a1;
- (BOOL)navigateToGadgetDeferIfNeeded:(id)a0 animated:(BOOL)a1 nestedNavigationBlock:(id /* block */)a2;
- (void)navigateToSectionWithGadgetType:(unsigned long long)a0 andGadget:(id)a1 animated:(BOOL)a2;
- (BOOL)_navigateToGadget:(id)a0 animated:(BOOL)a1 navigationBlock:(id /* block */)a2;
- (void)navigateIfNeeded;
- (void)navigateToSharedAlbumInvitesAnimated:(BOOL)a0;
- (void)navigateToFirstGadgetAndFirstNestedGadget:(BOOL)a0;
- (void)_pendingNavigationInvalidationTimerFired:(id)a0;
- (BOOL)navigateToFirstGadgetWithTypeDeferIfNeeded:(unsigned long long)a0 animated:(BOOL)a1 nestedNavigationBlock:(id /* block */)a2;
- (BOOL)navigateToFirstGadgetMatchingCriteria:(id /* block */)a0 animated:(BOOL)a1 nestedNavigationBlock:(id /* block */)a2;
- (BOOL)navigateToGadgetWithIdDeferIfNeeded:(id)a0 animated:(BOOL)a1 nestedNavigationBlock:(id /* block */)a2;
- (void)navigateToRevealTheMostRecentMemoryAnimated:(BOOL)a0;
- (void)navigateToSuggestionGadget:(id)a0 animated:(BOOL)a1;
- (void)navigateToGadgetForCMMSuggestions;
- (void)navigateToInvitationCMMWithUUID:(id)a0 animated:(BOOL)a1;
- (void)startPendingNavigationTimer;
- (void)_stopPendingNavigationTimer;

@end
