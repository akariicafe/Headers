@interface TPSContentURLController : NSObject

+ (id)preferredLocalizations;
+ (id)defaultHost;
+ (id)_platformString;
+ (id)defaultHostPath;
+ (id)_boardID;
+ (id)_boardIDOrProductHash;
+ (id)_productHash;
+ (id)_uiTestLocalBaseURL;
+ (id)_uiTestLocalURLForIdentifier:(id)a0;
+ (id)assetPathFromAssetConfiguration:(id)a0 type:(long long)a1;
+ (id)contentRequestURLWithContentMapHash:(id)a0;
+ (id)contentRequestURLWithContentMapHash:(id)a0 variantIdentifiers:(id)a1 useLanguageDefault:(BOOL)a2;
+ (id)effectiveHost;
+ (long long)majorVersionForVersionString:(id)a0;
+ (id)metaRequestURL;
+ (id)modelQueryItem;
+ (id)platformQueryItem;
+ (id)requestURLForAPI:(id)a0 additionalQueryItems:(id)a1 useLanguageDefault:(BOOL)a2 apiVersion:(id)a3;

@end
