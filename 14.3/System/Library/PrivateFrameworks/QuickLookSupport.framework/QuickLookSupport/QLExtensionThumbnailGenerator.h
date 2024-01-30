@class QLExtensionManager, NSString;

@interface QLExtensionThumbnailGenerator : NSObject <QLThumbnailSurfaceGeneratorProtocol>

@property (retain, nonatomic) QLExtensionManager *extensionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasThirdPartyThumbnailGeneratorForItem:(id)a0;
+ (BOOL)hasThirdPartyThumbnailGeneratorForContentType:(id)a0;
+ (BOOL)hasThumbnailGeneratorForContentType:(id)a0 firstPartyExtension:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (void)generatePlatformImageThumbnailForExtensionThumbnailItem:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1 minimumSize:(double)a2 scale:(double)a3 badgeType:(unsigned long long)a4 generatorData:(id)a5 completionBlock:(id /* block */)a6;
- (void)ioSurfaceWithSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)_generateImageFromRawData:(id)a0 withContextSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (id)_generateImageFromURL:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;

@end
