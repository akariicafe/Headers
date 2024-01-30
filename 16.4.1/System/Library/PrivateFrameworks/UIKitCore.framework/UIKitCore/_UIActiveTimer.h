@class CADisplayLink;

@interface _UIActiveTimer : NSObject {
    CADisplayLink *_displayLink;
    id /* block */ _updateHandler;
}

@property (readonly, nonatomic, getter=isComplete) BOOL complete;

- (void)_tick:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithDuration:(double)a0 updateHandler:(id /* block */)a1;

@end
