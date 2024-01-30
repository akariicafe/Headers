@class NSNumber;
@protocol MTLTexture;

@interface _Background : _Geometry

@property (retain, nonatomic) NSNumber *numbers;
@property (retain, nonatomic) NSNumber *glow;
@property (retain, nonatomic) id<MTLTexture> numbersTex;
@property (retain, nonatomic) id<MTLTexture> glowTex;

- (void).cxx_destruct;

@end
