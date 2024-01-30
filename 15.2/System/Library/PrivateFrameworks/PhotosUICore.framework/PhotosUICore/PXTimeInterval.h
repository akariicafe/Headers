@class NSMutableDictionary;

@interface PXTimeInterval : NSObject

@property (nonatomic) long long state;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSMutableDictionary *tokenToTransitionHandler;
@property (readonly, nonatomic) double duration;

- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)endInterval;
- (void)beginInterval;
- (id)addStateTransitionHandler:(id /* block */)a0;
- (void)removeStateTransitionHandler:(id)a0;
- (void)beginIntervalWithTimeOverride:(double)a0;
- (void)endIntervalWithTimeOverride:(double)a0;
- (void)_notifyStateTransitionHandlersOfTransitionFromState:(long long)a0;

@end
