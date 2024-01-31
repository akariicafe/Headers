@interface VideosPlaybackViewControllerAccessibility : __VideosPlaybackViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_handleSingleTap:(id)a0;
- (void)_accessibilitySnarfed;
- (void)_axAnnounceControlsVisible:(BOOL)a0;
- (BOOL)_axOverlayViewVisible;
- (BOOL)_canHideOverlayView;
- (void)_hideOverlayViewWithCompletionBlock:(id /* block */)a0;
- (void)_overlayIdleTimerFired:(id)a0;
- (void)_showOverlayViewQuickHide:(BOOL)a0;

@end
