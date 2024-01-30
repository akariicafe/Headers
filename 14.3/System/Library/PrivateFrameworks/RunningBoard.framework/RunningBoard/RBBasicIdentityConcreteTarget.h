@class RBSProcessIdentity;

@interface RBBasicIdentityConcreteTarget : RBConcreteTarget {
    RBSProcessIdentity *_identity;
}

- (id)identity;
- (void).cxx_destruct;
- (BOOL)isSystem;
- (id)createRBSTarget;
- (id)_initWithIdentity:(id)a0;
- (id)description;

@end
