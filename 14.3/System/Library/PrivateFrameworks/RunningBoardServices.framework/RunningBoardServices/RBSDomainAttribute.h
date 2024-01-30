@class NSString;

@interface RBSDomainAttribute : RBSAttribute

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sourceEnvironment;
@property (readonly, copy, nonatomic) NSString *fullyQualifiedName;

+ (id)attributeWithDomain:(id)a0 name:(id)a1 sourceEnvironment:(id)a2;
+ (id)attributeWithDomain:(id)a0 name:(id)a1;

- (void).cxx_destruct;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_initWithDomain:(id)a0 name:(id)a1 sourceEnvironment:(id)a2;

@end
