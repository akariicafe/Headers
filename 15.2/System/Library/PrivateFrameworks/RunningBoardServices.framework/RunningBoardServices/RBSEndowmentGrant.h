@class NSString, NSObject;
@protocol OS_xpc_object;

@interface RBSEndowmentGrant : RBSGrant

@property (readonly, copy, nonatomic) NSString *endowmentNamespace;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *encodedEndowment;

+ (id)grantWithNamespace:(id)a0 endowment:(id)a1;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
