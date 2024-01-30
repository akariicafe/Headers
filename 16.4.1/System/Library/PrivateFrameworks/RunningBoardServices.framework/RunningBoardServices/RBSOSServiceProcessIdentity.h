@class NSString;

@interface RBSOSServiceProcessIdentity : RBSProcessIdentity {
    NSString *_jobLabel;
    unsigned char _type;
}

- (BOOL)hasConsistentLaunchdJob;
- (id)angelJobLabel;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)_initUnknownOSServiceWithJobLabel:(id)a0;
- (id)copyWithAuid:(unsigned int)a0;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;
- (unsigned char)osServiceType;
- (BOOL)supportsLaunchingDirectly;
- (BOOL)isDaemon;
- (BOOL)isAnonymous;
- (id)debugDescription;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)_initServiceWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2 type:(unsigned char)a3;
- (BOOL)_matchesIdentity:(id)a0;
- (id)_initDaemonWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (void)setOsServiceType:(unsigned char)a0;
- (id)consistentLaunchdJobLabel;
- (BOOL)isAngel;
- (void).cxx_destruct;
- (id)_initAngelWithJobLabel:(id)a0;
- (id)daemonJobLabel;

@end
