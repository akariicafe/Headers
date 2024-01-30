@class QLExtensionManager, NSString;

@interface QLExtensionThumbnailGenerator : NSObject <QLThumbnailSurfaceGeneratorProtocol>

@property (retain, nonatomic) QLExtensionManager *extensionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasThirdPartyThumbnailGeneratorForContentType:(id)a0;
+ (BOOL)hasThirdPartyThumbnailGeneratorForItem:(id)a0;
+ (BOOL)hasThumbnailGeneratorForContentType:(id)a0 firstPartyExtension:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (void)ioSurfaceWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)generatePlatformImageThumbnailForExtensionThumbnailItem:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1 minimumSize:(double)a2 scale:(double)a3 badgeType:(unsigned long long)a4 iconFlavor:(int)a5 generatorData:(id)a6 interpolationQuality:(int)a7 shouldUseRestrictedExtension:(BOOL)a8 completionBlock:(id /* block */)a9;
- (id)_generateImageFromRawData:(id)a0 bitmapFormat:(id)a1 scale:(double)a2;
- (id)_generateImageFromURL:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (void)generatePlatformImageThumbnailForExtensionThumbnailItem:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1 minimumSize:(double)a2 scale:(double)a3 badgeType:(unsigned long long)a4 generatorData:(id)a5 interpolationQuality:(int)a6 shouldUseRestrictedExtension:(BOOL)a7 completionBlock:(id /* block */)a8;
- (void)generatePlatformImageThumbnailForExtensionThumbnailItem:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1 minimumSize:(double)a2 scale:(double)a3 badgeType:(unsigned long long)a4 generatorData:(id)a5 shouldUseRestrictedExtension:(BOOL)a6 completionBlock:(id /* block */)a7;
- (void)generatePlatformImageThumbnailForExtensionThumbnailItem:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1 minimumSize:(double)a2 scale:(double)a3 badgeType:(unsigned long long)a4 iconFlavor:(int)a5 generatorData:(id)a6 shouldUseRestrictedExtension:(BOOL)a7 completionBlock:(id /* block */)a8;

@end
