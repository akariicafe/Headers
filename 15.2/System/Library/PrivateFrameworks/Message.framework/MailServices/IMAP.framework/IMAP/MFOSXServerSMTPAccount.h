@class NSDictionary, MFOSXServerIMAPAccount;

@interface MFOSXServerSMTPAccount : SMTPAccount

@property (retain, nonatomic, getter=mailAccountIfAvailable) MFOSXServerIMAPAccount *mailAccount;
@property (readonly, nonatomic) NSDictionary *parentAccountMailProperties;

+ (id)accountTypeIdentifier;

- (id)hostname;
- (id)username;
- (id)password;
- (void).cxx_destruct;
- (BOOL)usesSSL;
- (unsigned int)portNumber;
- (id)preferredAuthScheme;
- (id)accountForRenewingCredentials;
- (BOOL)shouldUseAuthentication;

@end
