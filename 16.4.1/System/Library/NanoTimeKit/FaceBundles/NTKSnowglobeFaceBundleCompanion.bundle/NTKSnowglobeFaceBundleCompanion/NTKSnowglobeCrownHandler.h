@interface NTKSnowglobeCrownHandler : NSObject {
    double _idleOffset;
}

@property (nonatomic) double currentRotation;
@property (nonatomic) double inputRotation;
@property (nonatomic) double idleVelocity;

- (void)step:(double)a0;

@end
