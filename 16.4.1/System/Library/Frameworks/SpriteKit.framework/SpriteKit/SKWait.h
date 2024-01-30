@interface SKWait : SKAction {
    struct SKCWait { void /* function */ **x0; unsigned int x1; float x2; id /* block */ x3; id x4; BOOL x5; double x6; double x7; float x8; float x9; double x10; BOOL x11; BOOL x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; } *_mycaction;
}

+ (BOOL)supportsSecureCoding;
+ (id)waitForDuration:(double)a0;
+ (id)waitForDuration:(double)a0 withRange:(double)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)reversedAction;

@end
