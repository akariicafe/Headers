@class PXGadgetNavigationItem, NSTimer;
@protocol PXGadgetNavigationHelperDelegate;

@interface PXGadgetNavigationHelper : NSObject

@property (retain, nonatomic) PXGadgetNavigationItem *pendingNavigationItem;
@property (weak, nonatomic) NSTimer *navigationInvalidationTimer;
@property (weak, nonatomic) id<PXGadgetNavigationHelperDelegate> delegate;
@property (readonly, nonatomic) BOOL hasPendingNavigation;

- (BOOL)navigateToFirstGadgetWithTypeDeferIfNeeded:(unsigned long long)a0 animated:(BOOL)a1 nestedNavigationBlock:(id /* block */)a2;
- (void)navigateToFeaturedPhotoWithSuggestionIdentifier:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)navigateToGadgetWithIdDeferIfNeeded:(id)a0 animated:(BOOL)a1 nestedNavigationBlock:(id /* block */)a2;
- (void)navigateToGadgetForCMMSuggestions;
- (void)navigateIfNeeded;
- (BOOL)_navigateToGadget:(id)a0 animated:(BOOL)a1 navigationBlock:(id /* block */)a2;
- (void)navigateToSharedAlbumInviteWithUUID:(id)a0 animated:(BOOL)a1;
- (void)navigateToSharedAlbumInvitesAnimated:(BOOL)a0;
- (void)navigateToRevealTheMostRecentMemoryAnimated:(BOOL)a0;
- (void)invalidateAnyPendingNavigation;
- (void)navigateToSuggestedCMMWithUUID:(id)a0 animated:(BOOL)a1;
- (void)navigateToGadgetWithTypeSurveyCongratulationsWithGadgetType:(unsigned long long)a0;
- (void)_stopPendingNavigationTimer;
- (void)navigateToGadgetForCMMInvitationWithIdentifier:(id)a0;
- (void)navigateToFirstGadgetAndFirstNestedGadget:(BOOL)a0;
- (void).cxx_destruct;
- (void)navigateToGadgetInHorizontalGadget:(id)a0 animated:(BOOL)a1;
- (BOOL)navigateToGadgetDeferIfNeeded:(id)a0 animated:(BOOL)a1 nestedNavigationBlock:(id /* block */)a2;
- (BOOL)navigateToFirstGadgetMatchingCriteria:(id /* block */)a0 animated:(BOOL)a1 nestedNavigationBlock:(id /* block */)a2;
- (void)navigateToSectionWithGadgetType:(unsigned long long)a0 andGadget:(id)a1 animated:(BOOL)a2;
- (void)startPendingNavigationTimer;
- (void)_pendingNavigationInvalidationTimerFired:(id)a0;
- (void)navigateToInvitationCMMWithUUID:(id)a0 animated:(BOOL)a1;

@end
