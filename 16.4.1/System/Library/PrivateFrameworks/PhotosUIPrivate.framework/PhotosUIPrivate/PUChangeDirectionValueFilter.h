@interface PUChangeDirectionValueFilter : PUValueFilter {
    double _threshold;
}

@property (nonatomic) double minimumChangeValue;

- (double)updatedValue:(double)a0 withTargetValue:(double)a1;

@end
