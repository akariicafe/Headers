@interface SKResize : SKAction {
    struct SKCResize { void /* function */ **x0; unsigned int x1; float x2; id /* block */ x3; id x4; BOOL x5; double x6; double x7; float x8; float x9; double x10; BOOL x11; BOOL x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; float x19; struct { float x0; float x1; } x20; struct { float x0; float x1; } x21; struct { float x0; float x1; } x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; } *_mycaction;
}

+ (BOOL)supportsSecureCoding;
+ (id)resizeByWidth:(double)a0 height:(double)a1 duration:(double)a2;
+ (id)resizeToWidth:(double)a0 height:(double)a1 duration:(double)a2;
+ (id)resizeToWidth:(double)a0 duration:(double)a1;
+ (id)resizeToHeight:(double)a0 duration:(double)a1;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reversedAction;

@end
