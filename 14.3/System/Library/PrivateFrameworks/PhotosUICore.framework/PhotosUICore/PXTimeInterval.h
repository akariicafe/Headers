@class NSMutableDictionary;

@interface PXTimeInterval : NSObject

@property (nonatomic) long long state;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSMutableDictionary *tokenToTransitionHandler;
@property (readonly, nonatomic) double duration;

- (id)init;
- (void).cxx_destruct;
- (void)beginInterval;
- (id)addStateTransitionHandler:(id /* block */)a0;
- (void)reset;
- (void)removeStateTransitionHandler:(id)a0;
- (void)beginIntervalWithTimeOverride:(double)a0;
- (void)endIntervalWithTimeOverride:(double)a0;
- (void)_notifyStateTransitionHandlersOfTransitionFromState:(long long)a0;
- (void)endInterval;

@end
