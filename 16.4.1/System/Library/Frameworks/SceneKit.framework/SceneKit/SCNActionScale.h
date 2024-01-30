@interface SCNActionScale : SCNAction {
    struct SCNCActionScale { void /* function */ **x0; double x1; id /* block */ x2; id x3; BOOL x4; double x5; double x6; double x7; double x8; double x9; BOOL x10; BOOL x11; id /* block */ x12; struct __CFString *x13; long long x14; double x15; double x16; double x17; double x18; float x19; float x20; float x21; float x22; float x23; BOOL x24; BOOL x25; } *_mycaction;
}

+ (BOOL)supportsSecureCoding;
+ (id)scaleBy:(double)a0 duration:(double)a1;
+ (id)scaleTo:(double)a0 duration:(double)a1;

- (id)parameters;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isRelative;
- (id)init;
- (id)reversedAction;

@end
