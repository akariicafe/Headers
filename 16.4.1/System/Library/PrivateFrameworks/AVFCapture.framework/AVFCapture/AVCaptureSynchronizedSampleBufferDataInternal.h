@interface AVCaptureSynchronizedSampleBufferDataInternal : NSObject {
    struct opaqueCMSampleBuffer { } *sampleBuffer;
    BOOL sampleBufferWasDropped;
    long long droppedReason;
    BOOL hasCorrespondingDepthData;
    BOOL hasCorrespondingVisionData;
    int constituentDeviceCaptureID;
}

@end
