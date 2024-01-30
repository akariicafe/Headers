@class NSString, BCInternalAuthenticationRequest;
@protocol ACAccountProtocol, ACAccountStoreProtocol;

@interface BCInternalAuthenticationManager : NSObject {
    BCInternalAuthenticationRequest *_authenticationRequest;
    id<ACAccountProtocol> _account;
    id<ACAccountStoreProtocol> _accountStore;
}

@property (readonly, nonatomic) BCInternalAuthenticationRequest *authenticationRequest;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *middleName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *action;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL isUserSignedIn;

- (void).cxx_destruct;
- (void)fetchCredentials:(id /* block */)a0;
- (id)initWithAuthenticationRequest:(id)a0;

@end
