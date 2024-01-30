@class PUBrowsingSession, NSMapTable, PUOneUpViewControllerSpec, NSString;
@protocol PUOneUpAccessoryViewControllersManagerDelegate;

@interface PUOneUpAccessoryViewControllersManager : NSObject <PUBrowsingViewModelChangeObserver, PXPhotosDetailsUIViewControllerDelegate> {
    struct { BOOL preventRevealInMomentActionForAssetReference; BOOL requestDismissal; BOOL invalidateAccessoryLayout; BOOL preventInternalFileRadarActionForAssetReference; } _delegateRespondsTo;
}

@property (readonly, nonatomic) NSMapTable *_accessoryViewControllers;
@property (readonly, nonatomic) PUOneUpViewControllerSpec *_spec;
@property (readonly, nonatomic) PUBrowsingSession *browsingSession;
@property (weak, nonatomic) id<PUOneUpAccessoryViewControllersManagerDelegate> delegate;
@property (copy, nonatomic) id /* block */ unlockDeviceStatus;
@property (copy, nonatomic) id /* block */ unlockDeviceHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (BOOL)shouldHideNavigationBarWhenShowingAccessoryViewControllerForAssetReference:(id)a0;
- (void)photosDetailsUIViewControllerCompositionDidChange:(id)a0;
- (id)createAccessoryViewControllerForAssetReference:(id)a0;
- (id)_createAccessoryViewControllerForAssetReference:(id)a0;
- (long long)accessoryViewTypeForAsset:(id)a0;
- (BOOL)_isPhoneAndLandscape;
- (void).cxx_destruct;
- (id)initWithBrowsingSession:(id)a0 spec:(id)a1;
- (id)init;
- (id)accessoryViewControllerForAssetReference:(id)a0;
- (void)_invalidateAccessoryViewControllersForAssetReferences:(id)a0;
- (BOOL)shouldHideStatusBarWhenShowingAccessoryViewControllerForAssetReference:(id)a0;
- (BOOL)photosDetailsUIViewControllerRequestDismissal:(id)a0;
- (long long)_accessoryViewTypeForAsset:(id)a0;
- (id)accessoryViewControllerForAssetReference:(id)a0 createIfNeeded:(BOOL)a1;
- (id)assetReferenceForAccessoryViewController:(id)a0;
- (BOOL)shouldHideToolbarWhenShowingAccessoryViewControllerForAssetReference:(id)a0;

@end
