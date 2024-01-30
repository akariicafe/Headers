@class NSMutableDictionary, HFCameraClipVideoAssetOperationCache, NSOperationQueue, HFCameraImageCache, HMCameraProfile;

@interface HFCameraImageManager : NSObject

@property (retain, nonatomic) NSOperationQueue *posterFrameQueue;
@property (retain, nonatomic) HFCameraImageCache *imageCache;
@property (retain, nonatomic) NSMutableDictionary *imageObservers;
@property (retain, nonatomic) NSMutableDictionary *generationObservers;
@property (retain, nonatomic) NSMutableDictionary *inProgressOperations;
@property (retain, nonatomic) HFCameraClipVideoAssetOperationCache *fetchCache;
@property (retain, nonatomic) NSMutableDictionary *requestedHeroFrameCache;
@property (retain, nonatomic) NSMutableDictionary *requestedFaceCropCache;
@property (retain, nonatomic) NSMutableDictionary *requestedPosterFrameCache;
@property (weak, nonatomic) HMCameraProfile *cameraProfile;

+ (id)sharedManager;
+ (id)clipIdentifierStringFromDate:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)purgePosterFrames;
- (double)_timeScaleAdjustedOffset:(double)a0;
- (id)heroFrameImageForClip:(id)a0;
- (id)imageObserversForKey:(id)a0;
- (void)failedToFindFaceCropForClip:(id)a0 withKey:(id)a1;
- (id)keyForClip:(id)a0;
- (void)dealloc;
- (void)failToFindHeroFrameForClip:(id)a0;
- (id)_posterFrameForClip:(id)a0 atOffset:(double)a1;
- (void)_addOperationForObserver:(id)a0 clip:(id)a1 posterFrame:(id)a2;
- (void)_generateMissingPosterFrameImageForClip:(id)a0 atOffset:(double)a1 observer:(id)a2;
- (id)keyForClip:(id)a0 timeOffset:(double)a1;
- (void)addOperationForObserver:(id)a0 clip:(id)a1 posterFrame:(id)a2 withKey:(id)a3;
- (void)_addPosterFrameImage:(id)a0 forClip:(id)a1 withOffset:(double)a2;
- (id)cachedPosterFrameImageForClip:(id)a0 offset:(double)a1;
- (void)_generateImageUsingAsset:(id)a0 clip:(id)a1 offset:(double)a2 observer:(id)a3;
- (void)_generateImagesUsingAsset:(id)a0 clip:(id)a1 observer:(id)a2;
- (id)faceCropForClip:(id)a0 atOffset:(double)a1;
- (id)faceCropForPersonName:(id)a0;
- (id)faceCropImagesForClip:(id)a0 atOffset:(double)a1;
- (id)representativeImageForClip:(id)a0;
- (void)addFaceCropImageObserver:(id)a0 forClip:(id)a1 usingSignificantEvent:(id)a2;
- (void)removeFaceCropImageObserver:(id)a0 forPersonName:(id)a1;
- (void)addHeroFrameImageObserver:(id)a0 forClip:(id)a1;
- (void)removeHeroFrameImageObserver:(id)a0 forClip:(id)a1;
- (void)_fetchPosterFrameImageForObserver:(id)a0 forClip:(id)a1 offset:(double)a2;
- (void)addPosterFrameImageObserver:(id)a0 forClip:(id)a1 atOffset:(double)a2;
- (void)removePosterFrameImageObserver:(id)a0 forClip:(id)a1 atOffset:(double)a2;
- (void)addDemoPosterFrameImageObserver:(id)a0 forClip:(id)a1 atOffset:(double)a2;
- (void)resetForCameraDismissal;
- (void)cacheDemoPosterFramesForAsset:(id)a0 forClip:(id)a1;

@end
