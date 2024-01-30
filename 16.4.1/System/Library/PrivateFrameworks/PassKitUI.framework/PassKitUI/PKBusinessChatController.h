@class ACAccountStore, AKAnisetteProvisioningController;

@interface PKBusinessChatController : NSObject {
    ACAccountStore *_accountStore;
    AKAnisetteProvisioningController *_provisioningController;
}

- (id)init;
- (void).cxx_destruct;
- (void)_generateAuthBagWithCompletion:(id /* block */)a0;
- (void)openBusinessChatWithContext:(id)a0 completion:(id /* block */)a1;

@end
