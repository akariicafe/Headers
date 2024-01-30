@class NSDictionary, MFOSXServerIMAPAccount;

@interface MFOSXServerSMTPAccount : SMTPAccount

@property (retain, nonatomic, getter=mailAccountIfAvailable) MFOSXServerIMAPAccount *mailAccount;
@property (readonly, nonatomic) NSDictionary *parentAccountMailProperties;

+ (id)accountTypeIdentifier;

- (id)hostname;
- (id)username;
- (id)password;
- (BOOL)usesSSL;
- (void)dealloc;
- (unsigned int)portNumber;
- (id)preferredAuthScheme;
- (id)accountForRenewingCredentials;
- (BOOL)shouldUseAuthentication;

@end
