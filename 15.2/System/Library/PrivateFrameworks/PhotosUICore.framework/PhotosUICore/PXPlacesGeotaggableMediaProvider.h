@class NSString;

@interface PXPlacesGeotaggableMediaProvider : NSObject <PXPlacesMapGeotaggableInfoDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_imageForGeotaggable:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1 networkAccessAllowed:(BOOL)a2 andCompletion:(id /* block */)a3;
- (id)_fetchImageManagerAssetForPlacesAsset:(id)a0;
- (void)imageForGeotaggable:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1 networkAccessAllowed:(BOOL)a2 andCompletion:(id /* block */)a3;

@end
