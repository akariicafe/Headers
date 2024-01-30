@interface SKFollowPath : SKAction {
    struct SKCFollowPath { void /* function */ **x0; unsigned int x1; float x2; id /* block */ x3; id x4; BOOL x5; double x6; double x7; float x8; float x9; double x10; BOOL x11; BOOL x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; float x19; unsigned int x20; struct PKPath *x21; struct { float x0; float x1; } x22; BOOL x23; BOOL x24; } *_mycaction;
    struct CGPath { } *_cgPath;
}

+ (BOOL)supportsSecureCoding;
+ (id)followPath:(struct CGPath { } *)a0 duration:(double)a1;
+ (id)followPath:(struct CGPath { } *)a0 asOffset:(BOOL)a1 orientToPath:(BOOL)a2 duration:(double)a3;
+ (id)followPath:(struct CGPath { } *)a0 speed:(double)a1;
+ (id)followPath:(struct CGPath { } *)a0 asOffset:(BOOL)a1 orientToPath:(BOOL)a2 speed:(double)a3;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)reversedAction;

@end
