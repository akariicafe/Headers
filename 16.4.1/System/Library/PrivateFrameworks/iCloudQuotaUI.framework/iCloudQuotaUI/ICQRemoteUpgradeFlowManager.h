@class ICQUpgradeFlowManager, ICQRemoteContext, ICQOffer, ICQUpgradeFlowOptions, ICQRemoteUIDataLoader, ICQLink;
@protocol ICQUpgradeFlowManagerDelegate;

@interface ICQRemoteUpgradeFlowManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _presentationLock;
}

@property (retain, nonatomic) ICQRemoteContext *remoteContext;
@property (nonatomic) BOOL isPresented;
@property (retain, nonatomic) ICQRemoteUIDataLoader *loader;
@property (retain, nonatomic) ICQOffer *offer;
@property (retain, nonatomic) ICQLink *link;
@property (copy, nonatomic) ICQUpgradeFlowOptions *flowOptions;
@property (weak, nonatomic) id<ICQUpgradeFlowManagerDelegate> delegate;
@property (weak, nonatomic) ICQUpgradeFlowManager *flowManager;

+ (void)commonHeadersForRequest:(id)a0 withCompletion:(id /* block */)a1;
+ (id)sharedManager;
+ (void)renewCredentialsWithCompletion:(id /* block */)a0;

- (id)rootViewController;
- (id)init;
- (void).cxx_destruct;
- (void)beginRemoteFlow;
- (void)beginDefaultRemoteFlow;
- (void)beginRemoteExtensionFlowWithViewController:(id)a0;
- (void)beginRemoteFlowWithViewController:(id)a0;
- (BOOL)canUseExtensionKitForURL:(id)a0;
- (BOOL)isDefaultOfferFlow:(id)a0;
- (void)startUpsellWithOffer:(id)a0 link:(id)a1 preloadedRemoteUIData:(id)a2 error:(id)a3;

@end
