@class RBSXPCServiceIdentity;

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {
    RBSXPCServiceIdentity *_serviceIdentity;
}

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;

- (BOOL)isEqualToIdentity:(id)a0;
- (BOOL)isExtension;
- (id)initWithDecodeFromJob:(id)a0;
- (unsigned char)defaultManageFlags;
- (BOOL)isXPCService;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)persona;
- (id)copyWithAuid:(unsigned int)a0;
- (id)hostIdentity;
- (BOOL)supportsLaunchingDirectly;
- (BOOL)isAnonymous;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)uuid;
- (BOOL)_matchesIdentity:(id)a0;
- (id)xpcServiceIdentifier;
- (BOOL)inheritsCoalitionBand;
- (unsigned long long)hash;
- (id)hostIdentifier;
- (id)encodeForJob;
- (id)validationToken;
- (void).cxx_destruct;

@end
