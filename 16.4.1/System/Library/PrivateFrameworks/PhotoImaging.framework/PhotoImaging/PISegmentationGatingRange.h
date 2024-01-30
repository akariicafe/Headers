@interface PISegmentationGatingRange : NSObject

@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) double manualMin;
@property (readonly, nonatomic) double manualMax;
@property (readonly, nonatomic) double depthMin;
@property (readonly, nonatomic) double depthMax;

- (id)description;
- (id)initWithMin:(double)a0 max:(double)a1 manualMin:(double)a2 manualMax:(double)a3 depthMin:(double)a4 depthMax:(double)a5;
- (id)withLenience:(double)a0;

@end
