@class NSString;

@interface RBSSavedEndowmentGrant : RBSGrant

@property (readonly, copy, nonatomic) NSString *endowmentNamespace;
@property (readonly, nonatomic) NSString *key;

+ (id)grantWithNamespace:(id)a0 key:(id)a1;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
