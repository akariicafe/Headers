@class NSString, CAPresentationModifierGroup;

@interface CAPresentationModifier : NSObject {
    void *_impl;
    id _keyPath;
    id _value;
    id _velocity;
    CAPresentationModifierGroup *_group;
    unsigned long long _value_count;
    int _l;
    unsigned int _f;
}

@property (readonly, copy) NSString *keyPath;
@property (readonly) BOOL additive;
@property (readonly) CAPresentationModifierGroup *group;
@property (retain) id value;
@property (getter=isEnabled) BOOL enabled;

- (void)setValue:(id)a0 velocity:(id)a1;
- (id)initWithKeyPath:(id)a0 initialValue:(id)a1 initialVelocity:(id)a2 additive:(BOOL)a3 preferredFrameRateRangeMaximum:(int)a4 group:(id)a5;
- (void)write;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithKeyPath:(id)a0 initialValue:(id)a1 additive:(BOOL)a2 group:(id)a3;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; } *)CA_copyRenderValue;
- (id)init;
- (id)initWithKeyPath:(id)a0 initialValue:(id)a1 additive:(BOOL)a2;

@end
