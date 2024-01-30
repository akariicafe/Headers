@interface HMIPairwiseMatch : NSObject

@property (readonly) unsigned long long firstIndex;
@property (readonly) unsigned long long secondIndex;
@property (readonly) float score;

- (id)initWithFirstIndex:(unsigned long long)a0 secondIndex:(unsigned long long)a1 score:(float)a2;

@end
