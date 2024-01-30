@class NSArray;

@interface SKAnimate : SKAction {
    struct SKCAnimate { void /* function */ **x0; unsigned int x1; float x2; id /* block */ x3; id x4; BOOL x5; double x6; double x7; float x8; float x9; double x10; BOOL x11; BOOL x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; struct vector<SKTexture *, std::__1::allocator<SKTexture *> > { id *x0; id *x1; struct __compressed_pair<SKTexture *__strong *, std::__1::allocator<SKTexture *> > { id *x0; } x2; } x19; double x20; id x21; struct { float x0; float x1; } x22; BOOL x23; BOOL x24; BOOL x25; } *_mycaction;
    NSArray *_textures;
}

@property (nonatomic) double timePerFrame;

+ (BOOL)supportsSecureCoding;
+ (id)animateWithTextures:(id)a0 timePerFrame:(double)a1 resize:(BOOL)a2 restore:(BOOL)a3;
+ (id)animateWithNormalTextures:(id)a0 timePerFrame:(double)a1 resize:(BOOL)a2 restore:(BOOL)a3;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setDuration:(double)a0;
- (id)reversedAction;

@end
