@class TIMobileAssetTimerImpl;

@interface TIMobileAssetTimer : NSObject {
    TIMobileAssetTimerImpl *_impl;
}

+ (id)nextFireDateForDate:(id)a0;
+ (id)scheduledTimerWithExpirationHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithExpirationHandler:(id /* block */)a0;

@end
