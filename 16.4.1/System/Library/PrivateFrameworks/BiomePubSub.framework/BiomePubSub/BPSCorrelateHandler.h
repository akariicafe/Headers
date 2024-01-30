@interface BPSCorrelateHandler : NSObject

@property (retain, nonatomic) id context;

+ (id)new;
+ (id)directStreamsAssociationWithBlock:(id /* block */)a0;

- (void)receivePriorEvent:(id)a0;
- (id)correlateWithCurrentEvent:(id)a0;
- (void)receiveCurrentEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithInitalContext:(id)a0;
- (id)initWithInitialContext:(id)a0;
- (void)updateContext:(id)a0;

@end
