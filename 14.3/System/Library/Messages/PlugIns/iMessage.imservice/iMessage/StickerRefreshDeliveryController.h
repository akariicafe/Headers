@class FTMessageDelivery;

@interface StickerRefreshDeliveryController : NSObject

@property (retain, nonatomic) FTMessageDelivery *messageDelivery;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)sendFTMessage:(id)a0 attempts:(unsigned long long)a1 withCompletionBlock:(id /* block */)a2;
- (void)_sendFTMessage:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
