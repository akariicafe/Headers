@class NSMutableDictionary, HFCameraClipVideoAssetOperationCache, NSOperationQueue, HFCameraImageCache, HFCameraPosterFrameProvider, HMCameraProfile;

@interface HFCameraImageManager : NSObject <HFCameraTimelapseVideoDownloaderDelegate>

@property (retain, nonatomic) NSOperationQueue *posterFrameQueue;
@property (retain, nonatomic) HFCameraImageCache *imageCache;
@property (retain, nonatomic) NSMutableDictionary *imageObservers;
@property (retain, nonatomic) NSMutableDictionary *generationObservers;
@property (retain, nonatomic) NSMutableDictionary *inProgressOperations;
@property (retain, nonatomic) HFCameraClipVideoAssetOperationCache *fetchCache;
@property (retain, nonatomic) NSMutableDictionary *requestedHeroFrameCache;
@property (retain, nonatomic) NSMutableDictionary *requestedFaceCropCache;
@property (retain, nonatomic) NSMutableDictionary *requestedPosterFrameCache;
@property (retain, nonatomic) HFCameraPosterFrameProvider *cameraPosterFrameProvider;
@property (retain, nonatomic) NSMutableDictionary *offsetsForFile;
@property (weak, nonatomic) HMCameraProfile *cameraProfile;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;

+ (id)sharedManager;
+ (id)clipIdentifierStringFromDate:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)generateDemoPosterFramesForAsset:(id)a0 forClip:(id)a1;
- (void)purgePosterFrames;
- (void)purgeVideoFiles;
- (double)_timeScaleAdjustedOffset:(double)a0;
- (id)heroFrameImageForClip:(id)a0;
- (id)firstPosterFrameImageForClip:(id)a0;
- (id)imageObserversForKey:(id)a0;
- (void)failedToFindFaceCropForClip:(id)a0 withKey:(id)a1;
- (void)failToFindHeroFrameForClip:(id)a0;
- (void)generatePosterFrameImageForClip:(id)a0 atOffset:(double)a1 observer:(id)a2;
- (id)keyForClip:(id)a0 timeOffset:(double)a1;
- (id)cachedPosterFrameImageForClip:(id)a0 offset:(double)a1 requestor:(id)a2;
- (struct CGSize { double x0; double x1; })posterFrameSize;
- (void)_addPosterFrameImage:(id)a0 forClip:(id)a1 withOffset:(double)a2;
- (void)_updateDemoObserversForImage:(id)a0 forClip:(id)a1 withOffset:(double)a2;
- (void)_generateImagesForForTimelapseClip:(id)a0 atLocation:(id)a1;
- (void)generateImageUsingAsset:(id)a0 clip:(id)a1 offset:(double)a2;
- (void)didDownloadVideoFileForTimelapseClip:(id)a0 atLocation:(id)a1;
- (void)foundVideoFileForTimelapseClip:(id)a0 atLocation:(id)a1;
- (void)failedToDownloadVideoFileForTimelapseClip:(id)a0;
- (id)faceCropForClip:(id)a0 atOffset:(double)a1;
- (id)faceCropForPersonName:(id)a0;
- (id)faceCropImagesForClip:(id)a0 atOffset:(double)a1;
- (id)representativeImageForClip:(id)a0;
- (void)addFaceCropImageObserver:(id)a0 forClip:(id)a1 usingSignificantEvent:(id)a2;
- (void)removeFaceCropImageObserver:(id)a0 forPersonName:(id)a1;
- (void)addHeroFrameImageObserver:(id)a0 forClip:(id)a1;
- (void)removeHeroFrameImageObserver:(id)a0 forClip:(id)a1;
- (void)getPosterFrameImage:(id)a0 forClip:(id)a1 atOffset:(double)a2;
- (void)addPosterFrameImageObserver:(id)a0 forClip:(id)a1 atOffset:(double)a2;
- (void)removePosterFrameImageObserver:(id)a0 forClip:(id)a1 atOffset:(double)a2;
- (void)addDemoPosterFrameImageObserver:(id)a0 forClip:(id)a1 atOffset:(double)a2;
- (id)keyForClip:(id)a0;
- (void)resetForCameraDismissal;

@end
