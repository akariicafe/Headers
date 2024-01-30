@class UserIdentifyIntentResponse, UserIdentifyIdentityResolutionResult, UserIdentifyIntent;

@interface SiriIdentityInternal.IdentifyUserIntentHandler : NSObject <UserIdentifyIntentHandling> {
    void /* unknown type, empty encoding */ userIdentity;
    void /* unknown type, empty encoding */ currentRequest;
    void /* unknown type, empty encoding */ currentDevice;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmUserIdentify:(UserIdentifyIntent *)a0 completion:(void (^)(UserIdentifyIntentResponse *))a1;
- (void)handleUserIdentify:(UserIdentifyIntent *)a0 completion:(void (^)(UserIdentifyIntentResponse *))a1;
- (void)resolveIdentityForUserIdentify:(UserIdentifyIntent *)a0 withCompletion:(void (^)(UserIdentifyIdentityResolutionResult *))a1;

@end
