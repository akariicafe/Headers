@interface AppStoreKitInternal.PersonalizedMediaTokenService : NSObject <AMSMediaTokenServiceProtocol> {
    void /* unknown type, empty encoding */ tokenService;
    void /* unknown type, empty encoding */ accounts;
    void /* unknown type, empty encoding */ queue;
}

- (void)invalidateMediaToken;
- (id)fetchMediaToken;
- (void).cxx_destruct;
- (id)init;
- (void)accountsDidChange;

@end
