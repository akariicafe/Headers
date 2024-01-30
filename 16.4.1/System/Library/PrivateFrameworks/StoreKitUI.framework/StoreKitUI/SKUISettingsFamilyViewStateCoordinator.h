@interface SKUISettingsFamilyViewStateCoordinator : NSObject {
    id /* block */ _completionBlock;
}

- (void).cxx_destruct;
- (void)_checkSubscriptionStatus:(id)a0 isFinal:(BOOL)a1 error:(id)a2;
- (void)_getSubscriptionStatus;
- (void)_returnFamilyViewState:(long long)a0;
- (void)checkSettingsFamilyViewStateWithBlock:(id /* block */)a0;

@end
