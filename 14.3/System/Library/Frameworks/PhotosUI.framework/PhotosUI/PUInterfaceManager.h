@protocol PUInterfaceTheme;

@interface PUInterfaceManager : NSObject

@property (class, readonly) id<PUInterfaceTheme> currentTheme;

+ (void)_handleInteractionDisablingTimeoutForPhotoBrowserToPhotoEditorTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorRevertingChanges;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorSwitchingSource;
+ (void)_handleInteractionDisablingTimeoutForBannerViewImagesJump;
+ (id)beginDisablingUserInteractionForReason:(long long)a0;
+ (void)_handleInteractionDisablingTimeoutForSearchSelectSuggestion;
+ (void)_handleInteractionDisablingTimeoutForBurningInTrim;
+ (void)_handleInteractionDisablingTimeoutForOverOneUpTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoBrowserZoomTransition;
+ (void)_handleInteractionDisablingTimeoutForSearchSelectResult;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorWaitingToDismiss;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorSavingChanges;
+ (void)_handleInteractionDisablingTimeoutForOneUpToPhotoEditorTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorComputingAutoEnhance;
+ (void)_handleInteractionDisablingTimeoutForAlbumStackTransition;
+ (BOOL)shouldUsePhoneLayoutWithTraitCollection:(id)a0;
+ (void)endDisablingUserInteraction:(id)a0;
+ (void)_handleInteractionDisablingTimeoutForStartSlideshowFromGrid;
+ (id)beginDisablingUserInteractionForReason:(long long)a0 withExpectedTimeout:(double)a1;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorToPhotoBrowserTransition;
+ (BOOL)shouldUseAccessibilityLargeTextLayoutWithTraitCollecton:(id)a0;
+ (void)_disabledUserInteractionRequestDidTimeOut:(id)a0;
+ (void)_handleInteractionDisablingTimeout;

@end
