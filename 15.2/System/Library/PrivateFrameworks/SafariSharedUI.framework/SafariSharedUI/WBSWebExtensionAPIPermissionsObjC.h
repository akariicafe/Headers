@class WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPIPermissionsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onAdded;
    WBSWebExtensionAPIEventObjC *_onRemoved;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onAdded;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onRemoved;

+ (id)permissionsWithExtensionIdentifier:(id)a0 runtime:(id)a1;

- (void).cxx_destruct;
- (void)getAllPermissionsWithBrowserContextController:(id)a0 completionHandler:(id)a1;
- (void)containsPermissions:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)requestPermissions:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)removePermissions:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;

@end
