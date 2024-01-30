@class UIWindow;

@interface _UIUpdateCycleDebugOverlay : NSObject <_UIUpdateCompletionObserving> {
    UIWindow *_windowWithBorder;
}

+ (id)instance;

- (void)_updateCompletedForModelMediaTime:(double)a0 timing:(const struct _UIUpdateTiming { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a1;
- (void).cxx_destruct;
- (void)addBorderToWindow:(id)a0;
- (void)removeBorderFromWindow:(id)a0;

@end
