@class NSString, RBProcess, RBSProcessIdentity;

@interface RBComplexConcreteTarget : RBConcreteTarget {
    NSString *_description;
    RBProcess *_process;
    RBSProcessIdentity *_identity;
    NSString *_environment;
}

- (id)environment;
- (id)identity;
- (BOOL)isEqual:(id)a0;
- (id)process;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isSystem;
- (void).cxx_destruct;
- (id)createRBSTarget;

@end
