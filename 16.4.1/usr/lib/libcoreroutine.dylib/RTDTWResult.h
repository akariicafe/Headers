@class NSArray;

@interface RTDTWResult : NSObject

@property (nonatomic) double distance;
@property (retain, nonatomic) NSArray *cellIndices;

- (void).cxx_destruct;
- (id)initWithDistance:(double)a0 cellIndices:(id)a1;

@end
