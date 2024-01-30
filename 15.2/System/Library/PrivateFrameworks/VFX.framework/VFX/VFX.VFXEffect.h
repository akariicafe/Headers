@class NSArray;

@interface VFX.VFXEffect : NSObject {
    void /* unknown type, empty encoding */ effectID;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ onEffectRestartSubject;
    void /* unknown type, empty encoding */ cancellables;
}

@property (nonatomic, readonly) long long identifier;
@property (nonatomic, weak) void /* unknown type, empty encoding */ scene;
@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ version;
@property (nonatomic) BOOL allowRemoteEdition;
@property (nonatomic, retain) void /* unknown type, empty encoding */ remoteEditionEndpoint;
@property (nonatomic, readonly) NSArray *bindings;

- (BOOL)isEnabled:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)bindingOf:(id)a0 named:(id)a1;
- (id)firstBindingWithName:(id)a0;
- (id)parameterOf:(id)a0 named:(id)a1;
- (void)setParameterOf:(id)a0 named:(id)a1 :(id)a2;
- (void)withPointerToParameterOf:(id)a0 named:(id)a1 block:(id /* block */)a2;
- (void)setEnabled:(id)a0 enabled:(BOOL)a1;
- (id)bindingWith:(long long)a0 named:(id)a1;

@end
