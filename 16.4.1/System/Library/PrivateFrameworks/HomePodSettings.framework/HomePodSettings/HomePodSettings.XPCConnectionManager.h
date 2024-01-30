@class NSString, NSDictionary, NSData, NSError;

@interface HomePodSettings.XPCConnectionManager : _TtCs12_SwiftObject <HomePodSettings.ProfileControllerXPCServerInterface> {
    void /* unknown type, empty encoding */ maker;
    void /* unknown type, empty encoding */ retryPolicy;
    void /* unknown type, empty encoding */ internalCnx;
    void /* unknown type, empty encoding */ delayedRetryTask;
    void /* unknown type, empty encoding */ retries;
}

- (void)removeProfileWithIdentifier:(NSString *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)installProfileWithData:(NSData *)a0 completionHandler:(void (^)(NSString *, NSError *))a1;
- (void)installedProfilesWithCompletionHandler:(void (^)(NSDictionary *, NSError *))a0;

@end
