@class SBFAnalyticsClient;

@interface SBLockStateAggregator : NSObject {
    unsigned long long _lockState;
}

@property (weak, nonatomic) SBFAnalyticsClient *analyticsClient;

+ (id)sharedInstance;

- (void)_updateLockState;
- (unsigned long long)lockState;
- (id)_initWithAnalyticsClient:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_descriptionForLockState:(unsigned long long)a0;
- (BOOL)hasAnyLockState;

@end
