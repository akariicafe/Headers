@class ACAccountStore, AKAnisetteProvisioningController;

@interface PKBusinessChatController : NSObject {
    ACAccountStore *_accountStore;
    AKAnisetteProvisioningController *_provisioningController;
}

- (void).cxx_destruct;
- (id)init;
- (void)openBusinessChatWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_generateAuthBagWithCompletion:(id /* block */)a0;

@end
