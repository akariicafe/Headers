@class RTCellIndex;

@interface RTCostMatrixCell : NSObject

@property (nonatomic) double distance;
@property (retain, nonatomic) RTCellIndex *cellIndex;

- (void).cxx_destruct;
- (id)initWithDistance:(double)a0 cellIndex:(id)a1;

@end
