@class NSUUID;

@interface MCMConcreteContainerIdentity : MCMContainerIdentity

@property (readonly, nonatomic) NSUUID *uuid;

+ (id)containerIdentityWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerClass:(unsigned long long)a3 platform:(unsigned int)a4 error:(unsigned long long *)a5;
+ (id)concreteContainerIdentityFromPlist:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
+ (id)containerIdentityWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerClass:(unsigned long long)a3 platform:(unsigned int)a4 transient:(BOOL)a5 error:(unsigned long long *)a6;

- (id)initWithUUID:(id)a0 userIdentity:(id)a1 identifier:(id)a2 containerClass:(unsigned long long)a3 platform:(unsigned int)a4 transient:(BOOL)a5 error:(unsigned long long *)a6;
- (id)containerIdentity;
- (id)plist;
- (id)initWithVersion1PlistDictionary:(id)a0 containerIdentity:(id)a1 error:(unsigned long long *)a2;
- (struct container_object_s { } *)createLibsystemContainerWithContainerPathIdentifier:(id)a0 existed:(BOOL)a1 error:(unsigned long long *)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlist:(id)a0 userIdentityCache:(id)a1 error:(unsigned long long *)a2;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithContainerIdentity:(id)a0 UUID:(id)a1 error:(unsigned long long *)a2;
- (void).cxx_destruct;
- (BOOL)isEqualToConcreteContainerIdentity:(id)a0;
- (id)initWithLibsystemContainer:(struct container_object_s { } *)a0 defaultUserIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;

@end
