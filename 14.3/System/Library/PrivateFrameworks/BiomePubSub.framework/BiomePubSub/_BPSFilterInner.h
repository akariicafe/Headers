@interface _BPSFilterInner : BPSFilterProducer

@property (readonly, nonatomic) id /* block */ isIncluded;

- (void).cxx_destruct;
- (id)receiveNewValue:(id)a0;
- (id)initWithDownstream:(id)a0 isIncluded:(id /* block */)a1;

@end
