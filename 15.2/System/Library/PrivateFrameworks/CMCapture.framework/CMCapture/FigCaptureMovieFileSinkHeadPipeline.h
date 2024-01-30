@class BWIrisStagingNode, NSString, NSMutableArray, NSArray, BWSceneClassifierSinkNode, BWAudioConverterNode, BWFileCoordinatorNode, BWNodeOutput, BWVideoOrientationMetadataNode, BWPhotoDecompressorNode, BWVideoDefringingNode;
@protocol BWSemanticStyleSceneObserver, BWMRCSceneObserver;

@interface FigCaptureMovieFileSinkHeadPipeline : FigCapturePipeline {
    BWSceneClassifierSinkNode *_sceneClassifierSinkNode;
    BWAudioConverterNode *_audioConverterNode;
    BWNodeOutput *_sceneClassifierPipelineUpstreamOutput;
    int _sourceDeviceType;
}

@property (nonatomic, setter=setMRCSceneObserver:) id<BWMRCSceneObserver> mrcSceneObserver;
@property (nonatomic) id<BWSemanticStyleSceneObserver> semanticStyleSceneObserver;
@property (readonly, nonatomic) NSString *videoConnectionID;
@property (readonly, nonatomic) NSString *videoSourceID;
@property (readonly, nonatomic) int videoSourceDeviceType;
@property (readonly, nonatomic) BWIrisStagingNode *irisStagingNode;
@property (readonly, nonatomic) BWFileCoordinatorNode *fileCoordinatorNode;
@property (readonly, nonatomic) BWVideoOrientationMetadataNode *videoOrientationMetadataNode;
@property (readonly, nonatomic) BWPhotoDecompressorNode *irisIntermediateJPEGPhotoDecompressorNode;
@property (readonly, nonatomic) BWVideoDefringingNode *videoDefringingNode;
@property (readonly, nonatomic) BWNodeOutput *videoOutput;
@property (readonly, nonatomic) BWNodeOutput *audioOutput;
@property (readonly, nonatomic) NSMutableArray *metadataOutputs;
@property (readonly, nonatomic) NSArray *indexesOfDetectedObjectsInMetadataOutputs;
@property (readonly, nonatomic) int indexOfVideoOrientationInMetadataOutputs;
@property (readonly, nonatomic) NSMutableArray *inferenceConnections;
@property (nonatomic) BOOL sceneClassifierSuspended;

- (id)initWithConfiguration:(id)a0 videoSourceCaptureOutput:(id)a1 audioSourceCaptureOutput:(id)a2 detectedObjectBoxedMetadataOutputs:(id)a3 objectDetectionSourceOutput:(id)a4 metadataSourcePipelineOutputs:(id)a5 graph:(id)a6 parentPipeline:(id)a7 inferenceScheduler:(id)a8 captureDevice:(id)a9 audioSourceDelegate:(id)a10 fileCoordinatorStatusDelegate:(id)a11 irisRequestDelegate:(id)a12 masterClock:(struct OpaqueCMClock { } *)a13;
- (void)dealloc;

@end
