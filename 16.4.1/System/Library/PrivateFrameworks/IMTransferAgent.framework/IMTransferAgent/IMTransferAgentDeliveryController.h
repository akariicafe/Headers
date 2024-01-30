@class FTMessageDelivery;

@interface IMTransferAgentDeliveryController : NSObject

@property (retain, nonatomic) FTMessageDelivery *messageDelivery;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)sendFTMessage:(id)a0 completionBlock:(id /* block */)a1;

@end
