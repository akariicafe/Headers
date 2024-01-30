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

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelJob:(long long)a0;
- (id)reportQueue;
- (long long)emptyIdentifier;
- (id)scannerListForConfiguration:(id)a0;
- (BOOL)reachedMaxSimultaneousTask;
- (long long)scannerConf:(id)a0 sync:(BOOL)a1 shortTask:(BOOL)a2 runTask:(id /* block */)a3;
- (void)recycleScanner:(id)a0 fromList:(id)a1 sameQueue:(BOOL)a2;

@end
