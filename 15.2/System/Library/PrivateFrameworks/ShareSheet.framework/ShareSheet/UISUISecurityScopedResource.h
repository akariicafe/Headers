@class NSURL, FPSandboxingURLWrapper;

@interface UISUISecurityScopedResource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) FPSandboxingURLWrapper *sandboxExtensionWrapper;
@property (nonatomic) long long allowedAccess;
@property (nonatomic) BOOL hasActiveAccessAssertion;
@property (nonatomic) long long underlyingSandboxAssertionHandle;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isContentManaged;

+ (id)readonlySandboxExtensionClassString;
+ (id)scopedResourceWithFileURL:(id)a0 allowedAccess:(long long)a1;
+ (BOOL)_isValidURLForIssuingSandboxExtension:(id)a0;
+ (id)_scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)a0 traversalStopPaths:(id)a1 allowedAccess:(long long)a2;
+ (id)_sandboxExtensionClassForAllowedAccess:(long long)a0;
+ (id)readwriteSandboxExtensionClassString;
+ (id)scopedResourceWithAbsolutePath:(id)a0 allowedAccess:(long long)a1;
+ (id)scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)a0 traversalStopPaths:(id)a1 allowedAccess:(long long)a2;
+ (id)uniquedSecurityScopedResources:(id)a0;
+ (id)scopedResourceWithURL:(id)a0 allowedAccess:(long long)a1;

- (void)stopAccessing;
- (void)encodeWithCoder:(id)a0;
- (BOOL)startAccessing;
- (id)initWithAbsoluteURL:(id)a0 sandboxExtensionWrapper:(id)a1 allowedAccess:(long long)a2;
- (BOOL)_isEqualAccessToSecurityScopedResource:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
