@class NSUUID, NSError;

@interface HomePlatformSettingsUI.XPCConnectionManager : _TtCs12_SwiftObject <HomePlatformSettingsUI.CarrySettingsXPCServerInterface, HomePlatformSettingsUI.BetaEnrollmentXPCServerInterface> {
    void /* unknown type, empty encoding */ maker;
    void /* unknown type, empty encoding */ retryPolicy;
    void /* unknown type, empty encoding */ internalCnx;
    void /* unknown type, empty encoding */ delayedRetryTask;
    void /* unknown type, empty encoding */ retries;
}

- (void)receiveWithBetaEnrollmentHomeID:(NSUUID *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)receiveWithCarrySettingsHomeID:(NSUUID *)a0 completionHandler:(void (^)(NSError *))a1;

@end
