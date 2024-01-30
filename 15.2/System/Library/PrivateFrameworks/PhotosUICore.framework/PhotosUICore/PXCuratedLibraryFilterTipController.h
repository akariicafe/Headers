@class NSObject, NSString, TPKContentController, TPKContentPopoverViewController, TPKContent, PXCuratedLibraryGuestAssetTracker, UITraitCollection;
@protocol OS_dispatch_queue, PXCuratedLibraryFilterTipControllerDelegate;

@interface PXCuratedLibraryFilterTipController : NSObject <TPKContentControllerDelegate, PXCuratedLibraryGuestAssetTrackerDelegate> {
    TPKContentController *_libraryFilterTipContentController;
    TPKContentPopoverViewController *_libraryFilterTipContentViewController;
    TPKContent *_presentedContent;
    BOOL _isTipContentDelegate;
}

@property (readonly, nonatomic) PXCuratedLibraryGuestAssetTracker *guestAssetTracker;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *tipKitAPIQueue;
@property (weak, nonatomic) id<PXCuratedLibraryFilterTipControllerDelegate> delegate;
@property (nonatomic) BOOL canPresentTip;
@property (copy, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) BOOL isPresentingTipView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentController:(id)a0 didFinishWithContent:(id)a1 animated:(BOOL)a2;
- (id)contentController:(id)a0 clientContextMapForKeys:(id)a1;
- (id)contentController:(id)a0 contentView:(id)a1 iconForCustomizationID:(long long)a2;
- (void)contentController:(id)a0 contentDidBecomeAvailable:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0 layout:(id)a1;
- (void)guestAssetsTracker:(id)a0 canDisplayGuestAssets:(BOOL)a1;
- (void)guestAssetsTracker:(id)a0 isDisplayingGuestAssets:(BOOL)a1;
- (void)didChangeFilterState:(id)a0;
- (void)didActivateAnchorView;
- (void)didLayoutAnchorView;
- (void)dismissTipViewWithCompletion:(id /* block */)a0;
- (void)_updateController;
- (void)_updateCanReceiveContent:(BOOL)a0;
- (void)_presentTipForContent:(id)a0;
- (void)_dismissTipViewWithCompletion:(id /* block */)a0 clientInitiated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_anchorViewRect;
- (void)_donateCoreDuetSignalWithIdentifier:(id)a0;
- (void)_setupMockFilterTipController;
- (BOOL)_shouldShowFilterTip;

@end
