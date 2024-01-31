@interface PUScrubberViewAccessibility : __PUScrubberViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)canBecomeFocused;
- (id)accessibilityCustomActions;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)_axVideoSession;
- (void)_axCloseVideoPlaybackAction;
- (BOOL)_axDecrementForThreeFingerScroll;
- (BOOL)_axIncrementForThreeFingerScroll;
- (BOOL)_axIsVideoPlayerActivated;
- (void)_axScrollToAssetReference:(id)a0 inViewModel:(id)a1 forThreeFingerScroll:(BOOL)a2;
- (id)_axShowingType;
- (id)_axTileControllerForAsset:(id)a0;
- (id)_axVideoPlaybackValue;
- (id)_axVideoPlayer;

@end
