@class NSString, NSArray, NSNumber, ISBiometricStore;

@interface ISBiometricUpdateTouchIDSettingsOperation : ISOperation

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSString *attestationStringPurchase;
@property (copy, nonatomic) NSString *attestationStringExtendedActions;
@property (retain, nonatomic) ISBiometricStore *biometricStore;
@property (copy, nonatomic) NSArray *certChainPrimary;
@property (copy, nonatomic) NSArray *certChainExtended;
@property BOOL regeneratePublicKey;
@property (copy) id /* block */ resultBlock;
@property BOOL shouldSuppressAuthPrompts;
@property (readonly) long long status;

- (id)initWithAccountIdentifier:(id)a0;
- (void)run;
- (void).cxx_destruct;
- (id)_newUpdateTouchIDSettingsOperation;

@end
