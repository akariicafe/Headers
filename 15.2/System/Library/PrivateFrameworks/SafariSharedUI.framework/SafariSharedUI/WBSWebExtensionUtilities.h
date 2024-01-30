@interface WBSWebExtensionUtilities : NSObject

+ (double)nextTabID;
+ (id)serializeObjectToJSON:(id)a0;
+ (id)tabIDToTabPositionDictionaryForTabs:(id)a0;
+ (double)nextWindowID;
+ (id)urlFromTabsCreateOrUpdatePropertiesDictionary:(id)a0 webExtension:(id)a1;
+ (id)windowStateForWindow:(id)a0 webExtension:(id)a1 shouldPopulateTabs:(BOOL)a2;
+ (id)tabStateRespectingPermissionsForTab:(id)a0 webExtension:(id)a1;
+ (id)changeInfoForOnUpdatedEventRespectingPermissionsForTab:(id)a0 changedProperties:(unsigned long long)a1 webExtension:(id)a2;
+ (BOOL)isWindowIDValid:(double)a0;
+ (BOOL)tab:(id)a0 matchesQueryInfo:(id)a1 idOfCurrentWindow:(double)a2 webExtension:(id)a3;
+ (BOOL)validateContentsOfDictionary:(id)a0 requiredKeys:(id)a1 optionalKeys:(id)a2 keyToExpectedValueType:(id)a3 outExceptionString:(id *)a4;
+ (BOOL)isTabIDValid:(double)a0;

@end
