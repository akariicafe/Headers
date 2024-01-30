@protocol AMSBagProtocol, AMSPurchaseResponseProtocol;

@interface AMSPurchaseQueueConfiguration : NSObject

@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) id<AMSPurchaseResponseProtocol> delegate;

- (id)initWithBag:(id)a0;
- (void).cxx_destruct;

@end
