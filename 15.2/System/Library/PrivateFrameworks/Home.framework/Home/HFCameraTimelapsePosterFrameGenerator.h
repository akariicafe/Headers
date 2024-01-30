@class NSMutableDictionary, NSObject;
@protocol HFCameraTimelapsePosterFrameGeneratorDelegate, HFCameraTimelapseClipInfoProvider, OS_dispatch_queue;

@interface HFCameraTimelapsePosterFrameGenerator : NSObject <HFCameraImageGeneratorDelegate>

@property (weak, nonatomic) id<HFCameraTimelapsePosterFrameGeneratorDelegate> delegate;
@property (weak, nonatomic) id<HFCameraTimelapseClipInfoProvider> timelapseClipInfoProvider;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *generationQueue;
@property (retain, nonatomic) NSMutableDictionary *posterFrameGenerationRequests;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTimelapseClipInfoProvider:(id)a0 andDelegate:(id)a1;
- (id)generatePosterFramesForHighQualityClip:(id)a0 withStep:(unsigned long long)a1 atSize:(struct CGSize { double x0; double x1; })a2;
- (void)imageGenerator:(id)a0 didGenerateImage:(id)a1 requestedTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 actualTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 forKey:(id)a4;
- (void)imageGenerator:(id)a0 failedToGenerateImageForRequestedTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 actualTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 forKey:(id)a3;
- (void)imageGenerator:(id)a0 finishedGeneratingImagesForKey:(id)a1;
- (id)_generateOffsetsForHighQualityClip:(id)a0 withStep:(unsigned long long)a1;
- (void)_generatePosterFramesForTimelapseClip:(id)a0 withHighQualityClip:(id)a1 forOffsets:(id)a2 atSize:(struct CGSize { double x0; double x1; })a3;
- (void)_generatePosterFramesForAsset:(id)a0 forOffsets:(id)a1 atSize:(struct CGSize { double x0; double x1; })a2 withHighQualityClip:(id)a3 andTimelapseOffset:(double)a4;
- (id)_generateTimelapseOffsetsFromOffsets:(id)a0 forTimelapseDiff:(double)a1;
- (id)_generationRequestForImageGenerator:(id)a0 withKey:(id)a1;
- (void)_removeGenerationRequestForImageGenerator:(id)a0 withKey:(id)a1;

@end
