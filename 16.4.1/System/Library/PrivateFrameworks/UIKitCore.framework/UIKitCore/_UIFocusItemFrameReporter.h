@class NSObject, UIFocusSystem;
@protocol OS_dispatch_source;

@interface _UIFocusItemFrameReporter : NSObject {
    NSObject<OS_dispatch_source> *_focusedFrameUpdateTimer;
    BOOL _hasStagedFocusFrameUpdate;
}

@property (weak, nonatomic) UIFocusSystem *focusSystem;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (void)_cancelRepeatingFrameUpdate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_clampRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 insideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_globalFrameForFocusedItemInSystem:(id)a0;
- (BOOL)_rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 differsFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 lowerThreshold:(double)a2 upperThreshold:(double)a3;
- (void)_reportFocusFrameForCurrentlyFocusedItem;
- (void)_reportFocusFrameUpdateForGlobalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_scheduleRepeatingFrameUpdate;

@end
