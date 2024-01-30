@class NSNumber, NSError;

@interface FamilyCircleUI.ScreenTimeConfiguration : NSObject <FamilyCircleUI.ScreenTimeConfigurationProtocol> {
    void /* unknown type, empty encoding */ stManagementState;
}

- (void)isContentPrivacyEnabledForDSID:(NSNumber *)a0 completionHandler:(void (^)(NSNumber *, NSError *))a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isRestrictedForFeature:(id)a0;

@end
