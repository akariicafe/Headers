@class SCNAction;

@interface SCNActionRepeat : SCNAction {
    struct SCNCActionRepeat { void /* function */ **x0; double x1; id /* block */ x2; id x3; BOOL x4; double x5; double x6; double x7; double x8; double x9; BOOL x10; BOOL x11; id /* block */ x12; struct __CFString *x13; long long x14; double x15; double x16; double x17; double x18; struct SCNCAction *x19; unsigned long long x20; unsigned long long x21; double x22; BOOL x23; } *_mycaction;
    SCNAction *_repeatedAction;
}

+ (BOOL)supportsSecureCoding;
+ (id)repeatAction:(id)a0 count:(unsigned long long)a1;
+ (id)repeatActionForever:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isCustom;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)reversedAction;

@end
