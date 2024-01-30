@class IDSAccountController, NSDictionary, CNFRegController, NSString;

@interface FTRegAccountServiceDelegate : NSObject <AASetupAssistantDelegateService, AAAppleIDLoginPlugin>

@property (retain, nonatomic) CNFRegController *regController;
@property (retain, nonatomic) IDSAccountController *accountController;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceIdentifier;
- (id)init;
- (void).cxx_destruct;
- (void)_cleanup;
- (BOOL)_hasAccount;
- (id)_logName;
- (id)name;
- (id)parametersForLoginRequest;
- (id)delegateServiceIdentifier;
- (id)accountSetupRequestParameters;
- (id)parametersForIdentityEstablishmentRequest;
- (void)handleLoginResponse:(id)a0 completion:(id /* block */)a1;
- (void)completeSetupWithResponseParameters:(id)a0 handler:(id /* block */)a1;
- (long long)serviceType;
- (id)displayName;
- (id)initWithRegController:(id)a0;
- (void)_handleSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)_account:(id)a0 matchesSetupParameters:(id)a1;
- (id)_existingOperationalAccount;
- (BOOL)serviceIsAvailable;
- (BOOL)_hasOperationalAccount;
- (id)_defaultSetupRequestParameters;
- (void)_handleFailureWithErrorCode:(long long)a0;
- (BOOL)_shouldSkipAccountSetup:(id)a0;
- (void)setupOperationFailed;
- (id)_existingAccountForSetupParameters:(id)a0;

@end
