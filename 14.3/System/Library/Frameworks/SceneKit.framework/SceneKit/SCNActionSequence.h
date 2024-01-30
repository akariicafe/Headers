@class NSArray;

@interface SCNActionSequence : SCNAction {
    struct SCNCActionSequence { void /* function */ **x0; float x1; id /* block */ x2; id x3; BOOL x4; double x5; double x6; double x7; double x8; double x9; BOOL x10; BOOL x11; id /* block */ x12; struct __CFString *x13; long long x14; double x15; double x16; double x17; double x18; struct vector<SCNCAction *, std::__1::allocator<SCNCAction *> > { struct SCNCAction **x0; struct SCNCAction **x1; struct __compressed_pair<SCNCAction **, std::__1::allocator<SCNCAction *> > { struct SCNCAction **x0; } x2; } x19; unsigned long long x20; double x21; } *_mycaction;
    NSArray *_actions;
}

+ (BOOL)supportsSecureCoding;
+ (id)sequenceWithActions:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isCustom;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)reversedAction;

@end
