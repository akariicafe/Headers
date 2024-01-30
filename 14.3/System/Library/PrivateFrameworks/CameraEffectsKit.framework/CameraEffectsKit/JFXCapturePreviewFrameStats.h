@interface JFXCapturePreviewFrameStats : NSObject {
    double _frameTimes[6];
}

@property (readonly, nonatomic) double *times;
@property (nonatomic) BOOL dropped;

- (void)printStats;
- (void)printLabels;

@end
