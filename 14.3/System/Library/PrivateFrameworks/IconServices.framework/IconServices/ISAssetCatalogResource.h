@class NSString, CUICatalog, ISImageBag;

@interface ISAssetCatalogResource : NSObject <ISScalableCompositorResource>

@property (readonly) CUICatalog *catalog;
@property (readonly) ISImageBag *imageBag;
@property (readonly) NSString *imageName;
@property (readonly) NSString *symbolName;
@property (readonly, getter=isPrecomposed) BOOL precomposed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetCatalogResourceWithURL:(id)a0 imageName:(id)a1 symbolName:(id)a2 error:(id *)a3;
+ (id)coreGlyphsCatalog;
+ (id)assetCatalogResourceWithURL:(id)a0 imageName:(id)a1 error:(id *)a2;
+ (id)assetCatalogResourceWithURL:(id)a0 symbolName:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)initWithCatalog:(id)a0 imageName:(id)a1 symbolName:(id)a2;
- (long long)deviceIdiomWithName:(id)a0;
- (id)imageWithName:(id)a0 scale:(double)a1;
- (id)multisizedImageWithName:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (id)symbolImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)symbolImageForFontSize:(double)a0 scale:(double)a1 symbolSize:(unsigned long long)a2 symbolWeight:(long long)a3;

@end
