@interface WBSWebExtensionNewTabOverridePreferencesManager : NSObject

+ (id)cloudExtensionStateForDefaults:(id)a0;
+ (void)setNewTabBehaviorWithExtensionComposedIdentifier:(id)a0 inDefaults:(id)a1 fromUserGesture:(BOOL)a2;
+ (id)extensionComposedIdentifierForNewTabPreferenceInDefaults:(id)a0;
+ (BOOL)isNewTabPageOverriddenByAnEnabledExtensionInUserDefaults:(id)a0;
+ (id)sortedComposedIdentifiersForExtensionsWithOverridePages;
+ (void)clearNewTabBehaviorInDefaults:(id)a0;
+ (void)clearNewTabBehaviorInDefaults:(id)a0 fromUserGesture:(BOOL)a1;
+ (id)_webExtensionOverridingNewTabPageWithDefaults:(id)a0;
+ (void)setNewTabBehaviorWithExtensionComposedIdentifier:(id)a0 inDefaults:(id)a1;

@end
