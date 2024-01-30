@class RBSProcessIdentity;

@interface RBSProcessHandlePredicateImpl : RBSProcessPredicateImpl {
    RBSProcessIdentity *_identity;
    int _pid;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (id)initWithHandle:(id)a0;
- (void).cxx_destruct;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (id)processIdentifier;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
