@class NSString;
@protocol SBFLockOutStatusProvider;

@interface SBBiometricAuthenticationPolicy : NSObject <SBUIBiometricAuthenticationPolicy> {
    id<SBFLockOutStatusProvider> _lockOutStatusProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)shouldRelockAfterBioUnlock;
- (id)initWithLockOutProvider:(id)a0;

@end
