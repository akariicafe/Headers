@class BWFigVideoCaptureStream, NSString;

@interface FigCaptureVisionDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWFigVideoCaptureStream *_captureStream;
    NSString *_sourceID;
    int _sourceDeviceType;
}

+ (void)initialize;

- (void)dealloc;

@end
