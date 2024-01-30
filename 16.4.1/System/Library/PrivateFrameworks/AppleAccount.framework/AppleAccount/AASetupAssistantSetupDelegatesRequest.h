@class NSDictionary, AASigningSession, ACAccount;

@interface AASetupAssistantSetupDelegatesRequest : AARequest {
    NSDictionary *setupParameters;
    AASigningSession *signingSession;
    ACAccount *_account;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 withSetupParameters:(id)a1 signingSession:(id)a2;

@end
