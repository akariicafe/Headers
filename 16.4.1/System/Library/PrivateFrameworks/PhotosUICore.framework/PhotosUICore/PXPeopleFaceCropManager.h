@class NSString, NSMutableDictionary, NSMutableSet, NSCache;

@interface PXPeopleFaceCropManager : NSObject <PXPhotoLibraryUIChangeObserver> {
    NSCache *_faceCropCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _faceCropCacheLock;
    NSMutableDictionary *_faceCropRequestsByRequestIDs;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _faceCropRequestsByRequestIDsLock;
    NSMutableSet *_peopleWithoutKeyFaces;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _peopleWithoutKeyFacesLock;
}

@property (class, readonly, nonatomic) PXPeopleFaceCropManager *sharedManager;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_fetchQueue;
+ (id)_compressionQueue;
+ (struct CGSize { double x0; double x1; })_constrainedSizeForDesiredSize:(struct CGSize { double x0; double x1; })a0;
+ (double)_cornerRadiusForCornerStyle:(long long)a0 pixelTargetSize:(struct CGSize { double x0; double x1; })a1;
+ (double)_cropFactorValueForCropFactor:(long long)a0;
+ (id)_cropQueue;
+ (id)_faceCropManagerLog;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_normalizedFaceCropRectForFace:(id)a0 cropFactor:(long long)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectWithAspectRatioFittingAroundEyeLevelForAspectRatio:(double)a0 pixelFaceCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 eyeLinePoint:(struct CGPoint { double x0; double x1; })a2;
+ (int)generateUniqueRequestID;

- (id)init;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void).cxx_destruct;
- (void)_cacheResult:(id)a0;
- (id)_cachedResultForOptions:(id)a0;
- (void)_cleanupForImage:(id)a0 request:(id)a1;
- (void)_compressImage:(id)a0 request:(id)a1 resultHandler:(id /* block */)a2;
- (void)_cropImage:(id)a0 request:(id)a1 resultHandler:(id /* block */)a2;
- (void)_emptyFaceCropCache;
- (void)_executeFaceCropRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)_fetchFaceAndAssetIfNecessaryForOptions:(id)a0 completion:(id /* block */)a1;
- (void)_handleImage:(id)a0 info:(id)a1 faceCropRequest:(id)a2 resultHandler:(id /* block */)a3;
- (void)_invalidateCacheForLocalIdentifiers:(id)a0 wantsNotificationPosted:(BOOL)a1;
- (int)_prepareFaceCropRequestWithOptions:(id)a0 resultHandler:(id /* block */)a1;
- (void)cancelRequestForRequestID:(int)a0;
- (void)invalidateCacheForPerson:(id)a0;
- (BOOL)isRequestActiveWithRequestID:(int)a0;
- (int)requestFaceCropForOptions:(id)a0 resultHandler:(id /* block */)a1;
- (int)requestFaceCropImageForPerson:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 completionHandler:(id /* block */)a3;

@end
