@class BPSCorrelateHandler;

@interface _BPSCorrelateInner : BPSCorrelationProducer

@property (readonly, nonatomic) BPSCorrelateHandler *correlateHandler;

- (id)newBookmark;
- (id)receiveNewValue:(id)a0 source:(long long)a1;
- (id)initWithDownstream:(id)a0 correlateHandler:(id)a1;
- (void).cxx_destruct;

@end
