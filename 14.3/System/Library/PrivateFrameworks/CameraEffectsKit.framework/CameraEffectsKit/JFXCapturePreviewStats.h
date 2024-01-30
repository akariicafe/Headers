@class NSString, JFXCapturePreviewFrameStats, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface JFXCapturePreviewStats : NSObject {
    JFXCapturePreviewFrameStats *_runningAverage;
    NSMutableArray *_stats;
    NSObject<OS_dispatch_queue> *_q;
}

@property (retain, nonatomic) NSString *name;

- (id)add:(id)a0;
- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (void)print;
- (void)_print_NoLock;
- (id)runningAverage;
- (void)printSync;

@end
