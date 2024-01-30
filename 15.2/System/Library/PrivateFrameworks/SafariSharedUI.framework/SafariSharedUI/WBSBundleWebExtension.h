@class NSURL, JSValue, NSDictionary, WKBrowsingContextHandle, WBSBundleWebExtensionBrowsingContext, WBSWebExtensionData, NSString, NSSet, WBSWebExtensionLocalization, NSMutableSet, NSArray, WKWebProcessPlugInScriptWorld, UIImage;

@interface WBSBundleWebExtension : NSObject <WBSWebExtensionDataForwarding> {
    NSMutableSet *_browsingContextsDisplayingExtensionContent;
}

@property (retain, nonatomic) WKBrowsingContextHandle *backgroundPageHandle;
@property (readonly, nonatomic) JSValue *backgroundPageWindowObject;
@property (retain, nonatomic) WBSBundleWebExtensionBrowsingContext *popupHandle;
@property (retain, nonatomic) WBSWebExtensionData *data;
@property (readonly, nonatomic) WBSWebExtensionLocalization *localization;
@property (retain, nonatomic) WKWebProcessPlugInScriptWorld *world;
@property (readonly, nonatomic) NSDictionary *manifest;
@property (readonly, nonatomic) NSString *runtimeIdentifier;
@property (readonly, nonatomic) NSArray *relatedBrowsingContextHandles;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *displayShortName;
@property (readonly, nonatomic) NSString *displayVersion;
@property (readonly, nonatomic) NSString *displayDescription;
@property (readonly, nonatomic) NSString *processDisplayName;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) UIImage *preferencesIcon;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) UIImage *toolbarImage;
@property (readonly, nonatomic) NSString *generatedBackgroundPageContent;
@property (readonly, nonatomic) BOOL backgroundPageIsPersistent;
@property (readonly, nonatomic) NSArray *injectedContentData;
@property (readonly, nonatomic) NSURL *newTabOverridePageURL;
@property (readonly, nonatomic) BOOL hasBrowserAction;
@property (readonly, nonatomic) BOOL hasPageAction;
@property (readonly, nonatomic) BOOL hasCommands;
@property (readonly, nonatomic) long long manifestVersion;
@property (readonly, nonatomic) BOOL requestsAccessToAllHosts;
@property (nonatomic) BOOL requestedOptionalAccessToAllHosts;
@property (readonly, nonatomic) NSSet *currentPermissions;
@property (readonly, nonatomic) NSSet *currentPermissionOrigins;
@property (readonly, nonatomic) NSSet *currentAccessibleOrigins;
@property (readonly, nonatomic) NSDictionary *configuredPermissions;
@property (readonly, nonatomic) NSDictionary *configuredPermissionOrigins;
@property (readonly, nonatomic) NSSet *requestedPermissionsNotAlreadyConfigured;
@property (readonly, nonatomic) NSSet *requestedPermissionOriginsNotAlreadyConfigured;
@property (copy, nonatomic) NSDictionary *grantedPermissions;
@property (copy, nonatomic) NSDictionary *grantedPermissionOrigins;
@property (copy, nonatomic) NSDictionary *revokedPermissions;
@property (copy, nonatomic) NSDictionary *revokedPermissionOrigins;
@property (readonly, nonatomic) NSSet *manifestPermissions;
@property (readonly, nonatomic) NSSet *manifestOptionalPermissions;
@property (readonly, nonatomic) NSSet *manifestPermissionOrigins;
@property (readonly, nonatomic) NSSet *manifestOptionalPermissionOrigins;
@property (readonly, nonatomic) NSSet *manifestAccessibleOrigins;
@property (readonly, nonatomic) NSString *contentSecurityPolicy;
@property (readonly, nonatomic) NSArray *webAccessibleResources;
@property (readonly, nonatomic) NSArray *commands;
@property (readonly, nonatomic) NSArray *manifestErrors;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)_windowObjectForBrowsingContext:(id)a0;
- (id)initWithWebExtensionData:(id)a0;
- (void)addBrowsingContextDisplayingExtensionContent:(id)a0;
- (id)allWindowObjectsWithProperties:(id)a0 usingContext:(struct OpaqueJSContext { } *)a1;

@end
