@interface PUClampValueFilter : PUValueFilter

@property (nonatomic) double minimumValue;
@property (nonatomic) double maximumValue;

- (double)updatedValue:(double)a0 withTargetValue:(double)a1;

@end
