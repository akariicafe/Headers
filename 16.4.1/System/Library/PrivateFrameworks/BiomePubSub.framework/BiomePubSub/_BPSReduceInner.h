@interface _BPSReduceInner : BPSReduceProducer

@property (readonly, nonatomic) id /* block */ reduce;

- (id)receiveNewValue:(id)a0;
- (id)initWithDownstream:(id)a0 initial:(id)a1 reduce:(id /* block */)a2;
- (void).cxx_destruct;

@end
