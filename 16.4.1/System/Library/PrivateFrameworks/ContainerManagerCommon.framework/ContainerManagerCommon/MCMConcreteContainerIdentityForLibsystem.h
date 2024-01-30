@class NSString;

@interface MCMConcreteContainerIdentityForLibsystem : MCMConcreteContainerIdentity

@property (readonly, nonatomic) NSString *containerPathIdentifier;
@property (readonly, nonatomic) BOOL existed;

+ (id)containerIdentityWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerClass:(unsigned long long)a3 platform:(unsigned int)a4 containerPathIdentifier:(id)a5 existed:(BOOL)a6 transient:(BOOL)a7 error:(unsigned long long *)a8;

- (struct container_object_s { } *)createLibsystemContainerWithError:(unsigned long long *)a0;
- (id)initWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerClass:(unsigned long long)a3 platform:(unsigned int)a4 containerPathIdentifier:(id)a5 existed:(BOOL)a6 transient:(BOOL)a7 error:(unsigned long long *)a8;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)nontransientContainerIdentity;
- (id)identityByChangingUUID:(id)a0;
- (id)identityByChangingTransient:(BOOL)a0;
- (id)nontransientConcreteContainerIdentityForLibsystem;
- (id)transientConcreteContainerIdentityForLibsystem;
- (id)init;
- (id)identityByChangingContainerPathIdentifier:(id)a0;
- (id)description;
- (id)transientContainerIdentity;
- (void).cxx_destruct;
- (id)initWithLibsystemContainer:(struct container_object_s { } *)a0 defaultUserIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;

@end
