@interface RBPersonaManager : NSObject <RBPersonaManaging> {
    BOOL _personasSupported;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (BOOL)personasAreSupported;
- (BOOL)isConcretePersona:(id)a0;
- (id)personalPersonaUniqueString;
- (id)init;
- (BOOL)personaForIdentity:(id)a0 context:(id)a1 personaUID:(out unsigned int *)a2 personaUniqueString:(out id *)a3;

@end
