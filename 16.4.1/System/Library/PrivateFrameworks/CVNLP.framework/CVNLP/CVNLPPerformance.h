@class NSMutableDictionary;

@interface CVNLPPerformance : NSObject

@property (readonly, nonatomic) BOOL computePerf;
@property (readonly, nonatomic) NSMutableDictionary *results;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)run:(id)a0 block:(id /* block */)a1;

@end
