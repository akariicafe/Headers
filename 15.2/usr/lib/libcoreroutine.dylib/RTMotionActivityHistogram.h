@class NSMutableDictionary;

@interface RTMotionActivityHistogram : NSObject

@property (nonatomic) double totalInterval;
@property (readonly, nonatomic) NSMutableDictionary *bins;

- (id)initWithActivites:(id)a0 betweenDate:(id)a1 andDate:(id)a2;
- (id)binForType:(unsigned long long)a0;
- (void)addInterval:(double)a0 ofType:(unsigned long long)a1 withConfidence:(unsigned long long)a2;
- (id)binsSortedByInterval;
- (void).cxx_destruct;
- (id)init;

@end
