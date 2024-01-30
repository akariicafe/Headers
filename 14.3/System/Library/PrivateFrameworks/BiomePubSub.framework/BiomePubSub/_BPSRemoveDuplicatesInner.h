@interface _BPSRemoveDuplicatesInner : BPSFilterProducer

@property (readonly, nonatomic) id /* block */ isDuplicate;
@property (retain, nonatomic) id last;

- (void).cxx_destruct;
- (id)receiveNewValue:(id)a0;
- (id)initWithDownstream:(id)a0 isDuplicate:(id /* block */)a1;

@end
