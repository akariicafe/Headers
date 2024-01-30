@interface AVSampleCursorInternal : NSObject {
    struct OpaqueFigSampleCursor { } *figSampleCursor;
    BOOL implementsGetDecodeTimeStamp;
    BOOL implementsGetDuration;
    BOOL implementsGetDependencyInfo;
    BOOL implementsTestReorderingBoundary;
    BOOL implementsCreateSampleBuffer;
    BOOL implementsCopyChunkDetails;
    BOOL implementsCopySampleLocation;
    BOOL implementsGetMPEG2FrameType;
}

@end
