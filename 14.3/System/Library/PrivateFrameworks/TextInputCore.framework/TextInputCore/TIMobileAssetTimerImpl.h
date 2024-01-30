@class NSTimer;

@interface TIMobileAssetTimerImpl : NSObject {
    id /* block */ _expirationHandler;
    NSTimer *_assetTimer;
}

+ (id)nextFireDateForDate:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)initWithExpirationHandler:(id /* block */)a0;
- (void)assetTimerFired;
- (void)updateAssetTimer;

@end
