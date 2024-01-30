@interface AMSPaymentSheetMetricsEvent : AMSMetricsEvent

+ (id)_timestamp;
+ (id)dictionaryForBiometricMatchState:(long long)a0 didBiometricsLockout:(BOOL)a1;
+ (id)dictionaryForCancellationEvent:(unsigned long long)a0 didBiometricsLockout:(BOOL)a1;
+ (id)dictionaryForUserAction:(long long)a0 didBiometricsLockout:(BOOL)a1;

- (void)addDualActionSuccess:(BOOL)a0;
- (void)addBiometricMatchStateFinal:(long long)a0;
- (void)addClientMetadataForPurchaseInfo:(id)a0 metricsDictionary:(id)a1;
- (void)addUserActions:(id)a0;

@end
