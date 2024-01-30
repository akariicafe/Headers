@class NSString, PKSecureElementPass;

@interface PKIdentityReplaceFingerprintHelper : NSObject <PKDashboardMoreMenuFactoryEligibility> {
    BOOL _isRemote;
    BOOL _canReplace;
    unsigned long long _loading;
    PKSecureElementPass *_pass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)hasCachedEligibility;
- (id)initWithPass:(id)a0 isRemote:(BOOL)a1;
- (BOOL)isEligibile;
- (void)isEligibleWithCompletion:(id /* block */)a0;
- (void)viewControllerWithCompletion:(id /* block */)a0;

@end
