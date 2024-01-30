@class NSString, PBCodable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface _SYMultiSuspendableQueue : NSObject <SYStateLoggable> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    unsigned long long _stateHandle;
    _Atomic int _resumeCount;
    NSString *_logDescriptor;
    NSMutableArray *_latestSuspendBacktraces;
    NSMutableArray *_latestResumeBacktraces;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (readonly, nonatomic) unsigned int qosClass;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, nonatomic) PBCodable *stateForLogging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sync:(id /* block */)a0;
- (void)async:(id /* block */)a0;
- (id)initWithName:(id)a0 qosClass:(unsigned int)a1 serial:(BOOL)a2;
- (id)initWithName:(id)a0 qosClass:(unsigned int)a1 serial:(BOOL)a2 target:(id)a3;
- (void)barrierAsync:(id /* block */)a0;
- (void)barrierSync:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)suspend;
- (void)resume;
- (void)dealloc;

@end
