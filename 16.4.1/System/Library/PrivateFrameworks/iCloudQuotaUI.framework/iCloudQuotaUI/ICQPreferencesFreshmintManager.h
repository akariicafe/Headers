@class NSString, ICQUpgradeFlowManager, ICQOffer;
@protocol ICQUpgradeFlowManagerDelegate;

@interface ICQPreferencesFreshmintManager : NSObject <ICQUpgradeFlowManagerDelegate>

@property (retain, nonatomic) ICQUpgradeFlowManager *freshmintFlowManager;
@property (copy, nonatomic) id /* block */ freshmintFlowCompletion;
@property (nonatomic) BOOL shouldShowFreshmint;
@property (weak, nonatomic) id<ICQUpgradeFlowManagerDelegate> delegate;
@property (retain, nonatomic) ICQOffer *offer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)upgradeFlowManagerDidCancel:(id)a0;
- (void)upgradeFlowManagerDidComplete:(id)a0;
- (void)beginFlowWithDelegate:(id)a0 offer:(id)a1 url:(id)a2 completion:(id /* block */)a3;
- (void)beginFlowWithICQLink:(id)a0 completion:(id /* block */)a1;
- (void)runFreshmintCompletionDidComplete:(BOOL)a0;

@end
