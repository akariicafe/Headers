@class NSArray, MCMClientIdentity;

@interface MCMResultQuery : MCMResultBase

@property (readonly, nonatomic) NSArray *containers;
@property (readonly, nonatomic) NSArray *resolvedLinks;
@property (readonly, nonatomic) BOOL includePath;
@property (readonly, nonatomic) BOOL includeInfo;
@property (readonly, nonatomic) BOOL issueSandboxExtensions;
@property (readonly, nonatomic) MCMClientIdentity *clientIdentity;
@property (readonly, nonatomic) BOOL legacyPersonaPolicy;
@property (readonly, nonatomic) BOOL legacyExtensionPolicy;

- (void)_compileContainerDataForIndex:(unsigned long long)a0 container:(struct container_object_s **)a1 infos:(id)a2 tokens:(id)a3;
- (BOOL)encodeResultOntoReply:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainers:(id)a0 clientIdentity:(id)a1 issueSandboxExtensions:(BOOL)a2 resolvedLinks:(id)a3 includePath:(BOOL)a4 includeInfo:(BOOL)a5 legacyPersonaPolicy:(BOOL)a6 legacyExtensionPolicy:(BOOL)a7;

@end
