@interface SBLockStateAggregator : NSObject {
    unsigned long long _lockState;
}

+ (id)sharedInstance;

- (id)init;
- (void)_updateLockState;
- (void)dealloc;
- (id)description;
- (id)_descriptionForLockState:(unsigned long long)a0;
- (BOOL)hasAnyLockState;
- (unsigned long long)lockState;

@end
