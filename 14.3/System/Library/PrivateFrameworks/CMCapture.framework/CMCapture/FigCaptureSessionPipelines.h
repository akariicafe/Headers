@class FigCaptureMicSourcePipeline, NSMutableArray;

@interface FigCaptureSessionPipelines : NSObject

@property (retain, nonatomic) FigCaptureMicSourcePipeline *micSourcePipeline;
@property (readonly, nonatomic) NSMutableArray *cameraSourcePipelines;
@property (readonly, nonatomic) NSMutableArray *metadataSourcePipelines;
@property (readonly, nonatomic) NSMutableArray *previewSinkPipelines;
@property (readonly, nonatomic) NSMutableArray *videoDataSinkPipelines;
@property (readonly, nonatomic) NSMutableArray *movieFileSinkPipelines;
@property (readonly, nonatomic) NSMutableArray *stillImageSinkPipelineSessionStorages;
@property (readonly, nonatomic) NSMutableArray *depthDataSinkPipelines;
@property (readonly, nonatomic) NSMutableArray *videoThumbnailSinkPipelines;
@property (readonly, nonatomic) NSMutableArray *metadataSinkPipelines;
@property (readonly, nonatomic) NSMutableArray *visionDataSinkPipelines;
@property (readonly, nonatomic) NSMutableArray *audioDataSinkPipelines;
@property (readonly, nonatomic) NSMutableArray *audioFileSinkPipelines;
@property (readonly, nonatomic) NSMutableArray *pointCloudDataSinkPipelines;
@property (readonly, nonatomic) NSMutableArray *cameraCalibrationDataSinkPipelines;

- (void)addPointCloudDataSinkPipeline:(id)a0;
- (id)cameraCalibrationDataSinkPipelineWithSinkID:(id)a0;
- (id)stillImageSinkPipelineSessionStorageWithSinkID:(id)a0;
- (id)previewSinkPipelineWithSourceID:(id)a0 sourceDeviceType:(int)a1;
- (id)depthDataSinkPipelineWithSourceID:(id)a0 sourceDeviceType:(int)a1;
- (id)videoThumbnailSinkPipelineWithSinkID:(id)a0;
- (id)pointCloudDataSinkPipelineWithSinkID:(id)a0;
- (void)addMovieFileSinkPipeline:(id)a0;
- (id)videoDataSinkPipelineWithSinkID:(id)a0;
- (void)dealloc;
- (id)cameraSourcePipelineWithSourceID:(id)a0;
- (id)movieFileSinkPipelineWithIrisStagingNode:(id)a0;
- (void)addCameraCalibrationDataSinkPipeline:(id)a0;
- (id)previewSinkPipelineWithSinkID:(id)a0;
- (id)metadataSinkPipelineWithSinkID:(id)a0;
- (id)depthDataSinkPipelineWithSinkID:(id)a0;
- (void)addDepthDataSinkPipeline:(id)a0;
- (id)movieFileSinkPipelineWithVideoConnectionID:(id)a0;
- (id)movieFileSinkPipelineWithSinkID:(id)a0;
- (id)movieFileSinkPipelineWithSourceID:(id)a0 sourceDeviceType:(int)a1;
- (id)movieFileSinkPipelineWithFileCoordinatorNode:(id)a0;
- (id)audioFileSinkPipelineWithSinkID:(id)a0;
- (void)addPreviewSinkPipeline:(id)a0;
- (void)addAudioDataSinkPipeline:(id)a0;
- (void)addCameraSourcePipeline:(id)a0;
- (id)movieFileSinkPipelineWithFileSinkNode:(id)a0;
- (id)audioDataSinkPipelineWithSinkID:(id)a0;
- (id)visionDataSinkPipelineWithSinkID:(id)a0;
- (void)addStillImageSinkPipelineSessionStorage:(id)a0;
- (void)addAudioFileSinkPipeline:(id)a0;
- (void)addVideoDataSinkPipeline:(id)a0;
- (id)metadataSinkPipelineWithSourceID:(id)a0 sourceDeviceType:(int)a1;
- (id)videoDataSinkPipelineWithSourceID:(id)a0 sourceDeviceType:(int)a1;
- (void)addMetadataSourcePipeline:(id)a0;
- (id)audioFileSinkPipelineWithFileSinkNode:(id)a0;
- (id)stillImageSinkPipelineSessionStorageWithStillImageCoordinator:(id)a0;
- (void)addVisionDataSinkPipeline:(id)a0;
- (void)addMetadataSinkPipeline:(id)a0;
- (void)addVideoThumbnailSinkPipeline:(id)a0;

@end
