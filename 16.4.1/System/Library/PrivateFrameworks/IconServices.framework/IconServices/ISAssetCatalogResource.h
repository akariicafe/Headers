@class NSString, CUICatalog, IFImageBag;

@interface ISAssetCatalogResource : NSObject <ISScalableCompositorResource>

@property (readonly) CUICatalog *catalog;
@property (readonly) IFImageBag *imageBag;
@property (readonly) NSString *imageName;
@property (readonly) NSString *symbolName;
@property long long layoutDirection;
@property (readonly, getter=isPrecomposed) BOOL precomposed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetCatalogResourceWithURL:(id)a0 imageName:(id)a1 error:(id *)a2;
+ (id)assetCatalogResourceWithURL:(id)a0 imageName:(id)a1 symbolName:(id)a2 error:(id *)a3;
+ (id)assetCatalogResourceWithURL:(id)a0 symbolName:(id)a1 error:(id *)a2;
+ (id)coreGlyphsCatalog;
+ (id)imageForStaticAssetWithKey:(id)a0 withDescriptor:(id)a1;

- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void).cxx_destruct;
- (id)imageWithName:(id)a0 scale:(double)a1;
- (id)initWithCatalog:(id)a0 imageName:(id)a1 symbolName:(id)a2;
- (id)symbolImageForFontSize:(double)a0 scale:(double)a1 symbolSize:(unsigned long long)a2 symbolWeight:(long long)a3;
- (id)symbolImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
