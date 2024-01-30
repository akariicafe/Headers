@class ACAccount;

@interface AASetupAssistantTermsFetchRequest : AARequest {
    ACAccount *_account;
}

+ (Class)responseClass;

- (id)initWithAccount:(id)a0;
- (id)urlRequest;
- (id)urlString;
- (void).cxx_destruct;

@end
