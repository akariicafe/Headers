@interface _BPSFilterInner : BPSFilterProducer

@property (readonly, nonatomic) id /* block */ isIncluded;

- (id)receiveNewValue:(id)a0;
- (id)initWithDownstream:(id)a0 isIncluded:(id /* block */)a1;
- (void).cxx_destruct;

@end
