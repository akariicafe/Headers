@class LAUIPhysicalButtonView, CALayer, NSString;

@interface LAUIPhysicalButtonViewAnimation : NSObject {
    LAUIPhysicalButtonView *_physicalButtonView;
    CALayer *_layer;
    NSString *_animationKey;
}

- (void)begin;
- (void)end;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (void)update;
- (double)duration;
- (void)endImmediately;
- (id)initWith:(id)a0 layer:(id)a1;
- (void)beginWithDelay:(double)a0;
- (void)addAdditiveAnimation:(id)a0 to:(id)a1 keyPath:(id)a2;

@end
