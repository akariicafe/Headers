@class NSDictionary, MFOSXServerIMAPAccount;

@interface MFOSXServerSMTPAccount : SMTPAccount

@property (retain, nonatomic, getter=mailAccountIfAvailable) MFOSXServerIMAPAccount *mailAccount;
@property (readonly, nonatomic) NSDictionary *parentAccountMailProperties;

+ (id)accountTypeIdentifier;

- (id)hostname;
- (id)preferredAuthScheme;
- (id)accountForRenewingCredentials;
- (unsigned int)portNumber;
- (BOOL)shouldUseAuthentication;
- (void)dealloc;
- (BOOL)usesSSL;
- (id)username;
- (id)password;

@end
