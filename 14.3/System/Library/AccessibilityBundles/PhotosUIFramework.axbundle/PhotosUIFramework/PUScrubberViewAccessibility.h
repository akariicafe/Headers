@interface PUScrubberViewAccessibility : __PUScrubberViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (id)accessibilityValue;
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
