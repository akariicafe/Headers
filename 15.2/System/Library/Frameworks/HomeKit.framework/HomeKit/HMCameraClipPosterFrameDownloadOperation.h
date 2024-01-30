@class HMCameraClipManager, NSString, HMCameraClipPosterFrame, NSURL, HMCameraClip;
@protocol HMCameraClipFetchAssetContextOperationDataSource;

@interface HMCameraClipPosterFrameDownloadOperation : HMFOperation <HMFLogging>

@property (readonly) HMCameraClipManager *clipManager;
@property (readonly) id<HMCameraClipFetchAssetContextOperationDataSource> dataSource;
@property (readonly) HMCameraClip *clip;
@property (readonly) HMCameraClipPosterFrame *posterFrame;
@property (copy) NSURL *destinationFileURL;
@property (copy) id /* block */ downloadPosterFrameCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)main;
- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (id)initWithClipManager:(id)a0 clip:(id)a1 posterFrame:(id)a2;
- (id)initWithClipManager:(id)a0 clip:(id)a1 posterFrame:(id)a2 dataSource:(id)a3;
- (void)finishWithImageData:(id)a0;
- (id)fetchImageData;
- (id)fetchAssetContext;
- (id)downloadImageDataForAssetContext:(id)a0;
- (id)decryptData:(id)a0;
- (id)writeImageData:(id)a0;

@end
