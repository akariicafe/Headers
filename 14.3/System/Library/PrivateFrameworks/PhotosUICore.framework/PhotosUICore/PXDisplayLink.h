@class CADisplayLink;

@interface PXDisplayLink : NSObject {
    CADisplayLink *_displayLink;
}

@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double targetTimestamp;
@property (readonly, nonatomic) double currentMediaTime;
@property (readonly, nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) BOOL paused;

- (void)_tick:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1 deferredStart:(BOOL)a2;
- (id)description;
- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1;
- (void)_addToRunLoop;
- (void)invalidate;

@end
