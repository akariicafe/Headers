@class NSDictionary, NSMutableDictionary, NSMapTable;

@interface PUBrowsingViewModelChange : PUViewModelChange {
    NSMutableDictionary *_mutableViewModelChangesByAssetReference;
    NSMapTable *_mutableSharedViewModelChangesByAsset;
}

@property (nonatomic, setter=_setAssetsDataSourceDidChange:) BOOL assetsDataSourceDidChange;
@property (nonatomic, setter=_setCurrentAssetDidChange:) BOOL currentAssetDidChange;
@property (nonatomic, setter=_setCurrentAssetTransitionProgressDidChange:) BOOL currentAssetTransitionProgressDidChange;
@property (nonatomic, setter=_setBrowsingSpeedRegimeDidChange:) BOOL browsingSpeedRegimeDidChange;
@property (nonatomic, setter=_setIsScrubbingDidChange:) BOOL isScrubbingDidChange;
@property (nonatomic, setter=_setIsScrollingDidChange:) BOOL isScrollingDidChange;
@property (nonatomic) BOOL livePhotoShouldPlayDidChange;
@property (nonatomic, setter=_setAnimatingAnyTransitionDidChange:) BOOL isAnimatingAnyTransitionDidChange;
@property (nonatomic, setter=_setSecondScreenSizeDidChange:) BOOL secondScreenSizeDidChange;
@property (nonatomic, setter=_setTransitionDriverIdentifierDidChange:) BOOL transitionDriverIdentifierDidChange;
@property (nonatomic, setter=_setChromeVisibilityDidChange:) BOOL chromeVisibilityDidChange;
@property (nonatomic, setter=_setPresentingOverOneUpDidChange:) BOOL presentingOverOneUpDidChange;
@property (nonatomic, setter=_setReviewScreenBarsModelDidChange:) BOOL reviewScreenBarsModelDidChange;
@property (nonatomic, setter=_setVideoOverlayPlayStateDidChange:) BOOL videoOverlayPlayStateDidChange;
@property (nonatomic, setter=_setIsAttemptingToPlayVideoOverlayDidChange:) BOOL isAttemptingToPlayVideoOverlayDidChange;
@property (nonatomic, setter=_setIsScrubbingActivationDidChange:) BOOL isScrubbingActivationDidChange;
@property (nonatomic) BOOL isVideoContentAllowedDidChange;
@property (nonatomic, setter=_setReviewScreenSelectionDidChange:) BOOL reviewScreenSelectionDidChange;
@property (nonatomic, setter=_setNavigationBarTitleDidChange:) BOOL navigationBarTitleDidChange;
@property (nonatomic, setter=_setResizeTaskDescriptorViewModelDidChange:) BOOL resizeTaskDescriptorViewModelDidChange;
@property (nonatomic, setter=_setContentPrivacyStateDidChange:) BOOL contentPrivacyStateDidChange;
@property (nonatomic, setter=_setSystemAuthenticationTypeDidChange:) BOOL systemAuthenticationTypeDidChange;
@property (nonatomic, setter=_setWantsContentUnavailableUnlockButtonVisibleDidChange:) BOOL wantsContentUnavailableUnlockButtonVisibleDidChange;
@property (nonatomic, setter=_setIsInSelectionModeDidChange:) BOOL isInSelectionModeDidChange;
@property (readonly, nonatomic) NSMutableDictionary *_mutableViewModelChangesByAssetReference;
@property (readonly, nonatomic) NSMapTable *_mutableSharedViewModelChangesByAsset;
@property (readonly, nonatomic) NSMapTable *assetSharedViewModelChangesByAsset;
@property (readonly, nonatomic) NSDictionary *assetViewModelChangesByAssetReference;

- (BOOL)hasChanges;
- (void).cxx_destruct;

@end
