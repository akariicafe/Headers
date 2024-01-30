@class NSString;

@interface RBSEmbeddedAppProcessIdentity : RBSProcessIdentity {
    NSString *_embeddedApplicationIdentifier;
}

- (BOOL)isApplication;
- (void).cxx_destruct;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)embeddedApplicationIdentifier;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)_initEmbeddedAppWithBundleID:(id)a0 euid:(unsigned int)a1 platform:(int)a2 jobLabel:(id)a3;
- (unsigned char)defaultManageFlags;
- (BOOL)_matchesIdentity:(id)a0;
- (id)_initEmbeddedAppWithBundleID:(id)a0 euid:(unsigned int)a1 platform:(int)a2;
- (id)debugDescription;
- (id)encodeForJob;
- (id)copyWithEuid:(unsigned int)a0;
- (BOOL)isEmbeddedApplication;
- (BOOL)isAnonymous;

@end
