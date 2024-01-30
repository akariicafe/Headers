@interface AppStoreKitInternal.PersonalizedMediaTokenService : NSObject <AMSMediaTokenServiceProtocol> {
    void /* unknown type, empty encoding */ tokenService;
    void /* unknown type, empty encoding */ accounts;
    void /* unknown type, empty encoding */ queue;
}

- (id)fetchMediaToken;
- (void)accountsDidChange;
- (void)invalidateMediaToken;
- (id)init;
- (void).cxx_destruct;

@end
