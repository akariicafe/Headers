@interface SCNAnimationEvent : NSObject {
    double _eventTime;
    id /* block */ _eventBlock;
}

+ (id)animationEventWithKeyTime:(double)a0 block:(id /* block */)a1;

- (double)time;
- (void)setTime:(double)a0;
- (id /* block */)eventBlock;
- (void)setEventBlock:(id /* block */)a0;
- (id)init;
- (void)dealloc;

@end
