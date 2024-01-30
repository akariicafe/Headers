@class NSString, NSArray, AKUserInformation, AKAuthorizationUserResponse;
@protocol AKCredentialRequestProtocol;

@interface AKAuthorizationScopeChoices : NSObject

@property (class, readonly, nonatomic) NSString *localizedGivenNameLabel;
@property (class, readonly, nonatomic) NSString *localizedFamilyNameLabel;

@property (copy, nonatomic) NSArray *scopes;
@property (copy, nonatomic) AKUserInformation *userInformation;
@property (retain, nonatomic) id<AKCredentialRequestProtocol> selectedRequest;
@property unsigned long long indexOfChosenEmail;
@property unsigned long long indexOfChosenLogin;
@property BOOL wantsPrivateEmail;
@property (readonly, nonatomic) unsigned long long emailCount;
@property (readonly, nonatomic) NSString *chosenEmail;
@property (readonly, nonatomic) NSString *forwardingEmail;
@property (readonly, nonatomic) AKAuthorizationUserResponse *userResponse;
@property (readonly, nonatomic) unsigned long long personNameComponentsOrder;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedChosenEmail;

+ (id)_dotsWithLength:(unsigned long long)a0;
+ (id)obfuscatedEmail:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)_personNameComponents;
- (id)_userSelection;
- (id)emailAtIndex:(unsigned long long)a0;
- (id)initWithScopes:(id)a0 userInformation:(id)a1;
- (void)setGivenName:(id)a0 familyName:(id)a1;

@end
