@class NSArray;

@interface HKStackedBarCoordinate : HKMinMaxCoordinate

@property (copy, nonatomic) NSArray *stackPoints;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 roundToViewScale:(BOOL)a1;
- (id)initWithStackPoints:(id)a0 userInfo:(id)a1;

@end
