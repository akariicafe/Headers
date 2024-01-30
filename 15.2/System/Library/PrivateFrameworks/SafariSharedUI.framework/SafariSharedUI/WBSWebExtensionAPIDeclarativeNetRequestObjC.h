@interface WBSWebExtensionAPIDeclarativeNetRequestObjC : WBSWebExtensionAPIObject

@property (readonly, nonatomic) void *cpp;
@property (readonly, nonatomic) double maxNumberOfStaticRulesets;

+ (id)declarativeNetRequestWithExtensionIdentifier:(id)a0 runtime:(id)a1;

- (void)updateEnabledRulesetsWithOptions:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;
- (void)getEnabledRulesetsWithBrowserContextController:(id)a0 completionHandler:(id)a1;
- (void)isRegexSupportedWithOptions:(id)a0 browserContextController:(id)a1 completionHandler:(id)a2 outExceptionString:(id *)a3;

@end
