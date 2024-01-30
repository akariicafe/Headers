@protocol HAP2CoAPIOConsumer;

@interface HAP2CoAPIOConsumerWeakHolder : NSObject

@property (readonly, weak, nonatomic) id<HAP2CoAPIOConsumer> consumer;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConsumer:(id)a0;

@end
