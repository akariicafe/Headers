@class RBSXPCServiceIdentity;

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {
    RBSXPCServiceIdentity *_serviceIdentity;
}

+ (BOOL)shouldManageExtensionWithExtensionPoint:(id)a0;

- (BOOL)isExtension;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)hostIdentifier;
- (BOOL)isAnonymous;
- (id)copyWithAuid:(unsigned int)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (unsigned char)defaultManageFlags;
- (BOOL)inheritsCoalitionBand;
- (BOOL)_matchesIdentity:(id)a0;
- (id)hostIdentity;
- (void).cxx_destruct;
- (id)initWithDecodeFromJob:(id)a0;
- (id)uuid;
- (id)encodeForJob;
- (unsigned long long)hash;
- (BOOL)isEqualToIdentity:(id)a0;
- (BOOL)isXPCService;
- (id)xpcServiceIdentifier;

@end
