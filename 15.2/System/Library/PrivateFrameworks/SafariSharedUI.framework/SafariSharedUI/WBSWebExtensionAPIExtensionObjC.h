@interface WBSWebExtensionAPIExtensionObjC : WBSWebExtensionAPIObject

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic, getter=isInIncognitoContext) BOOL inIncognitoContext;

+ (id)extensionWithExtensionIdentifier:(id)a0 runtime:(id)a1 isForMainWorld:(BOOL)a2;

- (BOOL)isPropertyAllowed:(id)a0;
- (id)getURLWithResourcePath:(id)a0;
- (const struct OpaqueJSValue { } *)getBackgroundPage;
- (const struct OpaqueJSValue { } *)getViewsWithProperties:(id)a0 context:(struct OpaqueJSContext { } *)a1;
- (void)isAllowedFileSchemeAccessWithCompletionHandler:(id)a0;
- (void)isAllowedIncognitoAccessWithCompletionHandler:(id)a0;

@end
