@interface QLPXChangeDirectionNumberFilter : QLPXNumberFilter {
    double _threshold;
}

@property (nonatomic) double minimumChange;

- (id)initWithInput:(double)a0;
- (double)initialOutputForInput:(double)a0;
- (double)updatedOutput;

@end
