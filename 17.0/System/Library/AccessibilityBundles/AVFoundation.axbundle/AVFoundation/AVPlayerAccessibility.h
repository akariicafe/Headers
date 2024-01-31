@interface AVPlayerAccessibility : __AVPlayerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)init;
- (void)willChangeValueForKey:(id)a0;
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(struct OpaqueFigPlaybackItem { } *)a0;
- (void)_accessibilityAsyncObserveAVPlayerIfNeeded;

@end
