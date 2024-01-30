@class FigCaptureRecordingSettings, FigCaptureStillImageSettings;

@interface BWNodeSampleBufferMessage : BWNodeMessage {
    struct opaqueCMSampleBuffer { } *_sampleBuffer;
    FigCaptureStillImageSettings *_stillImageSettings;
    FigCaptureRecordingSettings *_recordingSettings;
}

@property (readonly) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (readonly) FigCaptureStillImageSettings *stillImageSettings;
@property (readonly) FigCaptureRecordingSettings *recordingSettings;

+ (id)newMessageWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 recordingSettings:(id)a1;
+ (id)newMessageWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
+ (id)newMessageWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 stillImageSettings:(id)a1;

- (void)dealloc;

@end
