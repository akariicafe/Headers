@class BPSCorrelateHandler;

@interface _BPSCorrelateInner : BPSCorrelationProducer

@property (readonly, nonatomic) BPSCorrelateHandler *correlateHandler;

- (id)newBookmark;
- (void).cxx_destruct;
- (id)initWithDownstream:(id)a0 correlateHandler:(id)a1;
- (id)receiveNewValue:(id)a0 source:(long long)a1;

@end
