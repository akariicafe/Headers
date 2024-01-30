@class NSArray, MCMError, MCMClientIdentity, NSString;

@interface MCMResultWithContainersArrayBase : MCMResultBase <MCMResultWithContainersArray>

@property (readonly, nonatomic) MCMClientIdentity *clientIdentity;
@property (readonly, nonatomic) BOOL skipSandboxExtensions;
@property (readonly, nonatomic) NSArray *containerPaths;
@property (readonly, nonatomic) NSArray *containerIdentities;
@property (readonly, nonatomic) NSArray *containers;
@property (readonly, nonatomic) NSArray *resolvedLinks;
@property (readonly, nonatomic) BOOL includePath;
@property (readonly, nonatomic) BOOL includeInfo;
@property (readonly, nonatomic) MCMError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
