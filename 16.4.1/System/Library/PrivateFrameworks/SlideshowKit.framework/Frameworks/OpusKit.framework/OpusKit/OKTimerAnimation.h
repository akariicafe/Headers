@class CAMediaTimingFunction, NSMutableDictionary, NSTimer, NSDictionary;

@interface OKTimerAnimation : NSObject {
    NSTimer *_timer;
    NSDictionary *_fromValues;
    NSDictionary *_toValues;
    double _duration;
    double _currentInterval;
    NSMutableDictionary *_previousValues;
    id /* block */ _progressBlock;
    id /* block */ _completionBlock;
}

@property (nonatomic) BOOL additionally;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

+ (id)animationFromValues:(id)a0 toValues:(id)a1 withDuration:(double)a2 progressBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;

- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)start;
- (void)handleTimer:(id)a0;

@end
