@class NSString, NSMutableArray, NSConditionLock;

@interface MFInvocationQueue : NSObject <MFDiagnosticsGenerator> {
    NSConditionLock *_lock;
    NSMutableArray *_items;
    unsigned long long _maxThreads;
}

@property (nonatomic) unsigned long long maxThreadCount;
@property (nonatomic) int threadPriorityTrigger;
@property (nonatomic) double threadRecycleTimeout;
@property (readonly, nonatomic) unsigned long long invocationCount;
@property (readonly, nonatomic) unsigned long long threadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInvocationQueue;
+ (void)flushAllInvocationQueues;

- (id)init;
- (void).cxx_destruct;
- (void)addInvocation:(id)a0;
- (id)copyDiagnosticInformation;
- (void)dealloc;
- (void)_drainQueue:(id)a0;
- (id)initWithMaxThreadCount:(unsigned long long)a0;
- (void)removeAllItems;
- (void)didCancel:(id)a0;

@end
