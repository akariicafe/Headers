@interface PXKeyboardSettings : PXSettings

@property (nonatomic) BOOL enableTungstenKeyboardNavigation;
@property (nonatomic) BOOL enableTungstenFocusEnvironmentSupport;
@property (nonatomic) double animationDuration;
@property (nonatomic) double dampingRatio;
@property (nonatomic) BOOL enableShadow;
@property (nonatomic) double dimmingFactor;
@property (nonatomic) double shadowYOffset;
@property (nonatomic) double shadowBlurRadius;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) long long yearsFocusAnimationStyle;
@property (nonatomic) double yearsFocusPadding;
@property (nonatomic) long long monthsFocusAnimationStyle;
@property (nonatomic) double monthsFocusPadding;
@property (nonatomic) long long daysFocusAnimationStyle;
@property (nonatomic) double daysFocusPadding;
@property (nonatomic) long long allPhotosAspectFitFocusAnimationStyle;
@property (nonatomic) double allPhotosAspectFitFocusPadding;
@property (nonatomic) long long allPhotosAspectFillFocusAnimationStyle;
@property (nonatomic) double allPhotosAspectFillFocusPadding;
@property (nonatomic) double detailsViewOverlayAlpha;

+ (id)sharedInstance;
+ (id)_makeLocalFocusAnimationSection;
+ (id)_makeGlobalFocusAnimationSection;
+ (id)settingsControllerModule;
+ (id)_makeAnimationStyleChoiceRowWithTitle:(id)a0 valueKeyPath:(id)a1;

- (void)setDefaultValues;
- (id)parentSettings;
- (id)globalFocusAnimationShadow;
- (id)archiveValueForKey:(id)a0;
- (void)applyArchiveValue:(id)a0 forKey:(id)a1;

@end
