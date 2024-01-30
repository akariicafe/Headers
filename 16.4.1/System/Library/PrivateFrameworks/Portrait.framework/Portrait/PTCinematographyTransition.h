@interface PTCinematographyTransition : NSObject

@property (nonatomic) unsigned long long kind;

- (id)initWithKind:(unsigned long long)a0;
- (float)coefficientForNormalizedTime:(float)a0;
- (float)linearCoefficientForNormalizedTime:(float)a0;

@end
