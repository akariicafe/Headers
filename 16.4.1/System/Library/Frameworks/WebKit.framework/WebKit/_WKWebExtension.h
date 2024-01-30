@class NSArray, NSDictionary, NSString, NSLocale, NSSet;

@interface _WKWebExtension : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebExtension> { struct type { unsigned char __lx[232]; } data; } _webExtension;
}

@property (readonly, nonatomic) void *_webExtension;
@property (readonly, nonatomic) BOOL _backgroundContentIsServiceWorker;
@property (readonly, nonatomic) BOOL _backgroundContentUsesModules;
@property (readonly, copy, nonatomic) NSArray *errors;
@property (readonly, copy, nonatomic) NSDictionary *manifest;
@property (readonly, nonatomic) double manifestVersion;
@property (readonly, copy, nonatomic) NSLocale *defaultLocale;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *displayShortName;
@property (readonly, copy, nonatomic) NSString *displayVersion;
@property (readonly, copy, nonatomic) NSString *displayDescription;
@property (readonly, copy, nonatomic) NSString *displayActionLabel;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSSet *requestedPermissions;
@property (readonly, copy, nonatomic) NSSet *optionalPermissions;
@property (readonly, copy, nonatomic) NSSet *requestedPermissionMatchPatterns;
@property (readonly, copy, nonatomic) NSSet *optionalPermissionMatchPatterns;
@property (readonly, copy, nonatomic) NSSet *allRequestedMatchPatterns;
@property (readonly, nonatomic) BOOL hasBackgroundContent;
@property (readonly, nonatomic) BOOL backgroundContentIsPersistent;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionWithAppExtensionBundle:(id)a0;
+ (id)extensionWithResourceBaseURL:(id)a0;

- (void)dealloc;
- (BOOL)_hasStaticInjectedContentForURL:(id)a0;
- (id)_initWithManifestDictionary:(id)a0;
- (id)_initWithManifestDictionary:(id)a0 resources:(id)a1;
- (id)_initWithResources:(id)a0;
- (id)actionIconForSize:(struct CGSize { double x0; double x1; })a0;
- (id)iconForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithAppExtensionBundle:(id)a0 error:(id *)a1;
- (id)initWithResourceBaseURL:(id)a0 error:(id *)a1;
- (BOOL)supportsManifestVersion:(double)a0;

@end
