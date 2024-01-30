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
- (id)reportQueue;
- (void)recycleScanner:(id)a0 fromList:(id)a1 sameQueue:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (long long)scannerConf:(id)a0 sync:(BOOL)a1 shortTask:(BOOL)a2 runTask:(id /* block */)a3;
- (long long)emptyIdentifier;
- (BOOL)reachedMaxSimultaneousTask;
- (void)dealloc;
- (id)scannerListForConfiguration:(id)a0;

@end
