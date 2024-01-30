@interface _BPSRemoveDuplicatesInner : BPSFilterProducer

@property (readonly, nonatomic) id /* block */ isDuplicate;
@property (retain, nonatomic) id last;

- (id)receiveNewValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithDownstream:(id)a0 isDuplicate:(id /* block */)a1;

@end
