@class NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface ACDAccessPluginManager : NSObject {
    NSSet *_accessPlugins;
    NSObject<OS_dispatch_queue> *_accessPluginQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)revokeAllAccessToAccountsOfType:(id)a0 store:(id)a1 withCompletion:(id /* block */)a2;
- (id)_authorizationPluginForAccountType:(id)a0;
- (void)authorizeAccessToAccountsOfType:(id)a0 forClient:(id)a1 store:(id)a2 completion:(id /* block */)a3;
- (void)revokeAccessToAccountsOfType:(id)a0 forClient:(id)a1 store:(id)a2 completion:(id /* block */)a3;
- (void)handleAccessRequestToAccountsOfType:(id)a0 forClient:(id)a1 withOptions:(id)a2 store:(id)a3 allowUserInteraction:(BOOL)a4 completion:(id /* block */)a5;

@end
