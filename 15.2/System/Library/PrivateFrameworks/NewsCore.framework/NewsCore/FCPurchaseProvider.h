@class FCPurchaseController, NSSet, NSString, FCPrivateChannelMembershipController;

@interface FCPurchaseProvider : NSObject <FCPurchaseProviderType> {
    FCPurchaseController *_purchaseController;
    FCPrivateChannelMembershipController *_privateChannelMembershipController;
}

@property (readonly, copy, nonatomic) NSSet *purchasedTagIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
