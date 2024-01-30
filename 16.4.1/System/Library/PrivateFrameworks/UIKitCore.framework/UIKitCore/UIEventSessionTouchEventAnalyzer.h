@interface UIEventSessionTouchEventAnalyzer : NSObject

+ (double)squaredDistanceBetweenPoint:(struct CGPoint { double x0; double x1; })a0 andPoint:(struct CGPoint { double x0; double x1; })a1;

- (id)init;
- (id)checkifGestureComplete:(id)a0;
- (id)completeGesture:(id)a0;
- (long long)determineWindowSectionWithLocationInWindow:(struct CGPoint { double x0; double x1; })a0 withWindowBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)didPointerClickWithTrackpadFingerDownCount:(long long)a0 withLocationInWindow:(struct CGPoint { double x0; double x1; })a1 withWindowBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)didPointerHoverWithTrackpadFingerDownCount:(long long)a0 withLocationInWindow:(struct CGPoint { double x0; double x1; })a1 withWindowBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)didTouchWithID:(id)a0 withPhase:(long long)a1 withType:(long long)a2 withLocationInWindow:(struct CGPoint { double x0; double x1; })a3 withWindowBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 withTrackpadFingerDownCount:(long long)a5;

@end
