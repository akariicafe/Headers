@class _PASLock;

@interface ATXModeEntityTrialClientWrapper : ATXTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)initWithClientIdentifier:(int)a0;
- (void).cxx_destruct;
- (id)trainDenyListWithDenyListModels;
- (id)appModeEntityDenyListModelWeights;
- (id)appModeEntityModelWeights;
- (id)contactModeEntityDenyListModelWeights;
- (id)contactModeEntityModelWeights;
- (id)notificationModeEntityModelWeights;
- (void)updateFactors;
- (id)widgetModeEntityModelWeights;

@end
