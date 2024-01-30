@interface AppStoreKit.PersonalizedMediaTokenService : NSObject <AMSMediaTokenServiceProtocol> {
    void /* unknown type, empty encoding */ tokenService;
    void /* unknown type, empty encoding */ accounts;
    void /* unknown type, empty encoding */ queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)accountsDidChange;
- (id)fetchMediaToken;
- (void)invalidateMediaToken;

@end
