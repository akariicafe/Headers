@class CastleIMAPAccount;

@interface _MFNewcastleAuthenticator : ECSASLAuthenticator {
    BOOL _sentResponse;
}

@property (retain, nonatomic) CastleIMAPAccount *castleAccount;

- (void).cxx_destruct;
- (id)initWithAuthenticationScheme:(id)a0 account:(id)a1 connection:(id)a2;
- (BOOL)justSentPlainTextPassword;
- (id)responseForServerData:(id)a0;
- (id)saslName;
- (BOOL)supportsInitialClientResponse;

@end
