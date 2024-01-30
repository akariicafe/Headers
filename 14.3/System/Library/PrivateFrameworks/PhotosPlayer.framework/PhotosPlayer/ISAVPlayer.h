@class ISRateCurveRequest, NSObject;
@protocol OS_dispatch_queue;

@interface ISAVPlayer : AVPlayer {
    ISRateCurveRequest *_currentRequest;
    NSObject<OS_dispatch_queue> *_initializedDispatchQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *actualDispatchQueue;

+ (BOOL)isAppleInternal;
+ (BOOL)isSpringBoard;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDispatchQueue:(id)a0;
- (void)dealloc;
- (id)dispatchQueue;
- (void)setRate:(float)a0;
- (void)playToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withInitialRate:(float)a1 overDuration:(double)a2 progressHandler:(id /* block */)a3;
- (void)_setRate:(float)a0;
- (void)_cancelRateCurveRequest;

@end
