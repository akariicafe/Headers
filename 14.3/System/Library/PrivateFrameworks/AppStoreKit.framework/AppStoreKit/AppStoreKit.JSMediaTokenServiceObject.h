@class NSString;

@interface AppStoreKit.JSMediaTokenServiceObject : NSObject <_TtP11AppStoreKitP33_DDDE28517FCD97BF716F071D2D29E8A432JSMediaTokenServiceObjectExports_> {
    void /* unknown type, empty encoding */ tokenService;
}

@property (nonatomic, readonly) NSString *tokenString;

- (id)init;
- (id)refreshToken;
- (void).cxx_destruct;
- (id)overrideToken:(id)a0;
- (void)resetToken;

@end
