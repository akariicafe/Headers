@class NSString, ICQUpgradeFlowManager;
@protocol ICQUpgradeFlowManagerDelegate;

@interface ICQPreferencesFreshmintManager : NSObject <ICQUpgradeFlowManagerDelegate>

@property (retain, nonatomic) ICQUpgradeFlowManager *freshmintFlowManager;
@property (copy, nonatomic) id /* block */ freshmintFlowCompletion;
@property (weak, nonatomic) id<ICQUpgradeFlowManagerDelegate> delegate;
@property (nonatomic) BOOL shouldShowFreshmint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)upgradeFlowManagerDidCancel:(id)a0;
- (void)upgradeFlowManagerDidComplete:(id)a0;
- (void).cxx_destruct;
- (void)beginFlowWithDelegate:(id)a0 offer:(id)a1 url:(id)a2 completion:(id /* block */)a3;
- (void)runFreshmintCompletionDidComplete:(BOOL)a0;

@end
