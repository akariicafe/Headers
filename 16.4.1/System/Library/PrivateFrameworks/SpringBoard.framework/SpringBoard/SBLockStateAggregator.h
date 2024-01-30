@class SBFAnalyticsClient;

@interface SBLockStateAggregator : NSObject {
    unsigned long long _lockState;
}

@property (weak, nonatomic) SBFAnalyticsClient *analyticsClient;

+ (id)sharedInstance;

- (BOOL)hasAnyLockState;
- (unsigned long long)lockState;
- (id)_descriptionForLockState:(unsigned long long)a0;
- (id)_initWithAnalyticsClient:(id)a0;
- (void)_updateLockState;
- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
