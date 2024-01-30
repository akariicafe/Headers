@class NSString;

@interface RBSDaemonProcessIdentity : RBSProcessIdentity {
    NSString *_daemonJobLabel;
}

- (BOOL)isDaemon;
- (void).cxx_destruct;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)_matchesIdentity:(id)a0;
- (id)_initDaemonWithJobLabel:(id)a0 pid:(int)a1 euid:(unsigned int)a2;
- (id)debugDescription;
- (id)copyWithEuid:(unsigned int)a0;
- (id)daemonJobLabel;
- (BOOL)isAnonymous;

@end
