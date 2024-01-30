@class NSString;

@interface RBSAppProcessIdentity : RBSProcessIdentity {
    NSString *_embeddedApplicationIdentifier;
    NSString *_applicationJobLabel;
}

- (BOOL)isApplication;
- (void).cxx_destruct;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)embeddedApplicationIdentifier;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)_initAppWithLabel:(id)a0 bundleID:(id)a1 euid:(unsigned int)a2 platform:(int)a3;
- (unsigned char)defaultManageFlags;
- (BOOL)_matchesIdentity:(id)a0;
- (id)debugDescription;
- (id)encodeForJob;
- (id)copyWithEuid:(unsigned int)a0;
- (id)applicationJobLabel;
- (BOOL)isAnonymous;

@end
