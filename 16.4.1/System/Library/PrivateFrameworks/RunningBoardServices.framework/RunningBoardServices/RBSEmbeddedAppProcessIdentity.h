@class NSString;

@interface RBSEmbeddedAppProcessIdentity : RBSProcessIdentity {
    NSString *_embeddedApplicationIdentifier;
}

- (id)embeddedApplicationIdentifier;
- (BOOL)isApplication;
- (unsigned char)defaultManageFlags;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)copyWithAuid:(unsigned int)a0;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;
- (BOOL)supportsLaunchingDirectly;
- (BOOL)isAnonymous;
- (id)debugDescription;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)_matchesIdentity:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEmbeddedApplication;
- (id)encodeForJob;
- (void).cxx_destruct;

@end
