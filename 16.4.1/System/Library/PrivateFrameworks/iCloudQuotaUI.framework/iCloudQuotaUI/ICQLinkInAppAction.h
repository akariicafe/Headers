@class ICQUpgradeFlowManager, NSString, ICQOffer, ICQLink;

@interface ICQLinkInAppAction : ICQInAppAction <ICQUpgradeFlowManagerDelegate, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ICQLink *link;
@property (retain, nonatomic) ICQOffer *offer;
@property (retain, nonatomic) ICQUpgradeFlowManager *flowManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLink:(id)a0;
- (void).cxx_destruct;
- (void)performActionWithContext:(id)a0;
- (void)upgradeFlowManagerDidCancel:(id)a0;
- (void)upgradeFlowManagerDidComplete:(id)a0;
- (void)_launchFlowManagerWithContext:(id)a0;
- (id)_linkURLWithContext:(id)a0;
- (id)initWithLink:(id)a0 inOffer:(id)a1;

@end
