@class NSString, NSArray, NSObject;
@protocol OS_xpc_object;

@interface RBSHereditaryGrant : RBSGrant

@property (readonly, copy, nonatomic) NSString *endowmentNamespace;
@property (readonly, copy, nonatomic) NSString *sourceEnvironment;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *encodedEndowment;
@property (readonly, nonatomic) NSArray *attributes;

+ (id)grantWithNamespace:(id)a0 sourceEnvironment:(id)a1 endowment:(id)a2 attributes:(id)a3;
+ (id)grantWithNamespace:(id)a0 sourceEnvironment:(id)a1 attributes:(id)a2;
+ (id)grantWithNamespace:(id)a0 endowment:(id)a1 attributes:(id)a2;

- (id)initWithRBSXPCCoder:(id)a0;
- (id)debugDescription;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
