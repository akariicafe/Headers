@class CADisplayLink;

@interface UIAnimatorScreenLink : NSObject {
    struct _UIUpdateSequenceItemInternal { } *_updateSequenceItem;
    CADisplayLink *_displayLink;
    id /* block */ _updateAction;
}

@property unsigned short animationCount;

+ (id)startTimerWithScreen:(id)a0 action:(id /* block */)a1;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)onDisplayLink:(id)a0;

@end
