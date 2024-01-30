@class NSString, MDLAnimatedVector3;

@interface MDLTransformRotateOp : NSObject <MDLTransformOp>

@property (nonatomic) BOOL inverse;
@property (nonatomic) unsigned long long order;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) MDLAnimatedVector3 *animatedValue;

- (void).cxx_destruct;
- (struct { void /* unknown type, empty encoding */ x0[4]; })float4x4AtTime:(double)a0;
- (BOOL)IsInverseOp;
- (struct { void /* unknown type, empty encoding */ x0[4]; })double4x4AtTime:(double)a0;
- (id)initWithName:(id)a0 inverse:(BOOL)a1 order:(unsigned long long)a2 data:(id)a3;

@end
