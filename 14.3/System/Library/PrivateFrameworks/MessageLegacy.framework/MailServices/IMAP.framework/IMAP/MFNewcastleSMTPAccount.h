@class CastleIMAPAccount;

@interface MFNewcastleSMTPAccount : SMTPAccount

@property (retain, nonatomic) CastleIMAPAccount *castleAccount;

+ (id)accountTypeIdentifier;

- (id)accountForRenewingCredentials;
- (BOOL)shouldFetchACEDBInfoForError:(id)a0;
- (BOOL)shouldUseAuthentication;
- (void)dealloc;
- (id)mailAccountIfAvailable;
- (id)displayHostname;

@end
