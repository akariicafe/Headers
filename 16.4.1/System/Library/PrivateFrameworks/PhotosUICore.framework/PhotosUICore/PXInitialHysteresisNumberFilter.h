@interface PXInitialHysteresisNumberFilter : PXNumberFilter {
    BOOL _didReachThreshold;
    double _offset;
}

@property (nonatomic) double hysteresis;
@property (readonly, nonatomic) double outputDerivative;

- (double)updatedOutput;

@end
