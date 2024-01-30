@class NSString, JFXCapturePreviewFrameStats, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface JFXCapturePreviewStats : NSObject {
    JFXCapturePreviewFrameStats *_runningAverage;
    NSMutableArray *_stats;
    NSObject<OS_dispatch_queue> *_q;
}

@property (retain, nonatomic) NSString *name;

- (id)add:(id)a0;
- (id)init;
- (void)clear;
- (void)print;
- (void).cxx_destruct;
- (void)_print_NoLock;
- (void)printSync;
- (id)runningAverage;

@end
