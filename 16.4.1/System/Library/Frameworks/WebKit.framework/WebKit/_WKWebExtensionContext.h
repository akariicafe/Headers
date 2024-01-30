@class _WKWebExtension, NSString, NSDictionary, NSURL, WKWebView, _WKWebExtensionController, NSSet;

@interface _WKWebExtensionContext : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebExtensionContext> { struct type { unsigned char __lx[296]; } data; } _webExtensionContext;
}

@property (readonly, nonatomic) void *_webExtensionContext;
@property (nonatomic, getter=_inTestingMode, setter=_setTestingMode:) BOOL _testingMode;
@property (readonly, nonatomic) WKWebView *_backgroundWebView;
@property (readonly, nonatomic) NSURL *_backgroundContentURL;
@property (readonly, nonatomic) _WKWebExtension *webExtension;
@property (readonly, weak, nonatomic) _WKWebExtensionController *webExtensionController;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (copy, nonatomic) NSURL *baseURL;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic, getter=isInspectable) BOOL inspectable;
@property (copy, nonatomic) NSDictionary *grantedPermissions;
@property (copy, nonatomic) NSDictionary *grantedPermissionMatchPatterns;
@property (copy, nonatomic) NSDictionary *deniedPermissions;
@property (copy, nonatomic) NSDictionary *deniedPermissionMatchPatterns;
@property (nonatomic) BOOL requestedOptionalAccessToAllHosts;
@property (readonly, copy, nonatomic) NSSet *currentPermissions;
@property (readonly, copy, nonatomic) NSSet *currentPermissionMatchPatterns;
@property (readonly, nonatomic) BOOL hasAccessToAllURLs;
@property (readonly, nonatomic) BOOL hasAccessToAllHosts;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextForExtension:(id)a0;

- (void)dealloc;
- (BOOL)hasPermission:(id)a0;
- (BOOL)hasAccessToURL:(id)a0;
- (BOOL)hasAccessToURL:(id)a0 inTab:(id)a1;
- (BOOL)hasActiveUserGestureInTab:(id)a0;
- (BOOL)hasInjectedContentForURL:(id)a0;
- (BOOL)hasPermission:(id)a0 inTab:(id)a1;
- (id)initForExtension:(id)a0;
- (long long)permissionStatusForMatchPattern:(id)a0;
- (long long)permissionStatusForMatchPattern:(id)a0 inTab:(id)a1;
- (long long)permissionStatusForPermission:(id)a0;
- (long long)permissionStatusForPermission:(id)a0 inTab:(id)a1;
- (long long)permissionStatusForURL:(id)a0;
- (long long)permissionStatusForURL:(id)a0 inTab:(id)a1;
- (void)setPermissionStatus:(long long)a0 forMatchPattern:(id)a1;
- (void)setPermissionStatus:(long long)a0 forMatchPattern:(id)a1 expirationDate:(id)a2;
- (void)setPermissionStatus:(long long)a0 forPermission:(id)a1;
- (void)setPermissionStatus:(long long)a0 forPermission:(id)a1 expirationDate:(id)a2;
- (void)setPermissionStatus:(long long)a0 forURL:(id)a1;
- (void)setPermissionStatus:(long long)a0 forURL:(id)a1 expirationDate:(id)a2;

@end
