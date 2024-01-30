@class UIWindow;

@interface UIKeyboardSyntheticTouch : NSObject

@property (nonatomic) double timestamp;
@property (nonatomic) long long phase;
@property (nonatomic) unsigned long long tapCount;
@property (retain, nonatomic) UIWindow *window;
@property (nonatomic) struct CGPoint { double x; double y; } locationInWindow;
@property (readonly, nonatomic) unsigned char _pathIndex;
@property (readonly, nonatomic) unsigned char _pathIdentity;
@property (nonatomic) float _pathMajorRadius;

+ (id)syntheticTouchWithPoint:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1 window:(id)a2;

- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void).cxx_destruct;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1 window:(id)a2;
- (void)_setLocationInWindow:(struct CGPoint { double x0; double x1; })a0 resetPrevious:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })getLocationInWindow;
- (struct CGPoint { double x0; double x1; })previousLocationInView:(id)a0;

@end
