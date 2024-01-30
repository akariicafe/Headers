@class UIWindow;

@interface _UIUpdateCycleDebugOverlay : NSObject <_UIUpdateCompletionObserving> {
    UIWindow *_windowWithBorder;
}

+ (id)instance;

- (void).cxx_destruct;
- (void)_updateCompleted;
- (void)addBorderToWindow:(id)a0;
- (void)removeBorderFromWindow:(id)a0;

@end
