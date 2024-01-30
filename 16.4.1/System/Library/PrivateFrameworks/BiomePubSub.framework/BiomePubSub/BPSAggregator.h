@interface BPSAggregator : NSObject

@property (readonly, nonatomic) id accumulator;
@property (readonly, nonatomic) id /* block */ closure;

- (id)initWithAccumulator:(id)a0 closure:(id /* block */)a1;
- (void).cxx_destruct;

@end
