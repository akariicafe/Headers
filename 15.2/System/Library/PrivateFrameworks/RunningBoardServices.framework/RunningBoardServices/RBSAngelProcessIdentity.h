@class NSString;

@interface RBSAngelProcessIdentity : RBSProcessIdentity {
    NSString *_angelJobLabel;
}

- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isAnonymous;
- (id)copyWithAuid:(unsigned int)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)_matchesIdentity:(id)a0;
- (BOOL)isAngel;
- (void).cxx_destruct;
- (id)_initAngelWithJobLabel:(id)a0;
- (id)angelJobLabel;
- (id)debugDescription;

@end
