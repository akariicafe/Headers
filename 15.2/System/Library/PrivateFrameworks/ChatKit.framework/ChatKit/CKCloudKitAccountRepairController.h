@class NSString, AAUIDeviceToDeviceEncryptionHelper;

@interface CKCloudKitAccountRepairController : NSObject <AAUIDeviceToDeviceEncryptionHelperDelegate>

@property (retain, nonatomic) AAUIDeviceToDeviceEncryptionHelper *encryptionHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accountStore;
- (id)authenticationContext;
- (id)primaryAppleAccount;
- (void).cxx_destruct;
- (Class)authenticationContextClass;
- (id)AKSecurityUpgradeContextMessages;
- (id)AAUIDeviceToDeviceEncryptionHelperWithPresentingViewController:(id)a0;
- (void)deviceToDeviceEncryptionHelper:(id)a0 shouldContinueUpgradingUserToHSA2WithCompletion:(id /* block */)a1;
- (void)beginRepairWithPresentingViewController:(id)a0 completion:(id /* block */)a1;

@end
