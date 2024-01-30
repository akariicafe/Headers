@class MCMContainerIdentityMinimal;

@interface MCMLink : NSObject <NSCopying>

@property (readonly, nonatomic) MCMContainerIdentityMinimal *originContainerIdentity;
@property (readonly, nonatomic) MCMContainerIdentityMinimal *containerIdentity;
@property (readonly, nonatomic) unsigned long long attributes;
@property (readonly, nonatomic) BOOL implied;

+ (id)linkFromPlist:(id)a0 originContainerIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;

- (id)plist;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLibsystemLink:(struct container_link_s { struct container_object_s *x0; struct container_object_s *x1; unsigned long long x2; BOOL x3; } *)a0 defaultUserIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;
- (id)initWithOriginContainerIdentity:(id)a0 containerIdentity:(id)a1 attributes:(unsigned long long)a2 implied:(BOOL)a3;
- (id)initWithPlist:(id)a0 originContainerIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;
- (id)initWithVersion1PlistDictionary:(id)a0 originContainerIdentity:(id)a1 userIdentityCache:(id)a2 error:(unsigned long long *)a3;
- (BOOL)isEqualToLink:(id)a0;
- (BOOL)isFuzzyEqualToLink:(id)a0;
- (id)linkByMergingWithLink:(id)a0;
- (id)linkBySubtractingAttributes:(unsigned long long)a0;
- (id)linkInverted;

@end
