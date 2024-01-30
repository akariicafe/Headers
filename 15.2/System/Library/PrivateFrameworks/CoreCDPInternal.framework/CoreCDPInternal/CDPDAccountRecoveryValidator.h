@class NSDictionary, NSString, CDPContext;
@protocol CDPAuthProviderInternal;

@interface CDPDAccountRecoveryValidator : NSObject <CDPRecoveryKeyValidatorInternal> {
    id<CDPAuthProviderInternal> _authProvider;
    CDPContext *_context;
}

@property (copy, nonatomic) NSDictionary *recoveredInfo;
@property (copy, nonatomic) NSString *recoveryKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_cdpErrorFromAuthKitError:(id)a0;
- (void)confirmRecoveryKey:(id)a0 completion:(id /* block */)a1;
- (void)generateRecoveryKey:(id /* block */)a0;
- (id)initWithContext:(id)a0 authProvider:(id)a1;

@end
