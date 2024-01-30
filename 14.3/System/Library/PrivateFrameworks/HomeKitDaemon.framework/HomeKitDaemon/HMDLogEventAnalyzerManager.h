@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMDLogEventAnalyzerManager : HMFObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_analyzers;
}

@property (class, readonly) HMDLogEventAnalyzerManager *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)startAnalyzers;

@end
