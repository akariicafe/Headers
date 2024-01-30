@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DDScanServerDispatcher : NSObject {
    NSObject<OS_dispatch_queue> *_scannerQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_reportQueue;
    NSObject<OS_dispatch_source> *_memoryWarningSource;
    BOOL _memoryWarningInProgress;
    NSMutableDictionary *_scanners;
    BOOL _tearDownRequested;
    unsigned long long _jobIdentifier;
}

- (void)cancelJob:(long long)a0;
- (long long)scannerConf:(id)a0 sync:(BOOL)a1 shortTask:(BOOL)a2 runTask:(id /* block */)a3;
- (id)reportQueue;
- (long long)emptyIdentifier;
- (BOOL)reachedMaxSimultaneousTask;
- (void)recycleScanner:(id)a0 fromList:(id)a1 sameQueue:(BOOL)a2;
- (id)scannerListForConfiguration:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
