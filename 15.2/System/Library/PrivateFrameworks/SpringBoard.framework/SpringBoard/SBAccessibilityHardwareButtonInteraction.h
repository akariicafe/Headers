@class NSString;

@interface SBAccessibilityHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction>

@property (readonly, nonatomic) unsigned long long buttonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hardwareButtonInteractionForLockButton;
+ (id)hardwareButtonInteractionForHomeButton;

- (id)hardwareButtonGestureParameters;
- (void)dealloc;
- (BOOL)consumeTriplePressUp;
- (id)initWithButtonType:(unsigned long long)a0;
- (void)_registerAsNotificationObserver;
- (void)_unregisterAsNotificationObserver;
- (BOOL)_supportsTripleClick;
- (double)_downToDownInterval;
- (BOOL)_presentMigrationAlertIfNeeded;
- (struct __CFString { } *)_speedChangedNotificationName;
- (void)_accessibilityPrefsDidChange;

@end
