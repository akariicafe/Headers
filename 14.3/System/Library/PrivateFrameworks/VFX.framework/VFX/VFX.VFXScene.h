@class NSArray;

@interface VFX.VFXScene : NSObject {
    void /* unknown type, empty encoding */ entityManager;
}

@property (class, nonatomic, copy) NSArray *builtinEffectIdentifiers;

@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL allowsCameraControl;
@property (nonatomic, readonly) NSArray *bindings;

- (void)restart;
- (id)initWithIdentifier:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)performTransaction:(id /* block */)a0;
- (void)updateWithDeltaTime:(double)a0;
- (id)initWithContentsOf:(id)a0 error:(id *)a1;
- (id)bindingOf:(id)a0 named:(id)a1;
- (id)firstBindingWithName:(id)a0;
- (id)parameterOf:(id)a0 named:(id)a1;
- (void)setParameterOf:(id)a0 named:(id)a1 :(id)a2;
- (void)withPointerToParameterOf:(id)a0 named:(id)a1 block:(id /* block */)a2;
- (void)setValue:(id)a0 atPath:(id)a1;
- (id)valueAtPath:(id)a0;
- (void)withPointerToValueAtPath:(id)a0 block:(id /* block */)a1;

@end
