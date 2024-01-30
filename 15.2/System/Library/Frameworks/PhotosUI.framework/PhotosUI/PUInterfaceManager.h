@protocol PUInterfaceTheme;

@interface PUInterfaceManager : NSObject

@property (class, readonly) id<PUInterfaceTheme> currentTheme;

+ (void)_handleInteractionDisablingTimeoutForPhotoEditorSavingChanges;
+ (id)beginDisablingUserInteractionForReason:(long long)a0;
+ (BOOL)shouldUsePhoneLayoutWithTraitCollection:(id)a0;
+ (void)_handleInteractionDisablingTimeoutForBannerViewImagesJump;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorSwitchingSource;
+ (void)_handleInteractionDisablingTimeoutForOverOneUpTransition;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorRevertingChanges;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorComputingAutoEnhance;
+ (void)_handleInteractionDisablingTimeoutForAlbumStackTransition;
+ (void)_handleInteractionDisablingTimeoutForSearchSelectSuggestion;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorWaitingToDismiss;
+ (void)_handleInteractionDisablingTimeoutForPhotoBrowserToPhotoEditorTransition;
+ (void)_handleInteractionDisablingTimeoutForStartSlideshowFromGrid;
+ (void)_handleInteractionDisablingTimeoutForOneUpToPhotoEditorTransition;
+ (BOOL)shouldUseAccessibilityLargeTextLayoutWithTraitCollecton:(id)a0;
+ (void)_handleInteractionDisablingTimeoutForPhotoEditorToPhotoBrowserTransition;
+ (void)endDisablingUserInteraction:(id)a0;
+ (void)_handleInteractionDisablingTimeoutForBurningInTrim;
+ (void)_disabledUserInteractionRequestDidTimeOut:(id)a0;
+ (void)_handleInteractionDisablingTimeout;
+ (void)_handleInteractionDisablingTimeoutForPhotoBrowserZoomTransition;
+ (void)_handleInteractionDisablingTimeoutForSearchSelectResult;
+ (id)beginDisablingUserInteractionForReason:(long long)a0 withExpectedTimeout:(double)a1;

@end
