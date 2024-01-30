@class NSString, BSAuditToken;

@interface STExecutableIdentity : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying> {
    BSAuditToken *_bsAuditToken;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, nonatomic) BOOL hasAuditToken;
@property (readonly, copy, nonatomic) NSString *bundlePath;
@property (readonly, copy, nonatomic) NSString *executablePath;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic, getter=isSystemExecutable) BOOL systemExecutable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithExecutablePath:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithApplicationBundleIdentifier:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundlePath:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 bundlePath:(id)a1 executablePath:(id)a2 systemExecutable:(BOOL)a3;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 bundlePath:(id)a1 executablePath:(id)a2 bundleIdentifier:(id)a3 personaUniqueString:(id)a4 systemExecutable:(BOOL)a5;
- (BOOL)matchesExecutableIdentity:(id)a0;
- (id)initWithApplicationBundleIdentifier:(id)a0 personaUniqueString:(id)a1;

@end
