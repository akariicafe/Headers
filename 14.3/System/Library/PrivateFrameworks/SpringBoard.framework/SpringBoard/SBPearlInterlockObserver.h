@class NSString;
@protocol SBUIBiometricResource;

@interface SBPearlInterlockObserver : NSObject <SBUIBiometricResourceObserver> {
    id<SBUIBiometricResource> _biometricResource;
    BOOL _fired;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_fire;
- (void).cxx_destruct;
- (void)biometricResource:(id)a0 observeEvent:(unsigned long long)a1;
- (id)initWithBiometricResource:(id)a0;
- (void)biometricResource:(id)a0 matchingEnabledDidChange:(BOOL)a1;
- (void)activate;
- (void)deactivate;
- (void)_checkForLockout;

@end
