@class NSString, CAPresentationModifierGroup;

@interface CAPresentationModifier : NSObject {
    void *_impl;
    id _keyPath;
    id _value;
    id _group;
    int _l;
    unsigned int _f;
}

@property (readonly, copy) NSString *keyPath;
@property (readonly) BOOL additive;
@property (readonly) CAPresentationModifierGroup *group;
@property (retain) id value;
@property (getter=isEnabled) BOOL enabled;

- (id)init;
- (void)dealloc;
- (void)write;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; } *)CA_copyRenderValue;
- (id)initWithKeyPath:(id)a0 initialValue:(id)a1 additive:(BOOL)a2 group:(id)a3;
- (id)initWithKeyPath:(id)a0 initialValue:(id)a1 additive:(BOOL)a2;
- (id)debugDescription;

@end
