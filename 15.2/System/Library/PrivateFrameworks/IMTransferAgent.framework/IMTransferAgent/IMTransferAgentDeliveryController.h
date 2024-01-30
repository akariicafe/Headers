@class FTMessageDelivery;

@interface IMTransferAgentDeliveryController : NSObject

@property (retain, nonatomic) FTMessageDelivery *messageDelivery;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)sendFTMessage:(id)a0 completionBlock:(id /* block */)a1;

@end
