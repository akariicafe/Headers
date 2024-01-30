@interface CLKSensitiveUIMonitor : NSObject

+ (id)sharedMonitor;

- (BOOL)shouldHideForSensitivity:(long long)a0;
- (void)addSensitiveUIObserver:(id)a0;
- (BOOL)_isVendorRelease;
- (void)removeSensitiveUIObserver:(id)a0;
- (BOOL)isSensitiveUIEnabled;
- (BOOL)considersUISensitivitySensitive:(long long)a0;

@end
