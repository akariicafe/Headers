@class NSString, NSArray, FBSApplicationInfo, NSObject;
@protocol OS_dispatch_queue;

@interface FBSLegacySignatureValidationService : NSObject <FBSApplicationTrustDataProvider> {
    FBSApplicationInfo *_appInfo;
    BOOL _hasUniversalProvisioningProfile;
    BOOL _hasFreeDeveloperProvisioningProfile;
    BOOL _isManaged;
    NSArray *_provisioningProfiles;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)trustStateForApplication:(id)a0;
- (void).cxx_destruct;
- (void)_initializeProfiles:(id)a0;
- (id)_workQueue_expirationDateForProvisioningProfile;
- (BOOL)_workQueue_signatureNeedsExplicitUserTrust;
- (id)initWithApplicationInfo:(id)a0 andProvisioningProfiles:(id)a1 isManaged:(BOOL)a2;

@end
