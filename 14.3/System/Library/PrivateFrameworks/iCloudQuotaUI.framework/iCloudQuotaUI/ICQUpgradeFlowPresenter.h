@class NSString;

@interface ICQUpgradeFlowPresenter : NSObject <ICQUpgradeFlowManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)upgradeFlowManagerDidCancel:(id)a0;
- (void)upgradeFlowManagerDidComplete:(id)a0;
- (void)presentFlowWithContext:(id)a0 completion:(id /* block */)a1;

@end
