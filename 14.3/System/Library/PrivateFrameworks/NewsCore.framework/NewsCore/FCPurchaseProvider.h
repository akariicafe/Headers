@class FCPurchaseController, NSSet, FCPrivateChannelMembershipController, NSString;

@interface FCPurchaseProvider : NSObject <FCPurchaseProviderType>

@property (readonly, nonatomic) FCPurchaseController *purchaseController;
@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property (readonly, copy, nonatomic) NSSet *purchasedTagIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPurchaseController:(id)a0 privateChannelMembershipController:(id)a1;

@end
