@class NSDictionary, NSURL, NSString;

@interface IFBundle : NSObject

@property struct __CFBundle { } *bundle;
@property (readonly, copy) NSDictionary *infoDictionary;
@property (readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSString *bundleID;
@property (readonly, copy) NSURL *assetCatalogURL;
@property (readonly, copy) NSDictionary *iconDictionary;
@property (readonly, getter=isCoreTypes) BOOL coreTypes;

+ (id)coreTypesBundle;
+ (id)mainBundle;
+ (id)iconsetResourceBundle;
+ (id)frameworkLocalizedString:(id)a0;
+ (id)coreGlyphsPrivateBundle;
+ (id)iconFoundationFrameworkBundle;
+ (id)bundleWithURL:(id)a0;
+ (id)frameworkBundle;
+ (id)appIconOverrideBundle;
+ (id)mobileIconsFrameworkBundle;
+ (id)iconsetResourceAssetsCatalogURL;
+ (id)coreGlyphsBundle;

- (id)URLForResource:(id)a0 withExtension:(id)a1;
- (id)initWithURL:(id)a0;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;
- (id)initWithCFBundle:(struct __CFBundle { } *)a0;
- (id)URLForResource:(id)a0 withExtension:(id)a1 subdirectory:(id)a2;
- (id)URLsForResourcesWithExtension:(id)a0 subdirectory:(id)a1;
- (void)dealloc;
- (id)URLForResource:(id)a0;

@end
