@class NSObject, VSSpeechRequest, NSOperation, NSMutableArray;
@protocol VSSpeechTaskProtocol, OS_dispatch_queue;

@interface VSSpeechTaskQueue : NSObject

@property (retain, nonatomic) NSMutableArray *eagerTasks;
@property (retain, nonatomic) NSMutableArray *speakTasks;
@property (retain, nonatomic) NSOperation<VSSpeechTaskProtocol> *currentTask;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } threadMutex;
@property (nonatomic) struct _opaque_pthread_mutexattr_t { long long __sig; char __opaque[8]; } threadMutexAttr;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *speakingQueue;
@property (retain, nonatomic) VSSpeechRequest *lastSynthesisRequest;
@property (nonatomic) unsigned long long lastSynthesisRequestCreatedTimeStamp;

+ (id)mainDeviceQueue;
+ (id)parallelQueueWithIdentifier:(id)a0;

- (void)cancelTask:(id)a0;
- (void)addTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)tasksWithDelegate:(id)a0;
- (id)taskWithCreatedTimeStamp:(unsigned long long)a0;
- (unsigned long long)createdTimestampWithTask:(id)a0;
- (void)suspendCurrentTask;
- (void)resumeCurrentTask;
- (void)spinNextTask;

@end
