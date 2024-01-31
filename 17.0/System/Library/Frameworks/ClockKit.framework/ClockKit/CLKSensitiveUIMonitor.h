@interface CLKSensitiveUIMonitor : NSObject

+ (id)sharedMonitor;

- (void)addSensitiveUIObserver:(id)a0;
- (void)removeSensitiveUIObserver:(id)a0;
- (BOOL)_isVendorRelease;
- (BOOL)shouldHideForSensitivity:(long long)a0;
- (BOOL)considersUISensitivitySensitive:(long long)a0;
- (BOOL)isSensitiveUIEnabled;

@end
