@class HFCameraPosterFrameRequests, HFCameraImageCache, HFCameraTimelapsePosterFrameGenerator, NSObject;
@protocol OS_dispatch_queue, HFCameraTimelapseClipInfoProvider;

@interface HFCameraPosterFrameProvider : NSObject <HFCameraTimelapseVideoDownloaderDelegate, HFCameraTimelapsePosterFrameGeneratorDelegate>

@property (weak, nonatomic) HFCameraImageCache *imageCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bookkeepingQueue;
@property (retain, nonatomic) HFCameraPosterFrameRequests *posterFrameRequests;
@property (retain, nonatomic) HFCameraTimelapsePosterFrameGenerator *posterFrameGenerator;
@property (weak, nonatomic) id<HFCameraTimelapseClipInfoProvider> timelapseClipInfoProvider;
@property (nonatomic) struct CGSize { double width; double height; } posterFrameSize;

- (void).cxx_destruct;
- (void)didDownloadVideoFileForTimelapseClip:(id)a0 atLocation:(id)a1;
- (void)failedToDownloadVideoFileForTimelapseClip:(id)a0;
- (void)foundVideoFileForTimelapseClip:(id)a0 atLocation:(id)a1;
- (void)_checkImageCacheForDelegate:(id)a0 forHighQualityClip:(id)a1 atOffset:(double)a2;
- (void)_generateImageForDelegate:(id)a0 forHighQualityClip:(id)a1 atOffset:(double)a2;
- (void)_requestTimelapseFileForDelegate:(id)a0 forHighQualityClip:(id)a1 atOffset:(double)a2;
- (void)_requestTimelapsePosterFrameGenerationForTimelapseClip:(id)a0;
- (id)_timelapseClipForHighQualityClip:(id)a0;
- (void)_updateDelegate:(id)a0 withPosterFrame:(id)a1 atOffset:(double)a2 ForHighQualityClip:(id)a3;
- (void)didGeneratePosterFrame:(id)a0 forHighQualityClip:(id)a1 atOffset:(double)a2 withTimelapseOffset:(double)a3;
- (void)failedToFindTimelapseClipForHighQualityClip:(id)a0;
- (void)failedToGeneratePosterFrameForHighQualityClip:(id)a0 atOffset:(double)a1;
- (void)getPosterFrameForDelegate:(id)a0 forHighQualityClip:(id)a1 atOffset:(double)a2;
- (id)initWithImageCache:(id)a0 andTimelapseClipInfoProvider:(id)a1;

@end
