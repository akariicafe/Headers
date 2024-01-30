@class NSString, SSAccount, SSAuthenticateRequest;

@interface MDMSSAuthenticationRequestDelegate : MDMSSRequestDelegate <SSAuthenticateRequestDelegate> {
    SSAccount *_authenticatedAccount;
}

@property (readonly, retain, nonatomic) SSAuthenticateRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithAuthenticationContext:(id)a0;

@end
