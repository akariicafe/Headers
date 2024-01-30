@class NSString;

@interface RBSEmbeddedAppWithPersonaProcessIdentity : RBSProcessIdentity {
    NSString *_embeddedApplicationIdentifier;
    NSString *_personaString;
}

- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isAnonymous;
- (id)copyWithAuid:(unsigned int)a0;
- (BOOL)isEmbeddedApplication;
- (id)initWithRBSXPCCoder:(id)a0;
- (unsigned char)defaultManageFlags;
- (BOOL)_matchesIdentity:(id)a0;
- (BOOL)isApplication;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initEmbeddedAppWithAppInfoProvider:(id)a0;
- (id)personaString;
- (id)_initEmbeddedApp:(id)a0 personaString:(id)a1;
- (id)encodeForJob;
- (id)embeddedApplicationIdentifier;
- (id)debugDescription;

@end
