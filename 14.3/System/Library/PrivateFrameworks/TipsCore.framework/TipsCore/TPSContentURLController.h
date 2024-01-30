@interface TPSContentURLController : NSObject

+ (id)defaultHost;
+ (BOOL)_isRunningUITest;
+ (id)requestURLForAPI:(id)a0 additionalQueryItems:(id)a1 useLanguageDefault:(BOOL)a2;
+ (id)_uiTestLocalURLForIdentifier:(id)a0;
+ (id)contentRequestURLWithContentMapHash:(id)a0 documentID:(id)a1 variantID:(id)a2 useLanguageDefault:(BOOL)a3;
+ (id)defaultHostPath;
+ (id)effectiveHost;
+ (id)modelQueryItem;
+ (long long)majorVersionForVersionString:(id)a0;
+ (id)_uiTestLocalBaseURL;
+ (id)metaRequestURL;
+ (id)contentRequestURLWithContentMapHash:(id)a0;
+ (id)assetPathFromAssetConfiguration:(id)a0 type:(long long)a1;

@end
