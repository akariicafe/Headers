@interface SCNAnimationEvent : NSObject {
    double _eventTime;
    id /* block */ _eventBlock;
}

+ (id)animationEventWithKeyTime:(double)a0 block:(id /* block */)a1;

- (double)time;
- (void)setTime:(double)a0;
- (void)setEventBlock:(id /* block */)a0;
- (void)dealloc;
- (id /* block */)eventBlock;
- (id)init;

@end
