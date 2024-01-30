@interface FPUIManager : NSObject

+ (id)uiExtensionPluginForProviderDomain:(id)a0;
+ (id)actionsForProviderDomain:(id)a0;
+ (void)getUIExtensionPlugin:(id *)a0 nonUIExtensionPlugin:(id *)a1 forProviderDomain:(id)a2;
+ (id)extensionForPlugin:(id)a0;
+ (id)extensionMatchingDictionaryForItems:(id)a0;
+ (id)authenticationActionForProviderDomain:(id)a0;
+ (id)uiActionsForProviderDomain:(id)a0;
+ (BOOL)isAction:(id)a0 eligibleForItems:(id)a1;

@end
