@class NSDictionary;

@interface _UITextInputSessionDynamicAccumulator : _UITextInputSessionAccumulator

@property (readonly, nonatomic) NSDictionary *lastResult;

+ (id)accumulatorWithName:(id)a0 type:(long long)a1 depthRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 block:(id /* block */)a3;

- (void)increaseWithActions:(id)a0;
- (void)enumerateAnalytics:(id /* block */)a0;
- (void).cxx_destruct;

@end
