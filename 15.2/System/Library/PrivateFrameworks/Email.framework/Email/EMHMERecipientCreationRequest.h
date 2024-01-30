@class NSString, ACAccount;

@interface EMHMERecipientCreationRequest : AARequest {
    ACAccount *_account;
    NSString *_recipient;
    NSString *_hmeAddress;
}

+ (Class)responseClass;
+ (id)log;
+ (BOOL)canCreateHMEReplyToAddress:(id)a0;

- (id)urlString;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)_httpBody;
- (id)initWithAccount:(id)a0 recipient:(id)a1 hmeAddress:(id)a2;

@end
