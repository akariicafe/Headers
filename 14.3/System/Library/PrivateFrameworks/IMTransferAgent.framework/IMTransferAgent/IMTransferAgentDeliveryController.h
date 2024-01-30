@class FTMessageDelivery;

@interface IMTransferAgentDeliveryController : NSObject

@property (retain, nonatomic) FTMessageDelivery *messageDelivery;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendFTMessage:(id)a0 completionBlock:(id /* block */)a1;

@end
