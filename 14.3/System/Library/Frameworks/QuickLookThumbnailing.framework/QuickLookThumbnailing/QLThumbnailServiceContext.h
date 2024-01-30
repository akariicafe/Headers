@class QLThumbnailProvider, NSString;

@interface QLThumbnailServiceContext : NSExtensionContext <QLThumbnailServiceSurfaceGeneratorProtocol, QLThumbnailService>

@property (retain, nonatomic) QLThumbnailProvider *thumbnailProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (id)protocolHost;
- (void)ioSurfaceForRequest:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)generateThumbnailOfSize:(struct CGSize { double x0; double x1; })a0 minimumSize:(double)a1 scale:(double)a2 badgeType:(unsigned long long)a3 withContents:(id)a4 additionalResourcesWrapper:(id)a5 generatorData:(id)a6 completionHandler:(id /* block */)a7;
- (id)_thumbnailGenerationQueue;
- (id)protocolHostWithErrorHandler:(id /* block */)a0;
- (void)generateThumbnailOfSize:(struct CGSize { double x0; double x1; })a0 minimumSize:(double)a1 scale:(double)a2 badgeType:(unsigned long long)a3 withFileURLHandler:(id)a4 additionalResourcesWrapper:(id)a5 generatorData:(id)a6 completionHandler:(id /* block */)a7;

@end
