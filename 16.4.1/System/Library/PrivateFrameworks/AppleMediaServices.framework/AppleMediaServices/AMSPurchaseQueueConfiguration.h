@protocol AMSBagProtocol, AMSPurchaseResponseProtocol;

@interface AMSPurchaseQueueConfiguration : NSObject

@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) id<AMSPurchaseResponseProtocol> delegate;
@property (retain, nonatomic) Class purchaseTaskClass;

- (id)initWithBag:(id)a0;
- (void).cxx_destruct;

@end
