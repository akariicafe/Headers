@class WBSWebExtensionAPIEventObjC;

@interface WBSWebExtensionAPIActionObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC *_onClicked;
}

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) WBSWebExtensionAPIEventObjC *onClicked;

+ (id)actionWithExtensionIdentifier:(id)a0 runtime:(id)a1;

- (void).cxx_destruct;
- (void)setTitleWithDetails:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2;
- (void)getTitleWithDetails:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2;
- (void)setBadgeTextWithDetails:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2;
- (void)getBadgeTextWithDetails:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2;
- (void)setBadgeBackgroundColorWithDetails:(id)a0;
- (void)getBadgeBackgroundColorWithDetails:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2;
- (void)enableWithTabIdentifier:(double)a0 browserContextController:(id)a1 completionHandler:(id)a2;
- (void)disableWithTabIdentifier:(double)a0 browserContextController:(id)a1 completionHandler:(id)a2;
- (void)setIconWithDetails:(struct OpaqueJSValue { } *)a0 browserContextController:(id)a1 context:(struct OpaqueJSContext { } *)a2 completionHandler:(id)a3 outExceptionString:(id *)a4;
- (void)setPopupWithDetails:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2;
- (void)getPopupWithDetails:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2;

@end
