@class NSString;

@interface QLItemThumbnailGenerator : NSObject <QLItemThumbnailGeneratorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_fetcherClassesForPreviewItem:(id)a0;
- (void)_generateThumbnailForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_generateThumbnailWithData:(id)a0 contentType:(id)a1 size:(struct CGSize { double x0; double x1; })a2 minimumDimension:(double)a3 scale:(double)a4 badgeType:(unsigned long long)a5 completionHandler:(id /* block */)a6;
- (void)_generateThumbnailWithFPItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 minimumDimension:(double)a2 scale:(double)a3 badgeType:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)_generateThumbnailWithURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 minimumDimension:(double)a2 scale:(double)a3 badgeType:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)generateThumbnailForItem:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1 minimumSize:(double)a2 scale:(double)a3 badgeType:(unsigned long long)a4 completionBlock:(id /* block */)a5;
- (void)generateThumbnailRepresentationForItem:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1 minimumSize:(double)a2 scale:(double)a3 badgeType:(unsigned long long)a4 completionBlock:(id /* block */)a5;
- (void)generateThumbnailRepresentationForItem:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1 minimumSize:(double)a2 scale:(double)a3 completionBlock:(id /* block */)a4;

@end
