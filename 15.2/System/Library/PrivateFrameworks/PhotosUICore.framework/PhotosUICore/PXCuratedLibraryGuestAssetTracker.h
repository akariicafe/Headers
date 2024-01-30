@class NSString, PXCuratedLibraryLayout, PXCuratedLibraryViewModel;
@protocol PXCuratedLibraryGuestAssetTrackerDelegate;

@interface PXCuratedLibraryGuestAssetTracker : NSObject <PXChangeObserver> {
    unsigned long long _numberOfGuestAssetsVisible;
    PXCuratedLibraryViewModel *_viewModel;
    PXCuratedLibraryLayout *_layout;
}

@property (weak, nonatomic) id<PXCuratedLibraryGuestAssetTrackerDelegate> delegate;
@property (nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL canDisplayGuestAssets;
@property (readonly, nonatomic) BOOL isDisplayingGuestAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithViewModel:(id)a0 layout:(id)a1;
- (void)setCanDisplayGuestAssets:(BOOL)a0;
- (void)setIsDisplayingGuestAssets:(BOOL)a0;
- (void)_checkForVisibilityUpdates;
- (BOOL)_isViewSettled;
- (BOOL)_checkForGuestAssetsVisible;

@end
