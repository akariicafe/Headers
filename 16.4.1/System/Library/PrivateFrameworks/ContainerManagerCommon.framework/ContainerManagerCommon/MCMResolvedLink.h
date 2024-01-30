@class MCMConcreteContainerIdentityForLibsystem;

@interface MCMResolvedLink : MCMLink

@property (readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *originContainerIdentityForLibsystem;
@property (readonly, nonatomic) MCMConcreteContainerIdentityForLibsystem *containerIdentityForLibsystem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (struct container_link_s { struct container_object_s *x0; struct container_object_s *x1; unsigned long long x2; BOOL x3; } *)createLibsystemLinkWithError:(unsigned long long *)a0;
- (id)initWithLibsystemLink:(struct container_link_s { struct container_object_s *x0; struct container_object_s *x1; unsigned long long x2; BOOL x3; } *)a0 defaultUserIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;
- (id)initWithOriginContainerIdentityForLibsystem:(id)a0 containerIdentityForLibsystem:(id)a1 attributes:(unsigned long long)a2 implied:(BOOL)a3;

@end
