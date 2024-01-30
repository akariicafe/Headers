@interface AVCaptureSynchronizedVisionDataInternal : NSObject {
    struct __CVBuffer { } *visionDataPixelBuffer;
    BOOL visionDataWasDropped;
    long long droppedReason;
}

@end
