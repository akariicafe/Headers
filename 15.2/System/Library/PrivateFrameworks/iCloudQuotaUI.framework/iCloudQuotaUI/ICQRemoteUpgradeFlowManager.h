@class ICQUpgradeFlowManager, ICQRemoteContext, ICQOffer, NSDate, ICQRemoteUIDataLoader, ICQUpgradeFlowOptions;
@protocol ICQUpgradeFlowManagerDelegate;

@interface ICQRemoteUpgradeFlowManager : NSObject

@property (retain, nonatomic) ICQRemoteContext *remoteContext;
@property (retain, nonatomic) NSDate *timeLastPresented;
@property (retain, nonatomic) ICQRemoteUIDataLoader *loader;
@property (retain, nonatomic) ICQOffer *offer;
@property (copy, nonatomic) ICQUpgradeFlowOptions *flowOptions;
@property (weak, nonatomic) id<ICQUpgradeFlowManagerDelegate> delegate;
@property (weak, nonatomic) ICQUpgradeFlowManager *flowManager;

+ (id)sharedManager;
+ (void)renewCredentialsWithCompletion:(id /* block */)a0;
+ (void)commonHeadersForRequest:(id)a0 withCompletion:(id /* block */)a1;

- (void).cxx_destruct;
- (id)init;
- (void)beginRemoteFlow;
- (void)startUpsellWithOffer:(id)a0 preloadedRemoteUIData:(id)a1 error:(id)a2;

@end
