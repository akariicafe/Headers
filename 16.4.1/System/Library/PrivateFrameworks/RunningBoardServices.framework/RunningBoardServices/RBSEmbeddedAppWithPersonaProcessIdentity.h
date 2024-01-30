@class NSString;

@interface RBSEmbeddedAppWithPersonaProcessIdentity : RBSProcessIdentity {
    NSString *_embeddedApplicationIdentifier;
    NSString *_personaString;
}

- (id)embeddedApplicationIdentifier;
- (BOOL)isApplication;
- (unsigned char)defaultManageFlags;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)copyWithAuid:(unsigned int)a0;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;
- (id)personaString;
- (BOOL)supportsLaunchingDirectly;
- (BOOL)isAnonymous;
- (id)_initEmbeddedAppWithAppInfoProvider:(id)a0;
- (id)debugDescription;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)_matchesIdentity:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEmbeddedApplication;
- (id)_initEmbeddedApp:(id)a0 personaString:(id)a1;
- (id)encodeForJob;
- (void).cxx_destruct;

@end
