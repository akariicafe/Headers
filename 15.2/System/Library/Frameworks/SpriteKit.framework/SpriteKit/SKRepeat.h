@class SKAction;

@interface SKRepeat : SKAction {
    struct SKCRepeat { void /* function */ **x0; unsigned int x1; float x2; id /* block */ x3; id x4; BOOL x5; double x6; double x7; float x8; float x9; double x10; BOOL x11; BOOL x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; struct SKCAction *x19; unsigned long long x20; unsigned long long x21; BOOL x22; } *_mycaction;
    SKAction *_repeatedAction;
}

+ (BOOL)supportsSecureCoding;
+ (id)repeatAction:(id)a0 count:(unsigned long long)a1;
+ (id)repeatActionForever:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)subactions;
- (id)reversedAction;

@end
