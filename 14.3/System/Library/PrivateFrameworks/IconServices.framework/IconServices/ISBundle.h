@class NSString, NSURL, NSDictionary;

@interface ISBundle : NSObject <ISScalableCompositorResource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property struct __CFBundle { } *bundle;
@property (readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSURL *assetCatalogURL;
@property (readonly, copy) NSDictionary *iconDictionary;

+ (id)mainBundle;
+ (id)iconsetResourceBundle;
+ (id)iconsetResourceAssetsCatalogURL;
+ (id)frameworkLocalizedString:(id)a0;
+ (id)frameworkBundle;

- (id)URLsForResourcesWithExtension:(id)a0 subdirectory:(id)a1;
- (id)URLForResource:(id)a0 withExtension:(id)a1 subdirectory:(id)a2;
- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void)dealloc;
- (id)URLForResource:(id)a0 withExtension:(id)a1;
- (id)initWithURL:(id)a0;
- (id)compositorResource;
- (id)initWithCFBundle:(struct __CFBundle { } *)a0;
- (id)localizedStringForKey:(id)a0 value:(id)a1 table:(id)a2;

@end
