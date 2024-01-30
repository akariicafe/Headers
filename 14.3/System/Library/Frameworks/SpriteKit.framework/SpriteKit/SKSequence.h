@class NSArray;

@interface SKSequence : SKAction {
    struct SKCSequence { void /* function */ **x0; unsigned int x1; float x2; id /* block */ x3; id x4; BOOL x5; double x6; double x7; float x8; float x9; double x10; BOOL x11; BOOL x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; struct vector<SKCAction *, std::__1::allocator<SKCAction *> > { struct SKCAction **x0; struct SKCAction **x1; struct __compressed_pair<SKCAction **, std::__1::allocator<SKCAction *> > { struct SKCAction **x0; } x2; } x19; unsigned long long x20; } *_mycaction;
    NSArray *_actions;
    unsigned long long _animIndex;
}

+ (BOOL)supportsSecureCoding;
+ (id)sequenceWithActions:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)reversedAction;
- (id)subactions;

@end
