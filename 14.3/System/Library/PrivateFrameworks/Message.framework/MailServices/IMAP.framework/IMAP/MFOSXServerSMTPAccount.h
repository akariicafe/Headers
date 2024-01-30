@class NSDictionary, MFOSXServerIMAPAccount;

@interface MFOSXServerSMTPAccount : SMTPAccount

@property (retain, nonatomic, getter=mailAccountIfAvailable) MFOSXServerIMAPAccount *mailAccount;
@property (readonly, nonatomic) NSDictionary *parentAccountMailProperties;

+ (id)accountTypeIdentifier;

- (id)hostname;
- (id)preferredAuthScheme;
- (id)accountForRenewingCredentials;
- (void).cxx_destruct;
- (unsigned int)portNumber;
- (BOOL)shouldUseAuthentication;
- (BOOL)usesSSL;
- (id)username;
- (id)password;

@end
