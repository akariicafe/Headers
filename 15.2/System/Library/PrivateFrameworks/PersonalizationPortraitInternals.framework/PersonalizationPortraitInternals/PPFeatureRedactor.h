@class _PASLock, PPTrialWrapper;

@interface PPFeatureRedactor : NSObject {
    _PASLock *_lock;
    PPTrialWrapper *_trialWrapper;
}

- (void).cxx_destruct;
- (id)initWithTrialWrapper:(id)a0 namespaceName:(id)a1;
- (void)transformFeaturesInPlace:(id)a0;

@end
