@class NSString, RBProcess, RBSProcessIdentity;

@interface RBComplexConcreteTarget : RBConcreteTarget {
    NSString *_description;
    RBProcess *_process;
    RBSProcessIdentity *_identity;
    NSString *_environment;
}

- (id)identity;
- (void).cxx_destruct;
- (BOOL)isSystem;
- (id)process;
- (unsigned long long)hash;
- (id)createRBSTarget;
- (id)description;
- (id)environment;
- (BOOL)isEqual:(id)a0;

@end
