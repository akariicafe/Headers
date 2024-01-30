@class BWMRCNode, NSString, BWMetadataDetectorGatingNode, BWPreviewHistogramNode, BWFaceDetectionNode, BWFaceTrackingNode;

@interface FigCaptureMetadataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWMetadataDetectorGatingNode *_metadataGatingNode;
    BWMRCNode *_mrcNode;
    BOOL _mrcSuspended;
    BOOL _mrcConnectionDisabled;
    BWPreviewHistogramNode *_previewHistogramNode;
    BWFaceTrackingNode *_faceTrackingNode;
    BWFaceDetectionNode *_faceDetectionNode;
    NSString *_sourceID;
    int _sourceDeviceType;
}

+ (void)initialize;

- (void)dealloc;

@end
