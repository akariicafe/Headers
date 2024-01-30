@class CastleIMAPAccount;

@interface MFNewcastleSMTPAccount : SMTPAccount

@property (retain, nonatomic) CastleIMAPAccount *castleAccount;

+ (id)accountTypeIdentifier;

- (id)accountForRenewingCredentials;
- (void).cxx_destruct;
- (BOOL)shouldFetchACEDBInfoForError:(id)a0;
- (BOOL)shouldUseAuthentication;
- (id)mailAccountIfAvailable;
- (id)displayHostname;

@end
