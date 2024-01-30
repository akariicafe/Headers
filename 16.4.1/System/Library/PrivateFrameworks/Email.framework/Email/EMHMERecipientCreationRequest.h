@class NSString, ACAccount;

@interface EMHMERecipientCreationRequest : AARequest {
    ACAccount *_account;
    NSString *_recipient;
    NSString *_hmeAddress;
}

+ (id)log;
+ (Class)responseClass;
+ (BOOL)canCreateHMEReplyToAddress:(id)a0;

- (id)urlRequest;
- (id)urlString;
- (void).cxx_destruct;
- (id)_httpBody;
- (id)initWithAccount:(id)a0 recipient:(id)a1 hmeAddress:(id)a2;

@end
