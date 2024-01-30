@class NSArray, AVWeakReference, NSString, NSDictionary, NSMutableArray;

@interface AVCaptureMovieFileOutputInternal : NSObject {
    AVWeakReference *weakReference;
    NSMutableArray *recordingDelegatesArray;
    NSMutableArray *connectionsThatRecordVideoOrientationAndMirroringChangesAsMetadataTrack;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } movieFragmentInterval;
    NSArray *metadata;
    NSArray *availableVideoCodecs;
    NSString *videoCodec;
    NSDictionary *videoCompressionProperties;
    BOOL sendLastVideoPreviewFrame;
    BOOL recording;
    BOOL paused;
    NSString *bravoCameraSelectionBehaviorForRecording;
    struct ct_green_tea_logger_s { } *greenTeaLogger;
}

- (id)init;
- (void)dealloc;

@end
