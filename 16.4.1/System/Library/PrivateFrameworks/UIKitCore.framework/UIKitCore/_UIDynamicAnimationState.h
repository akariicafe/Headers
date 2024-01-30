@class UIScreen, NSTimer, CADisplayLink, NSMutableArray;

@interface _UIDynamicAnimationState : NSObject {
    UIScreen *_screen;
    CADisplayLink *_displayLink;
    NSTimer *_timer;
    NSMutableArray *_activeAnimations;
    double _lastUpdateTime;
    BOOL _shouldSchedYield;
}

@end
