@class AMSFinanceDialogResponse, NSDictionary, NSString, AMSAuthenticateRequest;

@interface AMSFinanceAuthenticateResponse : NSObject <AMSFinancePerformable>

@property (retain, nonatomic) NSDictionary *dialogDictionary;
@property (readonly, nonatomic) AMSFinanceDialogResponse *dialogResponse;
@property (readonly, nonatomic) AMSAuthenticateRequest *authenticateRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)authenticationTypeForResponse:(id)a0 responseDictionary:(id)a1;
+ (id)_authenticateRequestWithAuthType:(unsigned long long)a0 taskInfo:(id)a1 dialogResponse:(id)a2;
+ (id)_performAuthRequest:(id)a0 actionResult:(id)a1 redirectURL:(id)a2 taskInfo:(id)a3;
+ (id)_presentAuthRequest:(id)a0 taskInfo:(id)a1;
+ (void)_handleDialogFromAuthError:(id)a0 taskInfo:(id)a1;
+ (void)_updateTaskWithAuthedAccount:(id)a0 taskInfo:(id)a1;
+ (void)_updateTaskWithLastCredentialSource:(id)a0 taskInfo:(id)a1;
+ (id)performAuthFromResponse:(id)a0 taskInfo:(id)a1;

@end
