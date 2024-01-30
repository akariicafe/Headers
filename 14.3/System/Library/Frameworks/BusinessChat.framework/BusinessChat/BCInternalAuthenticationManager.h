@class NSString, BCInternalAuthenticationRequest;
@protocol ACAccountProtocol, ACAccountStoreProtocol;

@interface BCInternalAuthenticationManager : NSObject

@property (retain, nonatomic) id<ACAccountProtocol> account;
@property (retain, nonatomic) id<ACAccountStoreProtocol> accountStore;
@property (retain, nonatomic) BCInternalAuthenticationRequest *authenticationRequest;
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
- (id)personIdentifier;
- (id)deviceSerialNumber;
- (id)initWithAuthenticationRequest:(id)a0;
- (id)initWithAuthenticationRequest:(id)a0 acAccount:(id)a1 acAccountStore:(id)a2;
- (id)altPersonIdentifier;
- (id)globalAuthToken;
- (id)labelCategory;
- (void)fetchCredentials:(id /* block */)a0;

@end
