@protocol PUInterfaceTheme;

@interface PUInterfaceManager : NSObject

@property (class, readonly) id<PUInterfaceTheme> currentTheme;

+ (void)_handleInteractionDisablingTimeoutForBannerViewImagesJump;
+ (BOOL)shouldUseAccessibilityLargeTextLayoutWithTraitCollecton:(id)a0;
+ (void)_handleInteractionDisablingTimeoutForBurningInTrim;
+ (BOOL)shouldUsePhoneLayoutWithTraitCollection:(id)a0;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorSwitchingSource;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorRevertingChanges;
+ (void)_handleInteractionDisablingTimeoutForSearchSelectResult;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorToPhotoBrowserTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorWaitingToDismiss;
+ (void)_handleInteractionDisablingTimeout;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorSavingChanges;
+ (id)beginDisablingUserInteractionForReason:(long long)a0;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorComputingAutoEnhance;
+ (void)_handleInteractionDisablingTimeoutForAlbumStackTransition;
+ (void)_handleInteractionDisablingTimeoutForStartSlideshowFromGrid;
+ (void)_disabledUserInteractionRequestDidTimeOut:(id)a0;
+ (void)_handleInteractionDisablingTimeoutForPhotoBrowserZoomTransition;
+ (void)endDisablingUserInteraction:(id)a0;
+ (void)_handleInteractionDisablingTimeoutForPhotoBrowserToPhotoEditorTransition;
+ (void)_handleInteractionDisablingTimeoutForOverOneUpTransition;
+ (void)_handleInteractionDisablingTimeoutForSearchSelectSuggestion;
+ (id)beginDisablingUserInteractionForReason:(long long)a0 withExpectedTimeout:(double)a1;
+ (void)_handleInteractionDisablingTimeoutForOneUpToPhotoEditorTransition;

@end
