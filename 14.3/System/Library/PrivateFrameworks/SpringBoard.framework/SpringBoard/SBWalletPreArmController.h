@class PKPassLibrary, NSMutableDictionary, NSHashTable;
@protocol SBUIBiometricResource;

@interface SBWalletPreArmController : NSObject {
    PKPassLibrary *_passLibrary;
    id<SBUIBiometricResource> _biometricResource;
    long long _triggerSource;
    NSHashTable *_disabledPreArmAssertions;
    NSMutableDictionary *_disabledPreArmAssertionsByType;
}

@property (readonly, nonatomic, getter=isPreArmAvailable) BOOL preArmAvailable;
@property (readonly, nonatomic, getter=isPreArmAllowed) BOOL preArmAllowed;
@property (readonly, nonatomic, getter=isPreArmTriggeredByLockButtonDoublePress) BOOL preArmTriggeredByLockButtonDoublePress;
@property (readonly, nonatomic, getter=isPreArmTriggeredByHomeButtonDoublePress) BOOL preArmTriggeredByHomeButtonDoublePress;
@property (readonly, nonatomic, getter=isPreArmSuppressed) BOOL preArmSuppressed;
@property (readonly, nonatomic, getter=isPreArmExternallySuppressed) BOOL preArmExternallySuppressed;

+ (id)sharedInstance;

- (id)initWithPassLibrary:(id)a0 biometricResource:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (long long)_computeTriggerSource;
- (void)presentPreArmInterfaceForTriggerSource:(long long)a0 completion:(id /* block */)a1;
- (id)acquireSuppressPreArmAssertionOfType:(long long)a0 forReason:(id)a1;
- (long long)_contactlessInterfaceSourceForTriggerSource:(long long)a0;
- (id)acquireSuppressPreArmAssertionForReason:(id)a0;

@end
