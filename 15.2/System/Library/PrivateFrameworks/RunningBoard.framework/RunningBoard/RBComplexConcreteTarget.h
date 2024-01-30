@class NSString, RBProcess, RBSProcessIdentity;

@interface RBComplexConcreteTarget : RBConcreteTarget {
    NSString *_description;
    RBProcess *_process;
    RBSProcessIdentity *_identity;
    NSString *_environment;
}

- (BOOL)isSystem;
- (id)process;
- (id)description;
- (id)identity;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)environment;
- (unsigned long long)hash;
- (id)createRBSTarget;

@end
