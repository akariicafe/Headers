@class NSString, NSArray, AVVideoCompositionCoreAnimationTool;

@interface AVVideoCompositionInternal : NSObject {
    unsigned long long changeSeed;
    NSString *builtInCompositorName;
    Class customCompositorClass;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } frameDuration;
    int sourceTrackIDForFrameTiming;
    struct CGSize { double width; double height; } renderSize;
    float renderScale;
    NSString *colorPrimaries;
    NSString *colorYCbCrMatrix;
    NSString *colorTransferFunction;
    NSArray *instructions;
    BOOL auxiliaryTrackLayerSetLast;
    AVVideoCompositionCoreAnimationTool *animationTool;
    NSArray *sourceSampleDataTracks;
}

@end
