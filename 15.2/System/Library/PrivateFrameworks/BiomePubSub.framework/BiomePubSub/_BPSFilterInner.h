@interface _BPSFilterInner : BPSFilterProducer

@property (readonly, nonatomic) id /* block */ isIncluded;

- (id)receiveNewValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithDownstream:(id)a0 isIncluded:(id /* block */)a1;

@end
