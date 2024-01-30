@class SBCornerFingerPanGestureSettings;

@interface SBCornerFingerGestureClassifier : NSObject {
    SBCornerFingerPanGestureSettings *_settings;
}

- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (BOOL)classifySwipeWithOffsettedAngle:(double)a0 distanceToCorner:(double)a1 portrait:(BOOL)a2;

@end
