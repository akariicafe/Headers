@interface PUBlockValueFilter : PUValueFilter

@property (copy, nonatomic) id /* block */ operationBlock;

- (void).cxx_destruct;
- (double)updatedValue:(double)a0 withTargetValue:(double)a1;

@end
