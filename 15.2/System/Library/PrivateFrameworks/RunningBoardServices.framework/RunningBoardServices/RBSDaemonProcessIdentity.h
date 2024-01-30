@class NSString;

@interface RBSDaemonProcessIdentity : RBSProcessIdentity {
    NSString *_daemonJobLabel;
}

- (BOOL)isDaemon;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isAnonymous;
- (id)copyWithAuid:(unsigned int)a0;
- (id)_initDaemonWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)_matchesIdentity:(id)a0;
- (id)daemonJobLabel;
- (void).cxx_destruct;
- (id)debugDescription;

@end
