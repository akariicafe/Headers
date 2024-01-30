@interface WBSWebExtensionNewTabOverridePreferencesManager : NSObject

+ (id)extensionComposedIdentifierForNewTabPreferenceInDefaults:(id)a0;
+ (void)setNewTabBehaviorWithExtensionComposedIdentifier:(id)a0 inDefaults:(id)a1;
+ (BOOL)isNewTabPageOverriddenByAnEnabledExtensionInUserDefaults:(id)a0;
+ (void)clearNewTabBehaviorInDefaults:(id)a0;
+ (id)sortedComposedIdentifiersForExtensionsWithOverridePages;

@end
