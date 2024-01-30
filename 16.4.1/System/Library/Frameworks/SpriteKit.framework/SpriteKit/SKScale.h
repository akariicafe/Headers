@interface SKScale : SKAction {
    struct SKCScale { void /* function */ **x0; unsigned int x1; float x2; id /* block */ x3; id x4; BOOL x5; double x6; double x7; float x8; float x9; double x10; BOOL x11; BOOL x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; BOOL x32; struct CGSize { double x0; double x1; } x33; } *_mycaction;
}

+ (BOOL)supportsSecureCoding;
+ (id)scaleBy:(double)a0 duration:(double)a1;
+ (id)scaleTo:(double)a0 duration:(double)a1;
+ (id)scaleToSize:(struct CGSize { double x0; double x1; })a0 duration:(double)a1;
+ (id)scaleXBy:(double)a0 duration:(double)a1;
+ (id)scaleXBy:(double)a0 y:(double)a1 duration:(double)a2;
+ (id)scaleXTo:(double)a0 duration:(double)a1;
+ (id)scaleXTo:(double)a0 y:(double)a1 duration:(double)a2;
+ (id)scaleYBy:(double)a0 duration:(double)a1;
+ (id)scaleYTo:(double)a0 duration:(double)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)reversedAction;

@end
