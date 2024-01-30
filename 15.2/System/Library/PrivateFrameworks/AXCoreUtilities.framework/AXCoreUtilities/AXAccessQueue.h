@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AXAccessQueue : NSObject

@property (copy, nonatomic) NSString *threadLocalStorageKey;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (nonatomic) unsigned long long specialBehaviors;
@property (readonly, nonatomic) BOOL behavesAsMainQueue;
@property (readonly, nonatomic) BOOL behavesWithoutErrorReporting;
@property (readonly, copy, nonatomic) NSString *label;

+ (id)mainAccessQueue;
+ (id)backgroundAccessQueue;

- (BOOL)canOnlyReadInCurrentExecutionThread;
- (id)initWithParentClass:(Class)a0 description:(id)a1 appendUUIDToLabel:(BOOL)a2;
- (BOOL)canReadInCurrentExecutionThread;
- (void)performSynchronousReadingBlock:(id /* block */)a0;
- (id)description;
- (unsigned long long)_accessQueueContextInCurrentExecutionThread;
- (void)performAsynchronousReadingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)canWriteInCurrentExecutionThread;
- (id)init;
- (id)_initWithLabel:(id)a0 appendUUIDToLabel:(BOOL)a1 specialBehaviors:(unsigned long long)a2;
- (void)performAsynchronousWritingBlock:(id /* block */)a0;
- (void)performSynchronousWritingBlock:(id /* block */)a0;
- (void)_performBlock:(id /* block */)a0 withDispatchFunction:(void /* function */ *)a1 synchronously:(BOOL)a2 accessQueueContext:(unsigned long long)a3;
- (void)afterDelay:(double)a0 processReadingBlock:(id /* block */)a1;
- (void)afterDelay:(double)a0 processWritingBlock:(id /* block */)a1;
- (id)initWithLabel:(id)a0 appendUUIDToLabel:(BOOL)a1;

@end
