@interface ASVVelocitySample3D : NSObject

@property void /* unknown type, empty encoding */ start;
@property void /* unknown type, empty encoding */ end;
@property double deltaTime;

- (void /* unknown type, empty encoding */)velocity;
- (id)initWithStart:(id)a0 end:(SEL)a1 deltaTime:(double)a2;
- (void /* unknown type, empty encoding */)calcFinalVelocityFromPreviousSample:(id)a0;

@end
