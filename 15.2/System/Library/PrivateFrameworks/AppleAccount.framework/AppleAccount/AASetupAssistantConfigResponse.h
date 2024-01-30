@class NSString, NSDictionary;

@interface AASetupAssistantConfigResponse : AAResponse {
    NSDictionary *_urls;
}

@property (readonly, nonatomic) NSString *signingSessionCertURL;
@property (readonly, nonatomic) NSString *signingSessionURL;
@property (readonly, nonatomic) NSString *aboutURL;
@property (readonly, nonatomic) NSString *xmlUI;
@property (readonly, nonatomic) NSString *upgradeIOSTermsUI;
@property (readonly, nonatomic) NSString *genericTermsURL;
@property (readonly, nonatomic) NSString *iForgotUIURL;
@property (readonly, nonatomic) NSString *authenticateURL;
@property (readonly, nonatomic) NSString *createAppleIDURL;
@property (readonly, nonatomic) NSString *updateAppleIDURL;
@property (readonly, nonatomic) NSString *createDelegateAccountsURL;
@property (readonly, nonatomic) NSString *checkValidityURL;
@property (readonly, nonatomic) NSString *iForgotURL;
@property (readonly, nonatomic) NSString *existingAppleIDTermsUIURL;
@property (readonly, nonatomic) BOOL setupAssistantServerEnabled;
@property (readonly, nonatomic) NSString *loginDelegatesURL;
@property (readonly, nonatomic) NSString *activeEmailDomain;
@property (readonly, nonatomic) NSString *upgradeStatusURL;

- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
