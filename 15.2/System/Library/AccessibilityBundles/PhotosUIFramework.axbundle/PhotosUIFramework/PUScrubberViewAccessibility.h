@interface PUScrubberViewAccessibility : __PUScrubberViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (BOOL)_axIncrementForThreeFingerScroll;
- (BOOL)_axDecrementForThreeFingerScroll;
- (BOOL)_axIsVideoPlayerActivated;
- (id)_axVideoPlayer;
- (id)_axShowingType;
- (id)_axVideoPlaybackValue;
- (void)_axCloseVideoPlaybackAction;
- (void)_axScrollToAssetReference:(id)a0 inViewModel:(id)a1 forThreeFingerScroll:(BOOL)a2;
- (id)_axTileControllerForAsset:(id)a0;

@end
