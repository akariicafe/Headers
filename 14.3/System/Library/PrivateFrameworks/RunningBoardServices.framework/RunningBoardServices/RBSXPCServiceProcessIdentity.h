@class RBSXPCServiceIdentity;

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {
    RBSXPCServiceIdentity *_serviceIdentity;
}

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;

- (BOOL)isXPCService;
- (BOOL)isExtension;
- (BOOL)inheritsCoalitionBand;
- (id)_initWithXPCServiceID:(id)a0 pid:(int)a1 euid:(unsigned int)a2;
- (void).cxx_destruct;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqualToIdentity:(id)a0;
- (unsigned long long)hash;
- (id)uuid;
- (unsigned char)defaultManageFlags;
- (id)xpcServiceIdentifier;
- (BOOL)_matchesIdentity:(id)a0;
- (id)hostIdentifier;
- (id)hostIdentity;
- (id)encodeForJob;
- (id)copyWithEuid:(unsigned int)a0;
- (id)initWithDecodeFromJob:(id)a0;
- (BOOL)isAnonymous;

@end
