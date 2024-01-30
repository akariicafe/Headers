@interface TPSContentURLController : NSObject

+ (id)defaultHost;
+ (id)_boardID;
+ (id)preferredLocalizations;
+ (BOOL)_isRunningUITest;
+ (id)requestURLForAPI:(id)a0 additionalQueryItems:(id)a1 useLanguageDefault:(BOOL)a2 apiVersion:(id)a3;
+ (id)_uiTestLocalURLForIdentifier:(id)a0;
+ (id)contentRequestURLWithContentMapHash:(id)a0 variantIdentifiers:(id)a1 useLanguageDefault:(BOOL)a2;
+ (id)_platformString;
+ (id)defaultHostPath;
+ (id)effectiveHost;
+ (id)modelQueryItem;
+ (id)platformQueryItem;
+ (long long)majorVersionForVersionString:(id)a0;
+ (id)_uiTestLocalBaseURL;
+ (id)_productHash;
+ (id)metaRequestURL;
+ (id)contentRequestURLWithContentMapHash:(id)a0;
+ (id)assetPathFromAssetConfiguration:(id)a0 type:(long long)a1;
+ (id)_boardIDOrProductHash;

@end
